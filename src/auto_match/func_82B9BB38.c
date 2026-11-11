typedef void (*Cb_82B9BB38)(void *ctx, const char *fmt, int a, int b, int c, int d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern int fn_82AB7550(void *p, int op, int a, int b);
extern int lbl_8316E480[];

int fn_82B9BB38(void *obj, int n, void *p, Cb_82B9BB38 cb, void *ctx)
{
    if (obj == 0) {
        fn_82AB15D0(obj, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x755);
    }
    if (p != 0) {
        fn_82AB7550(p, 0x18, n, 0);
    }
    if (cb != 0 && ctx != 0) {
        cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[39], 0x27, n, 0);
    }
    return 0;
}
