struct Ctx_82CA0C90 {
    char pad0[0xcc];
    int dimCC;      /* 0xcc */
    int dimD0;      /* 0xd0 */
    int dimD4;      /* 0xd4 */
    int dimD8;      /* 0xd8 */
    char pad1[0xef8 - 0xdc];
    unsigned char *plane0;  /* 0xef8 */
    unsigned char *plane1;  /* 0xefc */
    unsigned char *plane2;  /* 0xf00 */
    char pad2[0x3a0c - 0xf04];
    int mode;       /* 0x3a0c */
};

void fn_82CA0C00(unsigned char *plane0, unsigned char *plane1, unsigned char *plane2, int count0, int count12);

void fn_82CA0C90(struct Ctx_82CA0C90 *ctx)
{
    if (ctx->mode != 1) {
        return;
    }
    fn_82CA0C00(ctx->plane0, ctx->plane1, ctx->plane2, ctx->dimD4 * ctx->dimCC, ctx->dimD8 * ctx->dimD0);
}
