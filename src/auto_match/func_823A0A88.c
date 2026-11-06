typedef struct Src_823A0A88 {
    char pad[0x100];
    int *tab;
} Src_823A0A88;
typedef struct Obj_823A0A88 {
    char pad[0x2c4];
    unsigned mode;
} Obj_823A0A88;

static __forceinline int off_823A0A88(unsigned mode)
{
    int r = 0;
    switch (mode) {
    case 0: r = 0; break;
    case 1: r = 0x66; break;
    case 2: r = 0x22; break;
    case 3: r = 0x44; break;
    }
    return r;
}

void fn_823A0A88(Obj_823A0A88 *p, Src_823A0A88 *src, int i, int j)
{
    unsigned start;
    unsigned k;
    unsigned end;
    int n;
    int *blk;

    n = 0;
    start = off_823A0A88(p->mode) + 0x24c;
    end = off_823A0A88(p->mode) + 0x26d;
    for (k = start; k <= end; k++) {
        ((int *)p)[(i * 2 + j) * 0x2c + n + 1] = src->tab[k];
        n++;
    }
    blk = (int *)((char *)p + (i * 2 + j) * 0xb0);
    blk[0x24] = src->tab[0x243];
    blk[0x25] = src->tab[0x244];
    blk[0x26] = src->tab[0x245];
    blk[0x27] = src->tab[0x246];
    blk[0x28] = src->tab[0x247];
    blk[0x29] = src->tab[0x248];
    blk[0x2a] = src->tab[0x249];
    blk[0x2b] = src->tab[0x24a];
    blk[0x2c] = src->tab[0x24b];
}
