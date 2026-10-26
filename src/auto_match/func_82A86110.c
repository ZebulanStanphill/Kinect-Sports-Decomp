extern void fn_82A85FD0(void *p);
extern void fn_8265C990(void *p, int flags);
extern void *lbl_832234E4;

int fn_82A86110(void)
{
    void *p;
    if (lbl_832234E4 == 0)
        return 0x80004005;
    p = lbl_832234E4;
    lbl_832234E4 = 0;
    if (p) {
        fn_82A85FD0(p);
        fn_8265C990(p, 0x20980000);
    }
    return 0;
}
