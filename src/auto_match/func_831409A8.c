typedef struct S {
    void *vtbl;
    int x4;
    void *p8;
    void *pc;
} S;
extern void fn_8289DF30(void *p);
extern void fn_828E3760(void *p);
extern char lbl_82024338[];
extern char lbl_8217C318[];
extern S lbl_83213ED4;

void fn_831409A8(void)
{
    lbl_83213ED4.vtbl = lbl_82024338;
    fn_828E3760(lbl_83213ED4.p8);
    if (lbl_83213ED4.pc != 0) {
        fn_8289DF30(lbl_83213ED4.pc);
    }
    lbl_83213ED4.vtbl = lbl_8217C318;
}
