extern int fn_82AB15D0(int level, const char *fmt, ...);

int fn_82B7F508(char mask)
{
    switch (mask) {
    case '0':
        return 4;
    case '1':
        return 5;
    case '_':
        return 7;
    case 'w':
        return 3;
    case 'x':
        return 0;
    case 'y':
        return 1;
    case 'z':
        return 2;
    default:
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "!\"Invalid Vertex Fetch Instruction Mask\"", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", 0x2bf);
        return 0;
    }
}
