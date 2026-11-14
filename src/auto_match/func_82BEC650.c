extern int fn_82BE6720(void *p, int c, int f);
extern int fn_82BE67E0(void *p, __int64 v, int f);
extern int fn_82BE6A00(void *p);
extern int fn_82BE6C60(void *p, int c, int a, int b);

extern __int64 lbl_8322B1C8;
extern __int64 lbl_8322B1D0;
int fn_82BEC650(void *p)
{
    if (fn_82BE67E0(p, lbl_8322B1C8, 1) == 0 ||
        fn_82BE6720(p, 0x2b, 1) == 0 ||
        fn_82BE67E0(p, lbl_8322B1D0, 1) == 0 ||
        fn_82BE6720(p, 0x2a, 1) == 0 ||
        fn_82BE6A00(p) == 0) {
        return 0;
    }
    return fn_82BE6C60(p, 0xd8, 1, 1);
}
