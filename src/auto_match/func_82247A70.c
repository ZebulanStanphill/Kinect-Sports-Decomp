extern int fn_8223B610(void *a, void *b, int c, int d, int e);
extern int fn_8223C610(void *a, int b, int c, int d);
extern int fn_82A1BC10(int h, void *a, int *b, void *c, int d);
extern int fn_82A1BC70(int h);
extern int fn_82A1BCC0(int a, int b, int c, int *d);

void fn_82247A70(int param_1, void *param_2, void *param_3)
{
    int n;
    int h;
    int len;
    unsigned char buf[1008];

    n = fn_8223C610(param_2, 0x20, 0, 0);
    if (n != 0) {
        fn_8223B610(param_2, buf, n, 0, 0);
        h = 0;
        if (fn_82A1BCC0(0, 0, 0, &h) >= 0) {
            len = 1000;
            fn_82A1BC10(h, param_3, &len, buf, n);
            fn_82A1BC70(h);
        }
    }
}
