#include "havok/hkTransform.h"

typedef struct Body_82D959A8 {
    char pad0[0x18];
    const hkTransform *transform;  /* 0x18 */
} Body_82D959A8;

typedef struct Self_82D959A8 {
    char pad0[0xc];
    void *shape;                   /* 0x0c */
    int pad10;
    Body_82D959A8 *bodyA;          /* 0x14 */
    Body_82D959A8 *bodyB;          /* 0x18 */
} Self_82D959A8;

extern "C" hkVector4 *fn_82DBE7C8(void *shape);
extern "C" hkVector4 *fn_82DBE8C8(void *shape);

extern "C" void fn_82D959A8(Self_82D959A8 *self, hkVector4 *outA, hkVector4 *outB)
{
    hkVector4 a;
    a = *fn_82DBE7C8(self->shape);
    hkVector4 b;
    b = *fn_82DBE8C8(self->shape);
    const hkTransform *ta = self->bodyA->transform;
    const hkTransform *tb = self->bodyB->transform;
    outA->setTransformedPos(*ta, a);
    outB->setTransformedPos(*tb, b);
}
