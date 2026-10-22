extern void *fn_8265C9E0(int size);
extern void fn_824B4310(void *p, int a);
extern int lbl_821C03F0;

typedef struct Obj {
    void *vtbl;
    int pad[0x11];
    int f48;
    int f4c;
    int f50;
    int f54;
} Obj;

Obj *fn_824B56F8(int a)
{
    Obj *p = (Obj *)fn_8265C9E0(0x58);
    if (p != 0) {
        fn_824B4310(p, a);
        p->f48 = 0;
        p->vtbl = &lbl_821C03F0;
        p->f4c = 0;
        p->f50 = 0;
        p->f54 = 0;
        return p;
    }
    return 0;
}
