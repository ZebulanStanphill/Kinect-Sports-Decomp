typedef void (*Cb_82B9DFF8)(void *ctx, const char *fmt, int a, int b, void *d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82AB6EC0(void *obj, int idx);
extern float fn_82B6E130(void *obj, int idx);
extern void fn_82B9A4B0(double v, void *buf);
extern int lbl_8316E480[];
extern float lbl_820DA2D0; /* 5.5413556f = ln(255) */

#define FILE_82B9DFF8 "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp"

/* CompileGetFogScale */
int fn_82B9DFF8(void *pAS_Object, int n, float *out, Cb_82B9DFF8 cb, void *ctx)
{
    char buf[32];

    if (pAS_Object == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object", FILE_82B9DFF8, 0xed8);
    }
    if (fn_82AB6EC0(pAS_Object, 0xa5) == 3) {
        float start = fn_82B6E130(pAS_Object, 0xa6);
        float range = fn_82B6E130(pAS_Object, 0xa7) - start;
        if (range == 0.0f) {
            *(unsigned int *)out = 0x7f7fffff; /* FLT_MAX, stored as its bit pattern */
        } else {
            *out = 1.0f / range;
        }
    } else {
        *out = 1.0f / (lbl_820DA2D0 / fn_82B6E130(pAS_Object, 0xa8));
    }
    if (fn_82AB6EC0(pAS_Object, 0xaa) != 1) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)",
            "(\"CompileGetFogScale -- why are we calculating a scale for Z-fog?\", (AS_GetStateI(pAS_Object, AS_TABLE_FOG_INDEX) == AS_TABLE_FOG_INDEX__W) )",
            FILE_82B9DFF8, 0xef3);
    }
    if (cb != 0 && ctx != 0) {
        fn_82B9A4B0(*out, buf);
        cb(ctx, "%s (%d) : %s\n", lbl_8316E480[27], 0x1b, buf);
    }
    return 1;
}
