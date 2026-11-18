typedef struct Self_829DCF18 {
    char pad0[0x9c90];
    unsigned int count; /* 0x9c90 */
} Self_829DCF18;

typedef struct Context_829DCF18 {
    Self_829DCF18 *self;
} Context_829DCF18;

extern void fn_829DCFB0(unsigned int count, unsigned int max, Context_829DCF18 *ctx, int *indices);
extern void fn_829D4B80(void *out, Self_829DCF18 *self, unsigned int count, int *indices);

void fn_829DCF18(Self_829DCF18 *self, void *out)
{
    Context_829DCF18 ctx;
    int indices[20];
    int n;
    int i;

    if (self->count > 20) {
        ctx.self = self;
        fn_829DCFB0(self->count, 20, &ctx, indices);
        n = 20;
    } else {
        n = self->count;
        for (i = 0; i < n; i++)
            indices[i] = i;
    }
    fn_829D4B80(out, self, n, indices);
}
