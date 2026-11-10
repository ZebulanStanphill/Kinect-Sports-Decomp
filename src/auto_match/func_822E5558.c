typedef struct Inner_822E5558 {
    char pad0[0x204];
    int f204;
} Inner_822E5558;

typedef struct Obj_822E5558 {
    char pad0[0x24];
    void *f24;
    char pad28[0x78 - 0x28];
    void *f78;
    char pad7c[0x168 - 0x7c];
    void *f168;
    int f16c;
    char pad170[0x1bc - 0x170];
    Inner_822E5558 *f1bc;
    char pad1c0[4];
    int f1c4;
    int f1c8;
} Obj_822E5558;

extern void fn_822B7290(Obj_822E5558 *p);
extern void *fn_822CBBB0(void *mem, int *a, int *b, int c, char *name);
extern void fn_82358FD8(Inner_822E5558 *o, char *buf, int size, const char *name);
extern int fn_824CCD80(void *t);
extern void *fn_8265C9E0(unsigned int size);
extern unsigned char fn_8288B760(void *p);

static __forceinline int isEnabled_822E5558(Obj_822E5558 *p)
{
    if (p->f168 != 0)
        return fn_8288B760(p->f168);
    return p->f16c;
}

void fn_822E5558(Obj_822E5558 *p)
{
    char buf[64];
    void *t;
    void *mem;
    int r;
    int *a;
    int *b;

    if (p->f78 == 0) {
        fn_82358FD8(p->f1bc, buf, 0x20, "overheadicon_server");
        t = p->f24;
        if (t != 0 && isEnabled_822E5558(p) != 0)
            r = fn_824CCD80(t);
        else
            r = 1;
        a = (r == 1) ? &p->f1c4 : &p->f1c8;
        b = (r == 0) ? &p->f1c4 : &p->f1c8;
        t = p->f24;
        mem = fn_8265C9E0(0x70);
        p->f78 = mem ? fn_822CBBB0(mem, b, a, t != 0 ? 2 : 0, buf) : 0;
    }
    fn_822B7290(p);
}

