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
extern S lbl_83213F10;

void fn_83140FE0(void)
{
    lbl_83213F10.vtbl = lbl_82024338;
    fn_828E3760(lbl_83213F10.p8);
    if (lbl_83213F10.pc != 0) {
        fn_8289DF30(lbl_83213F10.pc);
    }
    lbl_83213F10.vtbl = lbl_8217C318;
}
