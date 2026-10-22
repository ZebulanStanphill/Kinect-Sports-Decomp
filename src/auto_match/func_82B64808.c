extern void *fn_8265C9E0(unsigned int size);
extern void fn_8265CA20(void *p);

typedef struct Img Img;
typedef struct ImgVtbl {
    void *f0;
    void (*read)(Img *self, unsigned int x, unsigned int y, void *buf);
    void (*write)(Img *self, unsigned int x, unsigned int y, void *buf);
} ImgVtbl;

struct Img {
    ImgVtbl *vt;
    char pad[0xc];
    int x10;
    char pad2[0x68 - 0x14];
    unsigned int w;
    unsigned int h;
    unsigned int d;
};

typedef struct Pair {
    Img *src;
    Img *dst;
} Pair;

int fn_82B64808(Pair *p)
{
    Img *a = p->src;
    Img *b = p->dst;
    unsigned int n = b->w;
    void *buf, *mem;
    unsigned int x, y;

    if (n == a->w && b->h == a->h && b->d == a->d) {
        mem = fn_8265C9E0(n <= 0xfffffff ? n * 16 : 0xffffffff);
        buf = mem ? mem : 0;
        if (buf != 0) {
            if (p->dst->x10 != 0 && p->src->x10 != 0) {
                p->dst->x10 = 0;
                p->src->x10 = 0;
            }
            for (y = 0; y < p->dst->d; y++) {
                for (x = 0; x < p->dst->h; x++) {
                    p->src->vt->read(p->src, x, y, buf);
                    p->dst->vt->write(p->dst, x, y, buf);
                }
            }
            fn_8265CA20(buf);
            return 0;
        }
    }
    return 0x80004005;
}
