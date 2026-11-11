typedef unsigned int uint;
extern int fn_82AB15D0();

int fn_82B6C280(int param_1, int param_2, uint param_3, uint *param_4, uint *param_5)
{
    uint i;
    uint start;
    uint n;
    uint *p;

    if (*(int *)(param_1 + 0x10) == 0) {
        n = *(uint *)(param_1 + 0x4a4);
        start = 0;
    }
    else {
        if (*(int *)(param_1 + 0x10) != 1) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pFCA->eMode == E_FA_DECREMENTAL",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp", 0x2e4);
        }
        n = 0x20;
        start = 0x20 - *(int *)(param_1 + 0x4a4);
    }
    i = start;
    if (start < n) {
        p = (uint *)(start * 0x24 + param_1 + 0x1c);
        do {
            if (p[-1] != 1) {
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pFetchBlock->bIsUsed == SSM_TRUE",
                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp", 0x2ec);
            }
            if ((int)p[0] != 1 && (int)p[0] == param_2 && p[1] == param_3) {
                *param_4 = i;
                *param_5 = 0xffffffff;
                return 1;
            }
            i = i + 1;
            p = p + 9;
        } while (i < n);
    }
    return 0;
}
