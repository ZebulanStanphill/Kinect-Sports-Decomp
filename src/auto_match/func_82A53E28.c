typedef struct Entry {
    int f0;
    int f4;
    int f8;
    int fc;
    char pad10[0x88 - 0x10];
    int f88;
    int f8c;
    int f90;
    int f94;
} Entry;

typedef struct Ctx {
    char pad0[0x22];
    unsigned short f22;
    char pad24[0x3c - 0x24];
    int f3c;
    char pad40[0x230 - 0x40];
    int f230;
    int f234;
    char pad238[0x23c - 0x238];
    int count;
    Entry *entries;
} Ctx;

extern int fn_82A6C5D8(int, int, int, unsigned short, int, int, int);

int fn_82A53E28(Ctx **param_1)
{
    Ctx *c = *param_1;
    int r = 0;
    int i;

    if (c->f3c <= 2)
        return 0;
    for (i = 0; i < c->count; i++) {
        Entry *e = &c->entries[i];
        if (e->fc == 0) {
            r = fn_82A6C5D8(e->f88, e->f8c, e->f0, c->f22, e->f94, c->f230, c->f234);
            if (r < 0)
                return r;
        }
    }
    return r;
}
