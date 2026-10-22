extern unsigned char fn_828647E0(int);
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822402F8();
extern int fn_82292780();
extern int fn_82536D88();
extern int fn_828648B8();
extern int fn_828648F0();

int fn_8286E8B0(int param_1, int param_2, int param_3)
{
    int pos;
    char dot[16];
    char s[32];
    char t[32];
    char u[40];

    if (fn_828647E0(param_3) != 0) {
        fn_828648B8(u, param_3);
        fn_8223B688(s, u);
        fn_82230300(u, 1, 0);
        dot[0] = 0x2e;
        pos = fn_82536D88(s, dot, -1, 1);
        if (pos != -1) {
            fn_82230300(t, 0, 0);
            fn_82230218(t, s, 0, pos);
            fn_822402F8(s, t);
            fn_82230300(t, 1, 0);
        }
        fn_828648F0(param_1, s);
        fn_82230300(s, 1, 0);
    } else {
        fn_82292780(param_1, param_3);
    }
    return param_1;
}
