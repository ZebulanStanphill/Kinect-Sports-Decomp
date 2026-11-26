#include "havok/hkMatrix3.h"

typedef struct Body_82D9FEB8 {
    char pad0[0x10];
    hkMatrix3 inertia;         /* 0x10 */
    __vector4 inverseMass;            /* 0x40 */
    const hkMatrix3 *rotation; /* 0x50 */
} Body_82D9FEB8;

typedef struct Scaling_82D9FEB8 {
    char pad0[0x20];
    __vector4 scaleA; /* 0x20 */
    __vector4 scaleB; /* 0x30 */
} Scaling_82D9FEB8;

extern "C" void fn_82CEC730(hkMatrix3 *self, const hkMatrix3 *a, const hkMatrix3 *b);
extern "C" void fn_82CEC7E0(hkMatrix3 *self, const hkMatrix3 *a, const hkMatrix3 *b);

extern "C" void fn_82D9FEB8(Scaling_82D9FEB8 *self, void *unused1, Body_82D9FEB8 *bodyA, void *unused3,
                 Body_82D9FEB8 *bodyB)
{
    Body_82D9FEB8 *body = bodyA;
    __vector4 scale = self->scaleA;
    int i;

    for (i = 0; i < 2; i++) {
        float x = scale.vector4_f32[0];
        float y = scale.vector4_f32[1];
        float z = scale.vector4_f32[2];

        body->inverseMass = __vmulfp(body->inverseMass, scale);
        if (x == y && y == z) {
            hkSimdReal uniform;
            uniform.m_real = __vspltw(scale, 0);
            body->inertia.mul(uniform);
        } else {
            const hkMatrix3 *rotation = body->rotation;
            hkMatrix3 local;
            hkMatrix3 scaled;

            fn_82CEC7E0(&local, rotation, &body->inertia);
            scaled.setMul(local, *rotation);
            scaled.m_col0(0) *= x;
            scaled.m_col1(1) *= y;
            scaled.m_col2(2) *= z;
            fn_82CEC730(&local, &scaled, rotation);
            body->inertia.setMul(*rotation, local);
        }
        scale = self->scaleB;
        body = bodyB;
    }
}
