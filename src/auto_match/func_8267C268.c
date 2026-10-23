extern void fn_8267B698(void *p, int x);
extern void fn_8267C020(void *p);
extern void *lbl_831E7E60;
extern void *lbl_831F129C;

void fn_8267C268(void)
{
    if (lbl_831F129C != 0 && lbl_831E7E60 != 0) {
        fn_8267C020(lbl_831E7E60);
        lbl_831F129C = 0;
        fn_8267B698(lbl_831E7E60, 0);
        lbl_831E7E60 = 0;
    }
}
