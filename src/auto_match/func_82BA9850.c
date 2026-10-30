typedef struct {
    unsigned int pad : 22;
    unsigned int partial : 1;
    unsigned int pad2 : 9;
} Flags_82BA9850;
extern int fn_82AB15D0();
extern int fn_82BD09F0();

int fn_82BA9850(char *p, int param_2)
{
    Flags_82BA9850 *fl = (Flags_82BA9850 *)(p + 0xe4);
    if ((unsigned char)fl->partial == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "HasPartialWriteInput()", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\asm\\asm.cpp", 0x3b1);
    }
    return param_2 == fn_82BD09F0(*(int *)(*(int *)(p + 0x3b8) + 0xab0), *(int *)((*(int *)(p + 0x14) + 0x3a) * 4 + (int)p));
}
