typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */
__vector4 __VMXGetReg(int n);

typedef struct Obj_823D6368 {
    __vector4 v[2];
    int count;
    int pad24[3];
    int a;
    int b;
    float f;
} Obj_823D6368;

void fn_823D6368(Obj_823D6368 *self)
{
    __vector4 *p;
    __vector4 zero = __VMXGetReg(77);

    self->count = 0;
    for (p = self->v; p != self->v + 2; p++) {
        *p = zero;
    }
    self->a = 0;
    self->b = 0;
    self->f = 0.0f;
}
