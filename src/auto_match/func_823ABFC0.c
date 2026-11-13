typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Vec_823ABFC0 {
    __vector4 v;
} Vec_823ABFC0;

typedef struct Obj_823ABFC0 {
    void *target;
    char pad4[0x1c];
    __vector4 prev;
    __vector4 cur;
} Obj_823ABFC0;

extern Vec_823ABFC0 fn_823AD468(Obj_823ABFC0 *self);
extern void fn_823AD260(Obj_823ABFC0 *self, float dt);
extern void fn_823AD158(Obj_823ABFC0 *self);

static __forceinline void Store(__vector4 *d, __vector4 v)
{
    *d = v;
}

void fn_823ABFC0(Obj_823ABFC0 *self, float dt)
{
    if (self->target != 0) {
        self->prev = self->cur;
        self->cur = fn_823AD468(self).v;
    } else {
        Store(&self->prev, __VMXGetReg(77));
        Store(&self->cur, __VMXGetReg(77));
    }
    fn_823AD260(self, dt);
    fn_823AD158(self);
}
