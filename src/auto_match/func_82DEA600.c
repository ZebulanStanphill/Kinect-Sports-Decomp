/* Havok: runs fn_82DEA460 on a zeroed result (two floats, an origin and a rotation) and copies the
   maximum, the origin and the rotation into the output. */

#include "xdk/vectorintrinsics.h"

typedef struct Rotation_82DEA600 {
    __vector4 column[3];
} Rotation_82DEA600;

typedef struct Result_82DEA600 {
    float minimum;              /* 0x00 */
    float maximum;              /* 0x04 */
    __vector4 origin;           /* 0x10 */
    Rotation_82DEA600 rotation; /* 0x20 */
} Result_82DEA600;

typedef struct Output_82DEA600 {
    char pad0[0x50];
    Rotation_82DEA600 rotation; /* 0x50 */
    __vector4 origin;           /* 0x80 */
    float maximum;              /* 0x90 */
} Output_82DEA600;

extern void fn_82DEA460(void *source, float tolerance, Result_82DEA600 *result);

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void SetZeroRotation(Rotation_82DEA600 *rotation)
{
    __vector4 zero;

    SetZero(&zero);
    rotation->column[0] = zero;
    rotation->column[1] = zero;
    rotation->column[2] = zero;
}

static __forceinline void CopyRotation(Rotation_82DEA600 *to, const Rotation_82DEA600 *from)
{
    to->column[0] = from->column[0];
    to->column[1] = from->column[1];
    to->column[2] = from->column[2];
}

void fn_82DEA600(void *source, float tolerance, Output_82DEA600 *out)
{
    Result_82DEA600 result;

    result.minimum = 0.0f;
    result.maximum = 0.0f;
    SetZero(&result.origin);
    SetZeroRotation(&result.rotation);
    fn_82DEA460(source, tolerance, &result);
    out->maximum = result.maximum;
    out->origin = result.origin;
    CopyRotation(&out->rotation, &result.rotation);
}
