typedef struct {
    void *vt;
    char pad0[0x68 - 4];
    void *vt2;
    char pad1[0x80 - 0x6c];
    int f80;
    int pad2;
    int f88;
    int f8c;
    int f90;
} Obj_822388D0;
extern unsigned int lbl_821B3A90;
extern unsigned int lbl_821B3AE0;
extern void *fn_8265C9E0(unsigned int);
extern void fn_82517DC8(void *, void *);

Obj_822388D0 *fn_822388D0(void *a)
{
    Obj_822388D0 *p = fn_8265C9E0(0x98);
    if (p != 0) {
        fn_82517DC8(p, a);
        p->f80 = 0;
        p->vt = &lbl_821B3A90;
        p->vt2 = &lbl_821B3AE0;
        p->f88 = 0;
        p->f8c = 0;
        p->f90 = 0;
        return p;
    }
    return 0;
}
