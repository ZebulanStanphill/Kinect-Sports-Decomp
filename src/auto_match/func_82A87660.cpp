#include "game/SwappedBlock_82A86CB0.h"

extern template struct SwappedBlock_82A86CB0<0xc>;

struct Stream;
struct StreamVtbl {
    void *f0;
    unsigned char (*IsOpen)(Stream *);
    void *f8;
    void *fc;
    unsigned char (*Read)(Stream *, void *buf, unsigned int size, unsigned int *read);
};
struct Stream {
    StreamVtbl *vt;
};
struct Pair {
    unsigned int x;
    unsigned int y;
};
struct Out {
    unsigned int a;
    Pair p;
};

extern "C" {
void fn_82A8C620(void *r, unsigned int pos, unsigned int bits, unsigned int *out);

unsigned char fn_82A87660(void *self, Stream *s, Out *out)
{
    unsigned int read;
    SwappedBlock_82A86CB0<0xc> r;
    unsigned char buf[12];
    Pair *p;

    if (!s->vt->IsOpen(s) || !s->vt->Read(s, buf, 0xc, &read)) {
        return 0;
    }
    r.Set(buf, 0xc);
    fn_82A8C620(&r, 0, 0x20, &out->a);
    p = &out->p;
    fn_82A8C620(&r, 0x20, 0x20, &p->y);
    fn_82A8C620(&r, 0x40, 0x20, &p->x);
    return 1;
}
}
