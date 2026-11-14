typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

typedef struct {
    char pad0[0x10];
    int state;
    char pad14[0x40 - 0x14];
    __vector4 position;
    float scale;
    int a;
    int b;
    char pad5c[0x78 - 0x5c];
    int pending;
} Obj_824D8948;

int fn_824D8948(Obj_824D8948 *self, __vector4 *position, float *scale, int *a, int *b)
{
    *position = self->position;
    *scale = self->scale;
    *a = self->a;
    *b = self->b;
    if (self->state == 3 && self->pending == 0)
        return 1;
    return 0;
}
