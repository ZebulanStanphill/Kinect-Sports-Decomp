typedef void (*Cb_82B9F1A8)(void *ctx, const char *fmt, int a, int b, int c, int d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned fn_82AB6EC0(void *obj, int k);
extern unsigned fn_82AB71F0(void *obj, int k, int stage);
extern void fn_82AB7550(void *p, int a, int stage, int v);
extern int lbl_8316E480[];

int fn_82B9F1A8(void *obj, int stage, void *p, Cb_82B9F1A8 cb, void *ctx)
{
    unsigned a;
    unsigned b;
    if (obj == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x2a5);
    }
    if (stage >= 16) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "stage < 16", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x2a6);
    }
    if (stage < 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "stage >= 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0x2a7);
    }
    a = fn_82AB6EC0(obj, 0x87);
    b = fn_82AB71F0(obj, 0xc, stage);
    if (b == 1 && a == 2) {
        if (p != 0)
            fn_82AB7550(p, 3, stage, 1);
        if (cb != 0 && ctx != 0)
            cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[3], 3, stage, 1);
        return 1;
    } else {
        if (p != 0)
            fn_82AB7550(p, 3, stage, 0);
        if (cb != 0 && ctx != 0)
            cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[3], 3, stage, 0);
        return 0;
    }
}
