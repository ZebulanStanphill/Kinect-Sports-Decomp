typedef unsigned char u8;
extern void fn_82267AC0(int a);
extern void fn_82280558(u8 *a, int b);

void fn_82487DF8(u8 *param_1, int param_2)
{
    u8 *p;
    u8 *q;

    p = *(u8 **)(param_1 + 0x458);
    if (p != 0) {
        q = *(u8 **)(p + 0x60c);
        if (q != 0) {
            fn_82267AC0(*(int *)(q + 0x5c0));
        }
        q = *(u8 **)(p + 0x610);
        if (q != 0) {
            fn_82267AC0(*(int *)(q + 0x5c0));
        }
        q = *(u8 **)(p + 0x614);
        if (q != 0) {
            fn_82267AC0(*(int *)(q + 0x5c0));
        }
        q = *(u8 **)(p + 0x618);
        if (q != 0) {
            fn_82267AC0(*(int *)(q + 0x2cc));
        }
        q = *(u8 **)(p + 0x67c);
        if (q != 0) {
            fn_82267AC0(*(int *)(q + 0x80));
        }
    }
    if (*(u8 **)(param_1 + 0x45c) != 0) {
        fn_82280558(*(u8 **)(param_1 + 0x45c), param_2);
    }
}
