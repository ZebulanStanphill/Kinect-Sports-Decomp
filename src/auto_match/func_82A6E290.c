typedef struct Ctx_82A6E290 {
    char pad0[0x8c];
    int mode;    /* 0x8c */
    int pad90;   /* 0x90 */
    int lockedA; /* 0x94 */
    int pad98;   /* 0x98 */
    int lockedB; /* 0x9c */
} Ctx_82A6E290;

void fn_82A6E290(Ctx_82A6E290 *ctx, int which, short hi, short lo, int base, short *halfSpan, short *center)
{
    short merged;

    if (lo >= hi) {
        *halfSpan = base;
        *center = base * 2;
    } else {
        *halfSpan = (hi - lo) / 2 + base;
        *center = (hi + lo) / 2 + base;
    }
    if (which == 1) {
        if (ctx->mode != 1) {
            return;
        }
        if (ctx->lockedB != 0) {
            return;
        }
        merged = (*halfSpan + *center) / 2;
        *halfSpan = merged;
        *center = merged;
    } else {
        if (ctx->mode != 1) {
            return;
        }
        if (ctx->lockedA != 0) {
            return;
        }
        merged = (*halfSpan + *center) / 2;
        *halfSpan = merged;
        *center = merged;
    }
}
