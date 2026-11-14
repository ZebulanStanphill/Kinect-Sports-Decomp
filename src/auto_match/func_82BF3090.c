extern int fn_82BE6720(int, int, int);
extern int fn_82BE67E0(int, __int64, int);
extern int fn_82BE6C60(int, int, int, int);
extern __int64 lbl_8322B1C8;
extern __int64 lbl_8322B1D0;

int fn_82BF3090(int param_1)
{
    if (fn_82BE67E0(param_1, lbl_8322B1C8, 1) == 0 ||
        fn_82BE6720(param_1, 0x2b, 1) == 0 ||
        fn_82BE67E0(param_1, lbl_8322B1D0, 1) == 0 ||
        fn_82BE6720(param_1, 0x2a, 1) == 0) {
        return 0;
    }
    return fn_82BE6C60(param_1, 0xd6, 1, 1);
}
