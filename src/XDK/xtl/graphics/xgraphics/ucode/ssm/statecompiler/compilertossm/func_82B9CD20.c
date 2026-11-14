extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int fn_82AB6EC0(void *, unsigned int);
extern int lbl_8316E480[];


unsigned int fn_82B9CD20(void *obj, unsigned int *out, void (*cb)(void *, const char *, int, int, int), void *user)
{
    unsigned int mode = fn_82AB6EC0(obj, 0x237);
    unsigned int kind = fn_82AB6EC0(obj, 0x3ce);
    if (mode == 2 && kind == 0) {
        *out = 2;
    } else if (mode == 2 && kind == 1) {
        *out = 5;
    } else if (mode == 2 && kind == 3) {
        *out = 8;
    } else if (mode == 2 && kind == 2) {
        *out = 11;
    } else {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "0",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0xb00);
    }
    if (cb != 0 && user != 0) {
        cb(user, "%s (%d) : %d\n", lbl_8316E480[0x3d], 0x3d, *out);
    }
    return 1;
}
