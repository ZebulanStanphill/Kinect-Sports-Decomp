typedef struct S {
    char pad0[0x40];
    unsigned char b40;
    char pad41[0x1b];
    void *p5c;
    short s60;
} S;
extern void fn_82FA5190(int heap, void *p);
extern void fn_8304E1C0(S *p, int mode);
extern int lbl_831BC770;

void fn_83048940(S *p, int mode)
{
    if (p->p5c != 0 && (mode == 0 || (mode == 1 && p->b40 == 0))) {
        fn_82FA5190(lbl_831BC770, p->p5c);
        p->p5c = 0;
        p->s60 = 0;
    }
    fn_8304E1C0(p, mode);
}
