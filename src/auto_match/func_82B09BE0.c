// Runs the fn_82AF4A80 check, then forwards to fn_82B00048; returns 3 if the check fails.
// fn_82AF4A80 bumps a counter at +0x224 and fails once it reaches a configured limit.
// Its four callers pass the constants 0x315, 0x319, 0x329 and 0x330 as a second
// argument that it never reads, which looks like a call-site tag such as __LINE__.
extern unsigned char fn_82AF4A80(void *ctx, int site);
extern int fn_82B00048(void *ctx, void *a, void *b, void 
*c, void *d, int e);

int fn_82B09BE0(void *ctx, void *a, void *b, void *c, void *d)
{
    if (fn_82AF4A80(ctx, 0x319))
        return fn_82B00048(ctx, a, b, c, d, 0);
    return 3;
}
