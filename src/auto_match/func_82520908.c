extern void fn_8223B610(int a, int b, int c, int d, int e);
extern int fn_8223C610(int a, unsigned int b, int c, int d);
extern int fn_82A1BC10(unsigned int h, int a, unsigned int *b, int c, int d);
extern int fn_82A1BC70(unsigned int h);
extern int fn_82A1BCC0(int a, int b, int c, unsigned int *out);
extern unsigned int lbl_832961DC;

void fn_82520908(int param_1, int param_2, int param_3)
{
    int v;
    unsigned int h;
    unsigned int t;

    v = fn_8223C610(param_3, lbl_832961DC, 0, 0);
    *(int *)(param_1 + 0x7d8) = v;
    if (v != 0) {
        fn_8223B610(param_3, param_1 + 0x3f0, v, 0, 0);
        h = 0;
        if (fn_82A1BCC0(0, 0, 0, &h) >= 0) {
            t = 1000;
            fn_82A1BC10(h, param_1 + 8, &t, param_1 + 0x3f0, *(int *)(param_1 + 0x7d8));
            fn_82A1BC70(h);
        }
    }
}
