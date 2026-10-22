typedef struct Handler {
    void (**vtbl)(struct Handler *, int, unsigned int);
} Handler;

typedef struct Entry {
    int f0;
    int f4;
    void (*cb)(int, int, unsigned int);
    int fc;
    Handler *f10;
    int f14;
    char pad18[0x54];
    unsigned int f6c;
} Entry;

typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    Entry **entries;
    char pad10[0x1c];
    int cur;
} Mgr;

void fn_8227EB10(Mgr *m, unsigned int flag)
{
    Entry *e;
    Handler *h;

    if (m->cur != -1) {
        e = m->entries[m->cur];
        if (e->cb != 0) {
            e->cb(e->f14, e->fc, flag);
        }
        h = e->f10;
        if (h != 0) {
            h->vtbl[2](h, e->f14, flag);
        }
        if (flag != 0) {
            e->f6c |= 4;
        }
    }
}
