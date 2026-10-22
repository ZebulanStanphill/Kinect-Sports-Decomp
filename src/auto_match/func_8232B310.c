typedef struct {
    unsigned int handle;
    int pad[5];
} Entry;

typedef struct {
    unsigned int count;
    int pad4[0x43];
    int f110;
    int pad114;
    int f118;
    int pad11c;
    void *f120;
    int pad124[3];
    char f130[0x10];
    char *f140;
} Obj;

extern unsigned int lbl_83296BC0[];
extern unsigned int lbl_83296BD0[];
extern void fn_8232ACF8(int a, unsigned int n);
extern void *fn_825354B8(unsigned int *h, void *b, int c, int d, void *e, void *f);
extern void fn_82536008(void *p);
extern void fn_82536288(void **pp);

void fn_8232B310(Obj *p, unsigned int idx)
{
    void **slot;
    Entry *e;
    int ok;
    unsigned int h;

    if (p->f110 != 0 && p->f118 != 0) {
        fn_8232ACF8(p->f110, p->count);
        fn_8232ACF8(p->f118, p->count);
    }
    if (p->count > idx && p->f140 != 0) {
        slot = &p->f120;
        if (p->f120 != 0) {
            fn_82536008(p->f120);
            fn_82536288(slot);
            *slot = 0;
        }
        e = (Entry *)p + p->count;
        ok = e != 0 ? e->handle != 0 : 0;
        if (ok) {
            h = e->handle;
            *slot = fn_825354B8(&h, p->f130, 0, *(int *)(p->f140 + 0x84c), lbl_83296BC0, lbl_83296BD0);
        }
    }
}
