extern char lbl_82196F10[];
extern int fn_82AB15D0(int level, const char *fmt, ...);

int fn_82BA8F38(int value, int kind)
{
    switch (kind) {
    case 0:
        return value;
    case 4:
        return 0;
    case 5:
        return 1;
    case 6:
        return 2;
    case 7:
        return 3;
    case 1:
        return 7;
    case 2:
        return 4;
    case 3:
        return 5;
    default:
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\asm\\asm.cpp", 0xb4e);
        return 0;
    }
}
