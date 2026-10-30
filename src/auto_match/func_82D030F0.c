extern unsigned int fn_82D02C78(void *);

typedef struct Heap_82D030F0 {
    char pad0[8];
    unsigned int f8;
    char pad1[4];
    char *top;
    unsigned int topsize;
    char pad18[0xbc - 0x18];
    unsigned int fbc;
    unsigned int fc0;
} Heap_82D030F0;

unsigned int fn_82D030F0(Heap_82D030F0 *h, unsigned int nb)
{
    unsigned int mem;
    char *p;
    unsigned int rsize;
    if (h->f8 == 0 || (mem = fn_82D02C78(h), mem == 0)) {
        if (nb + 0x100 < h->topsize) {
            rsize = h->topsize - nb;
            p = h->top;
            h->topsize = rsize;
            h->top = p + nb;
            h->fbc = h->fbc + nb;
            h->fc0 = h->fc0 + nb - 0x10;
            mem = (unsigned int)(p + 0x10);
            *(unsigned int *)(p + nb + 4) = rsize | 1;
            *(unsigned int *)(p + nb) = nb;
            *(unsigned int *)(p + 4) = nb | 3;
        } else {
            mem = 0;
        }
    }
    return mem;
}
