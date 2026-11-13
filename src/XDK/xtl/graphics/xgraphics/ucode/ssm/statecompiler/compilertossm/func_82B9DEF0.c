typedef void (*Cb_82B9DEF0)(void *ctx, const char *fmt, int a, int b, void *d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82AB6EC0(void *obj, int idx);
extern float fn_82B6E130(void *obj, int idx);
extern void fn_82B9A4B0(double v, void *buf);
extern int lbl_8316E480[];

#define FILE_82B9DEF0 "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp"

int fn_82B9DEF0(void *pAS_Object, int n, float *out, Cb_82B9DEF0 cb, void *ctx)
{
    char buf[32];

    if (pAS_Object == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object", FILE_82B9DEF0, 0xeaa);
    }
    if (fn_82AB6EC0(pAS_Object, 0xa5) == 3) {
        *out = fn_82B6E130(pAS_Object, 0xa6);
    } else {
        *out = 0.0f;
    }
    if (fn_82AB6EC0(pAS_Object, 0xaa) != 1) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)",
            "(\"CompileGetFogBias -- why are we calculating a bias for Z-fog?\", (AS_GetStateI(pAS_Object, AS_TABLE_FOG_INDEX) == AS_TABLE_FOG_INDEX__W) )",
            FILE_82B9DEF0, 0xeb7);
    }
    if (cb != 0 && ctx != 0) {
        fn_82B9A4B0(*out, buf);
        cb(ctx, "%s (%d) : %s\n", lbl_8316E480[26], 0x1a, buf);
    }
    return 1;
}
