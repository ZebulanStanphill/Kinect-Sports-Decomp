extern float lbl_821CC160;
extern float lbl_831D31E8[];
extern void *lbl_8327F844;

extern int fn_824CCD80(int a);
extern int fn_824CD030(int a);
extern void fn_82530158(void *obj, float a, float b, int c);
extern int fn_82359558(int a, int b);
extern void fn_822BE860(int a, int b);

void fn_82402CF8(int param_1, int param_2, int param_3)
{
    int v;
    int r;

    if (*(int *)(param_1 + 0x27c) == param_2) {
        return;
    }
    if ((*(int *)(param_1 + 0x27c) == 0) && (*(int *)(param_1 + 0x368) != 0)) {
        r = fn_824CCD80(*(int *)(param_1 + 0x10));
        if (lbl_8327F844 != 0) {
            fn_82530158(lbl_8327F844, lbl_821CC160, lbl_831D31E8[0x44], r);
        }
        *(int *)(param_1 + 0x368) = 0;
    }
    switch (param_2) {
    case 3:
        *(int *)(param_1 + 0x2a0) = 0;
        *(int *)(param_1 + 0x2a4) = 0;
        break;
    case 1:
        if (fn_824CD030(*(int *)(param_1 + 0x10)) != 0) {
            fn_822BE860(fn_82359558(*(int *)(param_1 + 0x240), *(int *)(param_1 + 0x10)), 0);
        }
        break;
    case 2:
        if (fn_824CD030(*(int *)(param_1 + 0x10)) != 0) {
            fn_822BE860(fn_82359558(*(int *)(param_1 + 0x240), *(int *)(param_1 + 0x10)), 0);
        }
        break;
    case 4:
        if (fn_824CD030(*(int *)(param_1 + 0x10)) != 0) {
            fn_822BE860(fn_82359558(*(int *)(param_1 + 0x240), *(int *)(param_1 + 0x10)), 0);
        }
        break;
    case 5:
        fn_822BE860(fn_82359558(*(int *)(param_1 + 0x240), *(int *)(param_1 + 0x10)), 0);
        break;
    case 6:
        fn_822BE860(fn_82359558(*(int *)(param_1 + 0x240), *(int *)(param_1 + 0x10)), 0);
        break;
    }
    *(int *)(param_1 + 0x27c) = param_2;
    v = *(int *)(param_1 + 0x284);
    if (v < param_3) {
        v = param_3;
    }
    *(int *)(param_1 + 0x284) = v;
}
