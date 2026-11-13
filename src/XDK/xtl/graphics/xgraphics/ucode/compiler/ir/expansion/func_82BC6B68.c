extern char lbl_82196F10[];
extern int fn_82AB15D0(int level, const char *fmt, ...);

int fn_82BC6B68(unsigned int kind)
{
    switch (kind) {
    case 0:
        return 0;
    case 1:
        return 2;
    case 2:
        return 4;
    case 3:
        return 5;
    default:
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IL2IRTable.hpp", 0x1517);
        return 6;
    }
}
