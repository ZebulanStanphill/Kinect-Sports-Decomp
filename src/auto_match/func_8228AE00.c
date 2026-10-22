extern void fn_82278950(int a);
extern void fn_82289670(char *p, int a);
extern void fn_8229E090(int a, int b, int c);

void fn_8228AE00(int mode, char *p)
{
    char *q;
    int v;

    if (mode == 2) {
        *(int *)(p + 0x11f8) = 0;
        return;
    }
    if (mode == 0) {
        fn_82289670(p, 1);
        *(int *)(p + 0x6e8) = 4;
        q = *(char **)(p + 0x634);
        *(int *)(q + 0xb4) = 0;
        fn_82278950(*(int *)(q + 0xb0));
        *(int *)(p + 0x604) = (*(int *)(p + 0x600) == 5) ? 7 : 3;
    } else {
        *(int *)(p + 0x604) = 3;
    }
    fn_8229E090(*(int *)(p + 0x11f8), 0, 1);
    *(int *)(p + 0x11f8) = 0;
}
