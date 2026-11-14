typedef struct Ctx_82F00468 {
    char pad[0x5254];
    int mode;
} Ctx_82F00468;

extern const unsigned char lbl_831AE320[256];
extern const unsigned char lbl_831AE420[256];

void fn_82F00468(Ctx_82F00468 *ctx, const unsigned char *src, unsigned char *dst, int count)
{
    int i;

    if (ctx->mode == 1) {
        for (i = 0; i < count; i++)
            dst[i] = lbl_831AE320[src[i]];
    } else {
        for (i = 0; i < count; i++)
            dst[i] = lbl_831AE420[src[i]];
    }
}
