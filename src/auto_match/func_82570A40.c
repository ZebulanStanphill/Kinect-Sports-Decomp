// Applies a child transform to a parent pose unless the transform belongs to another owner:
// position += rotate(offset, orientation); orientation = rotation * orientation.

#include "xdk/vectorintrinsics.h"

typedef struct Transform_82570A40 {
    char pad00[0x8];
    void *owner;            // 0x08
    char pad0c[0x4];
    __vector4 offset;       // 0x10
    __vector4 rotation;     // 0x20
} Transform_82570A40;

/* Quaternion product q1 * q2 with a precomputed sign mask (0x80000000 per lane). */
static __forceinline __vector4 QuaternionMultiply(__vector4 q1, __vector4 q2, __vector4 signMask)
{
    __vector4 q2wzyx, q2zwxy, q2yxwz, negated, nx, ny, nz, nw, x, y, z, w;

    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
}

static __forceinline __vector4 Multiply(__vector4 q1, __vector4 q2)
{
    __vector4 signMask = __vspltisw(-1);
    signMask = __vslw(signMask, signMask);
    return QuaternionMultiply(q1, q2, signMask);
}

/* conj(q) * (v, 0) * q */
static __forceinline __vector4 Rotate(__vector4 v, __vector4 q)
{
    __vector4 signMask, a, c, r;

    signMask = __vspltisw(-1);
    a = __vspltisw(0);
    signMask = __vslw(signMask, signMask);
    a = __vrlimi(a, v, 0xe, 0);
    c = __vrlimi(__vxor(q, signMask), q, 1, 0);
    r = QuaternionMultiply(c, a, signMask);
    return QuaternionMultiply(r, q, signMask);
}

void fn_82570A40(Transform_82570A40 *self, __vector4 *position, __vector4 *orientation, void *owner)
{
    if (self->owner != 0 && self->owner != owner) {
        return;
    }
    *position = __vaddfp(*position, Rotate(self->offset, *orientation));
    *orientation = Multiply(self->rotation, *orientation);
}
