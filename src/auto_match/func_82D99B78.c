/* Havok: hkpWheelConstraintData::isValid (vtable slot). Both local transforms of the suspension base,
   the steering rotations completed with a zero translation, and the suspension limit (min <= max)
   must pass; fn_82CE6150 is the transform check with an epsilon, writing an hkBool. */

#include "xdk/vectorintrinsics.h"

typedef struct Rotation_82D99B78 {
    __vector4 column[3];
} Rotation_82D99B78;

typedef struct Transform_82D99B78 {
    Rotation_82D99B78 rotation; /* 0x00 */
    __vector4 translation;      /* 0x30 */
} Transform_82D99B78;

typedef struct WheelConstraintData_82D99B78 {
    char pad0[0x20];
    Transform_82D99B78 transformA; /* 0x20 */
    Transform_82D99B78 transformB; /* 0x60 */
    char padA0[0x4];
    float linMin; /* 0xa4 */
    float linMax; /* 0xa8 */
    char padAC[0x24];
    Rotation_82D99B78 rotationA; /* 0xd0 */
    Rotation_82D99B78 rotationB; /* 0x100 */
} WheelConstraintData_82D99B78;

extern __vector4 lbl_8323B1A0;
extern float lbl_82006848;
extern char *fn_82CE6150(char *out, const Transform_82D99B78 *transform, float epsilon);

static __forceinline void InitTransform(Transform_82D99B78 *transform, const Rotation_82D99B78 *rotation,
                                        const __vector4 *translation)
{
    transform->rotation.column[0] = rotation->column[0];
    transform->rotation.column[1] = rotation->column[1];
    transform->rotation.column[2] = rotation->column[2];
    transform->translation = *translation;
}

char *fn_82D99B78(char *out, WheelConstraintData_82D99B78 *self)
{
    Transform_82D99B78 steeringA;
    Transform_82D99B78 steeringB;
    char okA;
    char okB;
    char okSteeringA;
    char okSteeringB;
    char result;
    float epsilon;

    InitTransform(&steeringA, &self->rotationA, &lbl_8323B1A0);
    InitTransform(&steeringB, &self->rotationB, &lbl_8323B1A0);
    epsilon = lbl_82006848;
    if (*fn_82CE6150(&okA, &self->transformA, epsilon) == 0 ||
        *fn_82CE6150(&okB, &self->transformB, epsilon) == 0 ||
        *fn_82CE6150(&okSteeringA, &steeringA, epsilon) == 0 ||
        *fn_82CE6150(&okSteeringB, &steeringB, epsilon) == 0 || self->linMin > self->linMax)
        result = 0;
    else
        result = 1;
    *out = result;
    return out;
}
