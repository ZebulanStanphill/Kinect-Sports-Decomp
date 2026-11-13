typedef void (*Cb_82B9CC78)(void *ctx, const char *fmt, int a, int b, int c, int d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern int fn_82AB7550(void *p, int op, int a, int b);
extern int lbl_8316E480[];

int fn_82B9CC78(void *obj, int n, void *p, Cb_82B9CC78 cb, void *ctx)
{
    if (obj == 0) {
        fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0xab8);
    }
    if (p != 0) {
        fn_82AB7550(p, 0x29, 0, 0);
    }
    if (cb != 0 && ctx != 0) {
        cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[101], 0x65, n, 0);
    }
    return 0;
}
