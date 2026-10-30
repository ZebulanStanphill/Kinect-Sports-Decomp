#include "havok/hkBase.h"

extern "C" void fn_82598DF0(void *);
extern "C" void fn_82CE97B8(void *);
extern "C" void fn_82CFBAD0(void *);

struct Elem_82CE95A8 { int a; int b; int c; };

struct Obj_82CE95A8 {
    char pad0[0x1c];
    void *p1c;
    char pad20[0x3c];
    char sub5c[0x18];
    char flag74;
    char pad75[3];
    void *items[4];
    int count88;
    char pad8c[0xfc];
    hkArray<Elem_82CE95A8> arr;
};

extern "C" void fn_82CE95A8(Obj_82CE95A8 *self)
{
    void *p = self->p1c;
    if (p != 0) {
        fn_82CE97B8(p);
        hkMemoryRouter::getInstance().heap().blockFree(p, 0x160);
    }
    if (self->flag74 != 0) {
        for (int i = 0; i < self->count88; i++) {
            void *e = self->items[i];
            if (e != 0) {
                fn_82CFBAD0(e);
                hkMemoryRouter::getInstance().heap().blockFree(e, 4);
            }
        }
    }
    self->arr.~hkArray<Elem_82CE95A8>();
    fn_82598DF0(self->sub5c);
}
