extern char lbl_82196F10[];
extern int fn_82AB15D0(int level, const char *fmt, ...);

int fn_82BC6BE8(unsigned int kind)
{
    switch (kind) {
    case 0:
        return 5;
    case 1:
        return 6;
    case 2:
        return 0x15;
    case 3:
        return 0x16;
    case 4:
        return 0x17;
    case 5:
        return 0x13;
    default:
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IL2IRTable.hpp", 0x152e);
        return 0;
    }
}
