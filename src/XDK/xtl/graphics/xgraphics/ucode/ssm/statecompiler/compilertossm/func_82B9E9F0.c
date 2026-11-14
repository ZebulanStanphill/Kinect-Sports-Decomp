typedef void (*Cb_82B9E9F0)(void *ctx, const char *fmt, int a, int b, int c, void *d);
extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82AB71F0(void *obj, int idx, int n);
extern void fn_82B9A4B0(double v, void *buf);
extern int lbl_8316E480[];
extern unsigned int lbl_8316E640[];

#define FILE_82B9E9F0 "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp"

int fn_82B9E9F0(void *pAS_Object, int n, float *out, Cb_82B9E9F0 cb, void *ctx)
{
    char buf[32];
    unsigned int format;
    unsigned int count;
    unsigned int swizzle;
    unsigned int type;

    if (pAS_Object == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pAS_Object", FILE_82B9E9F0, 0x1155);
    }
    format = fn_82AB71F0(pAS_Object, 0x5b, n);
    count = fn_82AB71F0(pAS_Object, 0x5c, n);
    swizzle = lbl_8316E640[format * 4 + count - 1];
    if (format == 2 || format == 3) {
        type = 2;
    } else {
        if (!(format == 1 || format == 0)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)",
                "format == AS_VS_EXPORT_STREAM_FORMAT_N__FLOAT16 || format == AS_VS_EXPORT_STREAM_FORMAT_N__FLOAT32",
                FILE_82B9E9F0, 0x1162);
        }
        type = 7;
    }
    *(unsigned int *)out = ((type << 8) | 0x4b0000 | swizzle) << 8;
    if (cb != 0 && ctx != 0) {
        fn_82B9A4B0(*out, buf);
        cb(ctx, "%s (%d) %d : %s\n", lbl_8316E480[0x59], 0x59, n, buf);
    }
    return 1;
}
