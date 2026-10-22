#include "stdext/xmemory.h"

struct Base;
struct Hash;
extern "C" {
void fn_827D9980(void *self, Base *b, int a5, int a6, int one);
void fn_8256BE68(void *p, int a);
void fn_827DA0D0(void *p, int a);
void fn_827DDEE8(void *p);
void fn_82587028(Hash *h, int n);
void fn_8260D2A8(void *p, int a);
void RtlInitializeCriticalSection(void *cs);
extern void *lbl_821CAAD0[];
extern const float lbl_821CA45C[2];
}

extern "C" __declspec(selectany) const float lbl_821CA45C[2] = { 1.0f, 1.0f };

struct Base {
    int f0;
};

struct Derived {
    int f0;
    Base b;
};

struct Ptr {
    int a;
    int b;
};

struct LNode {
    LNode *next;
    LNode *prev;
    int value[2];
};

struct Traits {
    char c;
};

struct Vec {
    int *first;
    int *last;
    int *end;
};

struct Hash {
    Traits traits;
    LNode *head;
    unsigned int size;
    int fc;
    Vec vec;
    int f1c;
    int f20;
    int f24;
    float maxsize;
};

struct Obj {
    void **vtbl;
    char pad4[0x34 - 0x4];
    int f34;
    Derived *f38;
    int f3c;
    int f40;
    int f44;
    Ptr p48;
    Ptr p50;
    Ptr p58;
    char m60[0xc8 - 0x60];
    char mc8[0x140 - 0xc8];
    Hash hash;
    char m16c[0x1a0 - 0x16c];
    char cs[0x1c];
};

extern "C" Obj *fn_8260C2F0(Obj *self, int a2, int a3, int a4, int a5, int a6, int a7, int a8, Derived *a9)
{
    fn_827D9980(self, a9 ? &a9->b : 0, a5, a6, 1);
    self->f38 = a9;
    self->f3c = a7;
    self->f34 = 0;
    self->vtbl = lbl_821CAAD0;
    self->f40 = a8;
    self->f44 = a4;
    self->p48.a = 0;
    self->p48.b = 0;
    fn_8256BE68(&self->p48, 0);
    self->p50.a = 0;
    self->p50.b = 0;
    fn_8256BE68(&self->p50, 0);
    self->p58.a = 0;
    self->p58.b = 0;
    fn_8256BE68(&self->p58, 0);
    fn_827DA0D0(self->m60, a3);
    fn_827DDEE8(self->mc8);
    {
        Traits t;
        Hash *h = &self->hash;
        self->hash.traits = t;
        h->size = 0;
        h->head = std::_Allocate(1, (LNode *)0);
        h->head->next = h->head;
        h->head->prev = h->head;
        float m = lbl_821CA45C[1];
        {
            Vec *v = &h->vec;
            v->first = 0;
            v->last = 0;
            v->end = 0;
        }
        h->maxsize = m;
        fn_82587028(h, 8);
    }
    fn_8260D2A8(self->m16c, a2);
    RtlInitializeCriticalSection(self->cs);
    return self;
}
