extern void fn_828106A0(void *p);

typedef struct {
    char pad[0x30];
    int off30;
} Elem;

typedef struct {
    int a0;
    Elem *elems4;
    unsigned short count8;
    unsigned short xa;
    int offc;
    int x10;
} Src;

typedef struct {
    int a0;
    void *p4;
    unsigned short x8;
    int vc[3];
    float f18;
    int v1c[3];
    int x28;
} Dst;

void fn_82862388(Src *src, unsigned char flag, char *base)
{
    Dst *d;
    Elem *e;
    int i;

    d = (Dst *)(base + src->offc);
    d->a0 = src->a0;
    if (flag) {
        d->p4 = (char *)d + 0x2c;
    }
    d->x8 = src->xa;
    fn_828106A0(d->vc);
    d->f18 = 0.0f;
    fn_828106A0(d->v1c);
    d->x28 = src->x10;
    for (i = 0; i < src->count8; i++) {
        e = &src->elems4[i];
        base[e->off30] = 0;
    }
}
