extern void fn_8223C478(int a, int n, int c);
extern int fn_8223C610(int s, int n, int a, int b);
extern unsigned char fn_828E9DB8(int a, int data, int n);

void fn_823B4970(int param_1, int param_2, int param_3, int param_4)
{
    unsigned char ok;
    unsigned int count;
    int data;

    fn_8223C478(param_1, param_3, param_4);
    ok = 1;
    if (param_3 >= 0x20) {
        count = (unsigned int)param_3 >> 5;
        param_3 = param_3 - (param_3 & ~0x1f);
        do {
            data = fn_8223C610(param_2, 0x20, 0, 0);
            ok = fn_828E9DB8(param_1, data, 0x20);
            count--;
        } while (count != 0);
    }
    if (ok && param_3 != 0) {
        data = fn_8223C610(param_2, param_3, 0, 0);
        fn_828E9DB8(param_1, data, param_3);
    }
}
