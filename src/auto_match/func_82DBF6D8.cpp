#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpConstraintMotor.h"

class hkpRagdollConstraintData : public hkpConstraintData
{
  public:
    hkpRagdollConstraintData();

    __declspec(align(16)) unsigned char m_atoms[0xd0];
    hkpConstraintMotor *m_motors[3];
    unsigned char m_tail[0x54];
};

class hkpPrismaticConstraintData : public hkpConstraintData
{
  public:
    hkpPrismaticConstraintData();

    __declspec(align(16)) unsigned char m_atoms[0x9c];
    hkpConstraintMotor *m_motor;
    unsigned char m_tail[0x20];
};

class hkpLimitedHingeConstraintData : public hkpConstraintData
{
  public:
    hkpLimitedHingeConstraintData();

    __declspec(align(16)) unsigned char m_atoms[0xa0];
    hkpConstraintMotor *m_motor;
    unsigned char m_tail[0x2c];
};

extern "C" void fn_8260A488(void *, const void *);
extern "C" void fn_8260A568(void *, const void *);
extern "C" void fn_8260A648(void *, const void *);

static __forceinline void CloneMotor(hkpConstraintMotor **slot)
{
    if (*slot) {
        *slot = (*slot)->clone();
    }
}

extern "C" hkpConstraintData *fn_82DBF6D8(hkpConstraintData *self)
{
    switch (self->getType()) {
    case 7: {
        hkpRagdollConstraintData *copy = new hkpRagdollConstraintData;
        fn_8260A648(copy->m_atoms, static_cast<hkpRagdollConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        hkpConstraintMotor **motor = copy->m_motors;
        for (int i = 3; i != 0; --i, ++motor) {
            if (*motor) {
                *motor = (*motor)->clone();
            }
        }
        return copy;
    }
    case 6: {
        hkpPrismaticConstraintData *copy = new hkpPrismaticConstraintData;
        fn_8260A568(copy->m_atoms, static_cast<hkpPrismaticConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        CloneMotor(&copy->m_motor);
        return copy;
    }
    case 2: {
        hkpLimitedHingeConstraintData *copy = new hkpLimitedHingeConstraintData;
        fn_8260A488(copy->m_atoms, static_cast<hkpLimitedHingeConstraintData *>(self)->m_atoms);
        copy->m_userData = self->m_userData;
        CloneMotor(&copy->m_motor);
        return copy;
    }
    default:
        return 0;
    }
}
