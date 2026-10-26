extern void fn_8265CA20(void *p);
extern void fn_82A1E658(void *p);
extern unsigned int lbl_8217D040;
typedef struct S { void *vt; int pad[0x28]; void *xa4; } S;

S *fn_82FEADF8(S *p, unsigned int flags)
{
    if (p->xa4 != 0) {
        fn_82A1E658(p->xa4);
    }
    p->vt = &lbl_8217D040;
    if (flags & 1) {
        fn_8265CA20(p);
    }
    return p;
}
