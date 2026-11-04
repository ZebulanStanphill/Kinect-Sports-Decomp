#include "game/Vec_82698FC8.h"

// The object func_826CC960 resets; only the offsets it touches are named.
struct Obj_826CC960 {
    char pad0[0x93];
    unsigned char b93;
    char pad94[0xa0 - 0x94];
    char *unkA0; // object whose field +0xb00 collects flags
    char padA4[0xa8 - 0xa4];
    Vec_82698FC8 vecA8;
    unsigned int unkB0;
    unsigned int unkB4;
    unsigned int unkB8;
    unsigned int unkBC;
    char padC0[0x1cc - 0xc0];
    unsigned char b1cc;
};

extern "C" {
void fn_8269A110(Vec_82698FC8 *vec);
void fn_826C90C8(Obj_826CC960 *self, int a);
}

extern "C" void fn_826CC960(Obj_826CC960 *self)
{
    self->vecA8.Method_82698FC8(0);
    self->unkBC = 0;
    self->b93 = 0;
    self->unkB8 = 0;
    self->b1cc = (self->b1cc & 0xfc) | 1;
    fn_826C90C8(self, 0);
    fn_8269A110(&self->vecA8);
    *(unsigned int *)(self->unkA0 + 0xb00) |= 0x400;
}
