typedef void (*Cb_82B9E978)(void *ctx, const char *fmt, ...);
extern void fn_82B9A4B0(float v, void *buf);
extern int lbl_8316E480[];

int fn_82B9E978(void *obj, int index, float *out, Cb_82B9E978 cb, void *ctx)
{
    char buf[32];

    *(unsigned *)out = 0x4b000000u;
    if (cb != 0 && ctx != 0) {
        fn_82B9A4B0(*out, buf);
        cb(ctx, "%s (%d) %d : %s\n", lbl_8316E480[0x58], 0x58, index, buf);
    }
    return 1;
}
