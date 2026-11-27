#include "havok/hkTransform.h"

struct ConstraintData_82571BB8 {
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual int getType();

    char reserved04[0xc0];
    float minLimit; /* 0xc4 */
    float maxLimit; /* 0xc8 */
};

struct World_82571BB8;

struct Motion_82571BB8 {
    char reserved00[0xe0];
    hkVector4 linearVelocity; /* 0xe0 */
};

struct Entity_82571BB8 {
    char reserved00[8];
    World_82571BB8 *world; /* 0x08 */
    char reserved0c[0xd4];
    Motion_82571BB8 motion; /* 0xe0 */
};

struct Runtime_82571BB8 {
    char reserved00[0x14];
    float value; /* 0x14 */
};

struct Internal_82571BB8 {
    char reserved00[0x1c];
    Runtime_82571BB8 *runtime; /* 0x1c */
};

struct Constraint_82571BB8 {
    char reserved00[0xc];
    ConstraintData_82571BB8 *data; /* 0x0c */
    char reserved10[4];
    Entity_82571BB8 *entities[2]; /* 0x14 */
    char reserved1c[0x14];
    Internal_82571BB8 *internal; /* 0x30 */
};

struct Joint_82571BB8 {
    hkVector4 position;              /* 0x00 */
    hkVector4 relativeVelocity;      /* 0x10 */
    Constraint_82571BB8 *constraint; /* 0x20 */
    float minLimit;                  /* 0x24 */
    float maxLimit;                  /* 0x28 */
    float value;                     /* 0x2c */
    char reserved30[0x30];
};

struct Owner_82571BB8 {
    char reserved00[0x490];
    Joint_82571BB8 *jointsBegin; /* 0x490 */
    Joint_82571BB8 *jointsEnd;   /* 0x494 */
};

extern "C" {
int fn_82DED480(Constraint_82571BB8 *constraint, hkVector4 *pivotInA, hkVector4 *pivotInB);
float fn_82D80A40(World_82571BB8 *world);
void fn_82D93168(Motion_82571BB8 *motion, float time, hkTransform *transformOut);
void fn_82571BB8(Owner_82571BB8 *self);
}

void fn_82571BB8(Owner_82571BB8 *self)
{
    Joint_82571BB8 *joint = self->jointsBegin;
    Joint_82571BB8 *end = self->jointsEnd;

    for (; joint < end; joint++) {
        Constraint_82571BB8 *constraint = joint->constraint;
        Entity_82571BB8 *entityA = constraint->entities[0];
        Entity_82571BB8 *entityB = constraint->entities[1];
        hkVector4 pivotA;
        hkVector4 pivotB;

        if (fn_82DED480(constraint, &pivotA, &pivotB) != 1) {
            hkTransform transform;
            hkVector4 position;

            fn_82D93168(&entityA->motion, fn_82D80A40(entityA->world), &transform);
            position.setTransformedPos(transform, pivotA);
            joint->position = position;
        } else {
            hkTransform transform;

            fn_82D93168(&entityA->motion, fn_82D80A40(entityA->world), &transform);
            joint->position = transform.getTranslation();
        }
        if (joint->constraint->data->getType() == 2) {
            ConstraintData_82571BB8 *data = joint->constraint->data;

            joint->value = joint->constraint->internal->runtime->value * -1.0f;
            joint->minLimit = data->minLimit;
            joint->maxLimit = data->maxLimit;
        }
        joint->relativeVelocity.setSub4(entityA->motion.linearVelocity, entityB->motion.linearVelocity);
    }
}
