typedef struct Self_82230E20 {
    int a;
    int b;
    unsigned int state;
    char pad[0x58 - 0xc];
    void *blocker;
} Self_82230E20;

extern int (*lbl_83276774[])(void);
extern void fn_82230F00(Self_82230E20 *self, unsigned int state);

void fn_82230E20(Self_82230E20 *param_1, unsigned int param_2)
{
    int r;

    if (((unsigned char *)lbl_83276774)[-0x7d] != 0 && param_1->state == 0) {
        return;
    }
    if (param_1->blocker != 0) {
        param_1->state = 0;
        return;
    }
    r = lbl_83276774[8] ? lbl_83276774[8]() : 0;
    if (r != 0 && param_2 != 0x25) {
        param_1->state = param_2;
        return;
    }
    param_1->state = 0;
    if (param_2 != 0 && param_2 != 0x12 && param_2 != 0x19 && (param_2 <= 0x1d || param_2 > 0x1f)) {
        fn_82230F00(param_1, param_2);
    }
}
