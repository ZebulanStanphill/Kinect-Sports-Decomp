typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Obj_823845A0 {
    char pad0[0x10];
    char a[0xf0];               /* 0x010 */
    char b[0xf0];               /* 0x100 */
    int f1f0;                   /* 0x1f0 */
    char pad1f4[0xc];
    __vector4 v[5];             /* 0x200 */
    float f250[6];              /* 0x250 */
    char pad268[8];
    int f270;                   /* 0x270 */
    int f274;
    int f278;
    int f27c;
    int dirty;                  /* 0x280 */
} Obj_823845A0;

extern void fn_82383F20(void *p);

static __forceinline void Store(__vector4 *d, __vector4 v)
{
    *d = v;
}

void fn_823845A0(Obj_823845A0 *self)
{
    if (self->dirty != 0) {
        fn_82383F20(self->a);
        fn_82383F20(self->b);
        self->f250[0] = 0.0f;
        self->f250[1] = 0.0f;
        self->f250[2] = 0.0f;
        self->f270 = 1;
        self->f250[3] = 0.0f;
        self->f1f0 = 0;
        self->f250[4] = 0.0f;
        self->f274 = 1;
        self->f250[5] = 0.0f;
        self->f278 = 1;
        Store(&self->v[0], __VMXGetReg(77));
        self->f27c = 1;
        Store(&self->v[1], __VMXGetReg(77));
        self->dirty = 0;
        Store(&self->v[2], __VMXGetReg(77));
        Store(&self->v[3], __VMXGetReg(77));
        Store(&self->v[4], __VMXGetReg(77));
    }
}
