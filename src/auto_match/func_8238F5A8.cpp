#include "stdext/xmemory.h"

typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

struct Impl;

struct Func {
    union {
        double align;
        char space[16];
    } u;
    Impl *impl;
    int pad[3];
};

__declspec(align(16)) struct BindObj {
    char data[0xb0];
};

struct BindImpl {
    void *vtbl;
    BindObj b;
};


struct Self2 {
    char pad[0x60];
    char cb[0x1c];
    char list[4];
};

extern "C" {
extern void *lbl_821B4948[];
Func *fn_822C5B18(Func *dst, const void *src);
BindObj *fn_82391AB0(BindObj *out, Func *fn, __vector4 v1, __vector4 v2, __vector4 v3, float f1, int a, int b, int c, float f2, float f3);
void fn_82359C18(void *obj);
BindObj *fn_82392860(BindObj *dst, const BindObj *src);
void fn_82390788(void *list, Func *f);
}

extern "C" void fn_8238F5A8(Self2 *self, __vector4 v1, __vector4 v2, __vector4 v3, float f1, int a, int b, int c, float f2, float f3)
{
    Func t1;
    BindObj b0, b1, b2;
    Func f;
    BindObj *p = fn_82391AB0(&b0, fn_822C5B18(&t1, self->cb), v1, v2, v3, f1, a, b, c, f2, f3);
    fn_82392860(&b1, p);
    fn_82392860(&b2, &b1);
    BindImpl *impl = std::_Allocate(1, (BindImpl *)0);
    impl->vtbl = lbl_821B4948;
    fn_82392860(&impl->b, &b2);
    f.impl = (Impl *)impl;
    fn_82359C18(&b2);
    fn_82359C18(&b1);
    fn_82359C18(p);
    fn_82390788(self->list, &f);
    fn_82359C18(&f);
}
