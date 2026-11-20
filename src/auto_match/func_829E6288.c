/* Builds the context's table from the inputs, expands it through a scratch
   buffer of two halves and applies it; the buffer is freed on every path.
   The original loads the buffer pointer straight into its saved register
   after the allocation call, which needs link-time code generation with the
   allocator (fn_829D47B0). */
extern void fn_829D47B0(unsigned char **out, unsigned int size);
extern void fn_82A28E60(void *heap, int flags, void *p);
extern char *lbl_832179FC;

typedef struct Context_829E6288 {
    char pad0[0x10];
    char header[0x28]; /* 0x10 */
    int count;         /* 0x38 */
    char table[4];     /* 0x3c */
} Context_829E6288;

extern int fn_829E7260(void *a, void *b, void *c, Context_829E6288 *ctx, void *header, void *table);
extern int fn_829E71F0(void *table, unsigned char *begin, unsigned char *end);
extern int fn_829E6798(void *table, int count, unsigned char *buffer);

static __forceinline void Free_829E6288(void *p)
{
    if (p != 0) {
        fn_82A28E60(*(void **)(lbl_832179FC + 0x8f4cc), 0, p);
    }
}

int fn_829E6288(void *a, void *b, void *c, Context_829E6288 *ctx)
{
    int result;
    unsigned char *buffer;

    result = fn_829E7260(a, b, c, ctx, ctx->header, ctx->table);
    if (result != 0) {
        return result;
    }
    fn_829D47B0(&buffer, 0x10e00);
    result = fn_829E71F0(ctx->table, buffer, buffer + 0x8700);
    if (result != 0) {
        Free_829E6288(buffer);
        return result;
    }
    result = fn_829E6798(ctx->table, ctx->count, buffer);
    if (result != 0) {
        Free_829E6288(buffer);
        return result;
    }
    Free_829E6288(buffer);
    return 0;
}
