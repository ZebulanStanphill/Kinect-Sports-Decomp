typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Obj_8236B080 {
    char pad0[0xf00];
    int fF00;                   /* 0xf00 */
    char padF04[0xc];
    __vector4 v[5];             /* 0xf10 */
    int fF60;                   /* 0xf60 */
    char padF64[0xc];
    __vector4 w[2];             /* 0xf70 */
    float fF90;                 /* 0xf90 */
    int fF94;
    int fF98;
    int fF9C;
    int fFA0;
    int fFA4;
    float fFA8;                 /* 0xfa8 */
    float fFAC;
    float fFB0;
} Obj_8236B080;

static __forceinline void Store(__vector4 *d, __vector4 v)
{
    *d = v;
}

void fn_8236B080(Obj_8236B080 *self)
{
    self->fF90 = 0.0f;
    self->fFA8 = 0.0f;
    self->fFAC = 0.0f;
    self->fFB0 = 0.0f;
    self->fF60 = 0;
    Store(&self->v[0], __VMXGetReg(77));
    self->fF00 = -1;
    Store(&self->v[1], __VMXGetReg(77));
    self->fF94 = 0;
    Store(&self->v[2], __VMXGetReg(77));
    self->fF98 = 0;
    Store(&self->v[3], __VMXGetReg(77));
    self->fF9C = 0;
    Store(&self->v[4], __VMXGetReg(77));
    self->fFA0 = 0;
    Store(&self->w[0], __VMXGetReg(77));
    self->fFA4 = 0;
    Store(&self->w[1], __VMXGetReg(77));
}
