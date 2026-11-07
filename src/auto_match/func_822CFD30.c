typedef struct Inner_822CFD30 {
    char pad0[0x204];
    int f204;
} Inner_822CFD30;

typedef struct Obj_822CFD30 {
    char pad0[0x24];
    void *f24;
    char pad28[0x78 - 0x28];
    void *f78;
    char pad7c[0x168 - 0x7c];
    void *f168;
    int f16c;
    char pad170[0x1c0 - 0x170];
    Inner_822CFD30 *f1c0;
    char pad1c4[0x2f0 - 0x1c4];
    int f2f0;
    int f2f4;
} Obj_822CFD30;

extern void fn_822B7290(Obj_822CFD30 *p);
extern void *fn_822CBBB0(void *mem, int *a, int *b, int c, char *name);
extern void fn_82358FD8(Inner_822CFD30 *o, char *buf, int size, const char *name);
extern int fn_824CCD80(void *t);
extern void *fn_8265C9E0(unsigned int size);
extern unsigned char fn_8288B760(void *p);

static __forceinline int isEnabled_822CFD30(Obj_822CFD30 *p)
{
    if (p->f168 != 0)
        return fn_8288B760(p->f168);
    return p->f16c;
}

void fn_822CFD30(Obj_822CFD30 *p)
{
    char buf[64];
    void *t;
    void *mem;
    int r;
    int *a;
    int *b;

    if (p->f1c0->f204 != 0)
        return;
    if ((int)p->f24 == 0)
        return;
    if (p->f78 == 0) {
        fn_82358FD8(p->f1c0, buf, 0x20, "overheadicon_server");
        t = p->f24;
        if (t != 0 && isEnabled_822CFD30(p) != 0)
            r = fn_824CCD80(t);
        else
            r = 1;
        a = (r == 1) ? &p->f2f0 : &p->f2f4;
        b = (r == 0) ? &p->f2f0 : &p->f2f4;
        mem = fn_8265C9E0(0x70);
        p->f78 = mem ? fn_822CBBB0(mem, b, a, 0, buf) : 0;
    }
    fn_822B7290(p);
}
