struct Desc {
    int f0;
    int stride;
    int def;
};

struct Pool {
    unsigned int count;
    unsigned int cap;
    int base;
    Desc *desc;
};

struct Ref {
    int ptr;
    void *owner;
    Ref(int p, void *o) : ptr(p), owner(o) {}
};

extern "C" {
void fn_8277B540(Pool *p, unsigned int n, int c);
int atexit(void (*f)(void));
void fn_8313FF80(void);
extern char lbl_82015470;
extern void *lbl_831F1378;
extern unsigned int lbl_831F137C;
}

extern "C" Ref fn_8277B730(Pool *p)
{
    unsigned int i;

    if (p->cap <= p->count) {
        fn_8277B540(p, p->count + 0x10, 0);
    }
    i = p->count;
    if (p->cap > i) {
        p->count = ++i;
        return Ref(p->desc->stride * (i - 1) + p->base, (void *)p->desc->def);
    }
    if ((lbl_831F137C & 1) == 0) {
        lbl_831F137C |= 1;
        lbl_831F1378 = &lbl_82015470;
        atexit(fn_8313FF80);
    }
    return Ref(0, &lbl_831F1378);
}
