extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern const char lbl_82196F10[];

int fn_82BBC0A8(char *self, int kind, unsigned int a, unsigned int b)
{
    int index;
    unsigned int *slot;
    if (*(unsigned char *)(self + 0x751) != 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "!in_realtime_mode",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\"
                    "compiler\\ir\\linkageinfo.cpp",
                    0x1e2);
    }
    for (index = 0, slot = (unsigned int *)(self + 0x390); index < 16; ++index, ++slot) {
        if (*slot == 0) {
            int lane;
            ((int *)self)[index + 0xf4] = kind;
            ((unsigned int *)self)[index + 0x104] = a;
            ((unsigned int *)self)[index + 0xe4] = b;
            if (kind != 0x21) {
                for (lane = 0; lane < 4; ++lane) {
                    ((int *)self)[(index + 0x45) * 4 + lane] = 5;
                }
            }
            return index;
        }
    }
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10,
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\"
                "compiler\\ir\\linkageinfo.cpp",
                0x1f3);
    return 0;
}
