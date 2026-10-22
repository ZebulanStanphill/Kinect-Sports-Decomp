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
    char data[0x90];
    float f;
    char pad[0xc];
};

struct BindImpl {
    void *vtbl;
    BindObj b;
};

struct Self {
    char pad[0x18];
    Func cb;
    char pad38[0x7c - 0x38];
    char list[4];
};

extern "C" {
extern void *lbl_821B4900[];
Func *fn_822C5B18(Func *dst, const Func *src);
void fn_82392CE0(BindObj *out, Func *fn, __vector4 v1, __vector4 v2, __vector4 v3, float f, int a, int b, int c);
void fn_82359C18(void *obj);
BindObj *fn_823926F0(BindObj *dst, const BindObj *src);
void fn_82390788(void *list, Func *f);
}

extern "C" void fn_8238F198(Self *self, __vector4 v1, __vector4 v2, __vector4 v3, float f1, int a, int b, int c, float f2)
{
    Func t1, t2, t3;
    BindObj b0, b1, b2, b3, b4, b5, b6;
    Func f;
    Func *p1 = fn_822C5B18(&t1, &self->cb);
    Func *p2 = fn_822C5B18(&t2, p1);
    fn_82392CE0(&b0, fn_822C5B18(&t3, p2), v1, v2, v3, f1, a, b, c);
    b0.f = f2;
    fn_82359C18(p2);
    BindObj *q1 = fn_823926F0(&b1, &b0);
    BindObj *q2 = fn_823926F0(&b2, q1);
    fn_823926F0(&b3, q2);
    fn_82359C18(q2);
    fn_82359C18(q1);
    fn_823926F0(&b4, &b3);
    fn_82359C18(&b3);
    fn_82359C18(&b0);
    fn_82359C18(p1);
    fn_823926F0(&b5, &b4);
    fn_823926F0(&b6, &b5);
    BindImpl *impl = std::_Allocate(1, (BindImpl *)0);
    impl->vtbl = lbl_821B4900;
    fn_823926F0(&impl->b, &b6);
    f.impl = (Impl *)impl;
    fn_82359C18(&b6);
    fn_82359C18(&b5);
    fn_82359C18(&b4);
    fn_82390788(self->list, &f);
    fn_82359C18(&f);
}
