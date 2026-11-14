typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */
__vector4 __VMXGetReg(int n);

typedef struct Self_823D63B0 {
    __vector4 v[2];
    int f20;
    float f24;
    int f28;
    int f2c;
} Self_823D63B0;

void fn_823D63B0(Self_823D63B0 *self)
{
    __vector4 *p;
    __vector4 zero = __VMXGetReg(77);

    self->f20 = 0;
    self->f28 = 2;
    self->f2c = 0;
    self->f24 = 0.0f;
    for (p = self->v; p != self->v + 2; p++)
        *p = zero;
}
