typedef void (*Cb_82B9E8C0)(void *ctx, const char *fmt, int a, int b, int c, void *d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned fn_82AB71F0(void *obj, int idx, int n);
extern void fn_82B9A4B0(double v, void *buf);
extern int lbl_8316E480[];

int fn_82B9E8C0(void *obj, int n, float *out, Cb_82B9E8C0 cb, void *ctx)
{
    char buf[32];

    if (obj == 0) {
        fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x110b);
    }
    *(unsigned *)out = (fn_82AB71F0(obj, 0x59, n) >> 2) | 0x40000000u;
    if (cb != 0 && ctx != 0) {
        fn_82B9A4B0(*out, buf);
        cb(ctx, "%s (%d) %d : %s\n", lbl_8316E480[0x3e], 0x3e, n, buf);
    }
    return 1;
}
