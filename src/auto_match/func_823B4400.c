extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);
extern void fn_828BDE70(void *p);
extern char lbl_821B5AD0[];
extern char lbl_821B5B50[];

typedef struct Obj {
    void *vtbl;
    char pad4[0x4c];
    void *vtbl2;
    char pad54[0x30];
    void *p84;
} Obj;

Obj *fn_823B4400(Obj *p, unsigned int flags)
{
    if (p->p84 != 0) {
        fn_822315A0(p->p84);
    }
    p->vtbl = lbl_821B5AD0;
    p->vtbl2 = lbl_821B5B50;
    fn_828BDE70(p);
    if (flags & 1) {
        fn_8265CA20(p);
    }
    return p;
}
