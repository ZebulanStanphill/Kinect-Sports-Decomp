typedef void (*Cb_82B9DE40)(void *ctx, const char *fmt, int a, int b, int c, void *d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern float fn_82B6F100(void *obj, int idx, int n);
extern void fn_82B9A4B0(double v, void *buf);
extern int lbl_8316E480[];

int fn_82B9DE40(void *obj, int n, float *out, Cb_82B9DE40 cb, void *ctx)
{
    char buf[32];
    float v;
    if (obj == 0) {
        fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0xe89);
    }
    v = fn_82B6F100(obj, 0x13, n);
    *out = v;
    if (cb != 0 && ctx != 0) {
        fn_82B9A4B0(v, buf);
        cb(ctx, "%s (%d) %d : %s\n", lbl_8316E480[74], 0x4a, n, buf);
    }
    return 1;
}
