extern void fn_82517DC8(void *p, int a);
extern void *fn_8265C9E0(int size);
extern char lbl_82197648[];
extern char lbl_82197688[];

typedef struct Obj {
    void *vtbl;
    char pad4[0x30];
    char *f34;
    char pad38[0x30];
    void *vtbl2;
    char pad6c[0x14];
    int f80;
    int pad84;
    __int64 f88;
    int f90;
    unsigned char f94;
    unsigned char f95;
    unsigned char f96;
    unsigned char f97;
    unsigned char f98;
} Obj;

Obj *fn_822386F8(int a)
{
    Obj *p;

    p = (Obj *)fn_8265C9E0(0xa0);
    if (p != 0) {
        fn_82517DC8(p, a);
        p->f80 = 0;
        p->f88 = 0;
        p->f90 = 0;
        p->f95 = 0;
        p->f96 = 0;
        p->f97 = 0;
        p->f98 = 0;
        p->vtbl = lbl_82197648;
        p->vtbl2 = lbl_82197688;
        p->f94 = 1;
        *(Obj **)(p->f34 + 0x148) = p;
        return p;
    }
    return 0;
}
