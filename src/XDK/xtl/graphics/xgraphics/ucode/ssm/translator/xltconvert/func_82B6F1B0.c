extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define XLT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp", line)

#define XLT_CF_ALLOC_BUFFSEL_UNDEF 0
#define XLT_CF_ALLOC_BUFFSEL_PASS 3

typedef struct AllocArgs_82B6F1B0 {
    unsigned int bufSel;
    int count;
} AllocArgs_82B6F1B0;

typedef struct Context_82B6F1B0 {
    char pad0[0xc];
    int fc;                         /* 0x000c */
    char pad10[0x3360 - 0x10];
    int list[3];                    /* 0x3360 */
    int allocCount;                 /* 0x336c */
    char pad3370[0x4190 - 0x3370];
    unsigned int allocated[4];               /* 0x4190 */
    char pad41a0[0x5aa4 - 0x41a0];
    int positionCount;              /* 0x5aa4 */
} Context_82B6F1B0;

typedef struct Translator_82B6F1B0 {
    char pad0[0x1c];
    Context_82B6F1B0 *ctx;
} Translator_82B6F1B0;

extern void fn_82B6EB98(Translator_82B6F1B0 *self, int *list, int a, int count, AllocArgs_82B6F1B0 *args);

void fn_82B6F1B0(Translator_82B6F1B0 *self, unsigned int bufSel)
{
    Context_82B6F1B0 *ctx = self->ctx;
    AllocArgs_82B6F1B0 args;

    XLT_ASSERT(bufSel <= XLT_CF_ALLOC_BUFFSEL_PASS, 0x5b5);
    XLT_ASSERT(bufSel != XLT_CF_ALLOC_BUFFSEL_UNDEF, 0x5b6);
    if (ctx->allocated[bufSel] != 0) {
        return;
    }
    args.bufSel = bufSel;
    if (bufSel == 1) {
        args.count = 0;
    } else if (bufSel == 2) {
        args.count = ctx->positionCount - 1;
    } else if (bufSel == 3) {
        args.count = 0;
    }
    if (bufSel != 3) {
        ctx->allocated[bufSel] = 1;
    }
    fn_82B6EB98(self, ctx->list, ctx->fc, 1, &args);
    ctx->allocCount++;
}
