#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<8>;

struct Src;
struct SrcVtbl {
    void *f0;
    unsigned char (*isOpen)(Src *self);
    void *f8;
    void *fC;
    unsigned char (*read)(Src *self, void *buf, int size, void *out);
};
struct Src {
    SrcVtbl *vtbl;
};

extern "C" {
void fn_82A87148(void *a, int off, int n, void *out);
void fn_82A8C620(void *a, int off, int n, void *out);

unsigned char fn_82A87790(void *self, Src *src, char *out)
{
    char *q;
    SwappedBlock_82A86CB0<8> a;
    unsigned char b[8];

    if (!src->vtbl->isOpen(src) || !src->vtbl->read(src, b, 8, a.data))
        return 0;
    a.Set(b, 8);
    fn_82A8C620(&a, 0, 0x20, out);
    q = out + 4;
    fn_82A87148(&a, 0x20, 0x10, q + 2);
    fn_82A87148(&a, 0x30, 0x10, q);
    return 1;
}
}
