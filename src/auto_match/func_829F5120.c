extern void fn_829F5370(void *p);
extern void fn_829F7FA8(void *p);
extern void fn_829F92C0(void *p);
extern void *lbl_83218C38;

void fn_829F5120(void)
{
    void *p;
    if (lbl_83218C38 != 0) {
        fn_829F7FA8(lbl_83218C38);
        p = lbl_83218C38;
        if (lbl_83218C38 != 0) {
            fn_829F92C0(p);
            fn_829F5370(p);
        }
        lbl_83218C38 = 0;
    }
}
