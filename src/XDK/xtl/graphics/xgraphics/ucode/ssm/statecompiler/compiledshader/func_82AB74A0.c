extern int fn_82AB15D0(int level, const char *fmt, ...);

int fn_82AB74A0(int *desc)
{
    switch (*desc) {
    case 0:
        return 0x20;
    default:
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "!\"Unrecognized Patch Description\"", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\CompiledShader.h", 0x10c);
        return 0;
    }
}
