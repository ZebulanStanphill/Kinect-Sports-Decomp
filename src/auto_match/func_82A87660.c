typedef struct Stream Stream;
typedef struct StreamVtbl {
    void *f0;
    unsigned char (*IsOpen)(Stream *);
    void *f8;
    void *fc;
    unsigned char (*Read)(Stream *, void *buf, unsigned int size, unsigned int *read);
} StreamVtbl;
struct Stream {
    StreamVtbl *vt;
};
typedef struct BitReader {
    unsigned char *data;
    unsigned int size;
    unsigned int pos;
} BitReader;
typedef struct Pair {
    unsigned int x;
    unsigned int y;
} Pair;
typedef struct Out {
    unsigned int a;
    Pair p;
} Out;

extern void fn_82A86FF8(BitReader *r, void *buf, unsigned int size);
extern void fn_82A8C620(BitReader *r, unsigned int pos, unsigned int bits, unsigned int *out);

unsigned char fn_82A87660(void *self, Stream *s, Out *out)
{
    unsigned int read;
    BitReader r;
    unsigned char buf[12];
    Pair *p;

    if (!s->vt->IsOpen(s) || !s->vt->Read(s, buf, 0xc, &read)) {
        return 0;
    }
    fn_82A86FF8(&r, buf, 0xc);
    fn_82A8C620(&r, 0, 0x20, &out->a);
    p = &out->p;
    fn_82A8C620(&r, 0x20, 0x20, &p->y);
    fn_82A8C620(&r, 0x40, 0x20, &p->x);
    return 1;
}
