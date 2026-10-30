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
extern S lbl_8321442C;

void fn_83141570(void)
{
    lbl_8321442C.vtbl = lbl_82024338;
    fn_828E3760(lbl_8321442C.p8);
    if (lbl_8321442C.pc != 0) {
        fn_8289DF30(lbl_8321442C.pc);
    }
    lbl_8321442C.vtbl = lbl_8217C318;
}
