typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 v, unsigned int i);

typedef struct Matrix3_82D9FEB8 {
    __vector4 col[3];
} Matrix3_82D9FEB8;

typedef struct Body_82D9FEB8 {
    char pad0[0x10];
    Matrix3_82D9FEB8 inertia;         /* 0x10 */
    __vector4 inverseMass;            /* 0x40 */
    const Matrix3_82D9FEB8 *rotation; /* 0x50 */
} Body_82D9FEB8;

typedef struct Scaling_82D9FEB8 {
    char pad0[0x20];
    __vector4 scaleA; /* 0x20 */
    __vector4 scaleB; /* 0x30 */
} Scaling_82D9FEB8;

extern void fn_82CEBE20(Matrix3_82D9FEB8 *self, const __vector4 *diagonal);
extern void fn_82CEC6E0(Matrix3_82D9FEB8 *self, const Matrix3_82D9FEB8 *a, const Matrix3_82D9FEB8 *b);
extern void fn_82CEC730(Matrix3_82D9FEB8 *self, const Matrix3_82D9FEB8 *a, const Matrix3_82D9FEB8 *b);
extern void fn_82CEC7E0(Matrix3_82D9FEB8 *self, const Matrix3_82D9FEB8 *a, const Matrix3_82D9FEB8 *b);

void fn_82D9FEB8(Scaling_82D9FEB8 *self, void *unused1, Body_82D9FEB8 *bodyA, void *unused3,
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
            __vector4 uniform = __vspltw(scale, 0);
            fn_82CEBE20(&body->inertia, &uniform);
        } else {
            const Matrix3_82D9FEB8 *rotation = body->rotation;
            Matrix3_82D9FEB8 local;
            Matrix3_82D9FEB8 scaled;

            fn_82CEC7E0(&local, rotation, &body->inertia);
            fn_82CEC6E0(&scaled, &local, rotation);
            scaled.col[0].vector4_f32[0] *= x;
            scaled.col[1].vector4_f32[1] *= y;
            scaled.col[2].vector4_f32[2] *= z;
            fn_82CEC730(&local, &scaled, rotation);
            fn_82CEC6E0(&body->inertia, rotation, &local);
        }
        scale = self->scaleB;
        body = bodyB;
    }
}
