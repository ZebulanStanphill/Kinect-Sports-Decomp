extern unsigned int fn_82B694C8(int p, unsigned int c);
extern int fn_82B69548(int p, unsigned int i);
extern int fn_82B695B8(int p, unsigned int i);
extern int fn_82B69658(int p, unsigned int i);

int fn_82B697C0(int param_1, int param_2)
{
    unsigned int i;

    for (i = 0; i + 0x60 <= 0x74; i++) {
        if (fn_82B694C8(param_2, i + 0x60) != 0) {
            fn_82B69548(param_2, i);
            fn_82B695B8(param_2, i);
            fn_82B69658(param_2, i);
        }
    }
    return 0;
}
