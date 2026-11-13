typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct String_823069B8 {
    char data[0x1c];
} String_823069B8;

typedef struct Anim_823069B8 {
    char pad0[0xc0];
    void *idleSet;
} Anim_823069B8;

typedef struct Owner_823069B8 {
    char pad0[0x114];
    Anim_823069B8 *anim;
} Owner_823069B8;

typedef struct Obj_823069B8 {
    char pad0[0xc];
    Owner_823069B8 *owner;
    char pad10[0x70];
    __vector4 v80;
    __vector4 v90;
    int fA0;
    char padA4[0xc];
    __vector4 vB0;
    char padC0[0x10];
    int fD0;
    int fD4;
    int fD8;
    int fDC;
} Obj_823069B8;

extern void fn_82230110(String_823069B8 *s, const char *text);
extern void fn_82230300(String_823069B8 *s, int a, int b);
extern void fn_822FB198(void *set, String_823069B8 *name);

static __forceinline void Store(__vector4 *d, __vector4 v)
{
    *d = v;
}

void fn_823069B8(Obj_823069B8 *self)
{
    String_823069B8 name;

    Store(&self->v80, __VMXGetReg(77));
    self->fD0 = 0;
    self->fD4 = 0;
    Store(&self->v90, __VMXGetReg(77));
    self->fA0 = 0;
    Store(&self->vB0, __VMXGetReg(77));
    self->fD8 = -1;
    self->fDC = 0;
    fn_82230110(&name, "idleset_challenge");
    fn_822FB198(self->owner->anim->idleSet, &name);
    fn_82230300(&name, 1, 0);
}
