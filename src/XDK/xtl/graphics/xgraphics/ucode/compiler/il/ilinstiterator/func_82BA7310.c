extern char lbl_82196F10[];
extern __declspec(noreturn) void fn_82AB15D0(int, const char *, const char *, const char *, unsigned int);

void fn_82BA7310(int *values, int value)
{
    int index = 0;
    int *p = values;
    for (;;) {
        if (*p == value)
            return;
        if (*p == -1)
            break;
        ++index;
        ++p;
        if (index < 64)
            continue;
        fn_82AB15D0(
            0, "Assertion failed: %s (%s:%u)", lbl_82196F10,
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\il\\ilinstiterator.cpp",
            214);
        return;
    }
    values[index] = value;
}
