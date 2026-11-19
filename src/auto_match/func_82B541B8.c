typedef struct Value_82B541B8 {
    int pad0;
    int kind; /* 0x04: 0xb */
    char pad8[0x8];
    unsigned int index; /* 0x10 */
    void *buffer;       /* 0x14 */
    char pad18[0x14];
    unsigned int flags; /* 0x2c */
    char pad30[0x4];
    void *shared;   /* 0x34 */
    void *external; /* 0x38 */
} Value_82B541B8;

typedef struct Item_82B541B8 {
    int pad0;
    int kind; /* 0x04 */
    char pad8[0x10];
    Value_82B541B8 *value; /* 0x18 */
} Item_82B541B8;

typedef struct Register_82B541B8 {
    unsigned int pad0 : 29;
    unsigned int state : 3;  /* 0x00 */
    unsigned int locked : 1; /* 0x04 */
    unsigned int pad4 : 24;
    unsigned int mode : 3;
    unsigned int pad4b : 4;
    char pad8[0x1c];
    unsigned int stream; /* 0x24 */
} Register_82B541B8;

typedef struct Compiler_82B541B8 {
    char pad0[0xc];
    Register_82B541B8 *registers; /* 0x0c */
    unsigned int current;         /* 0x10 */
    char pad14[0x14];
    unsigned int dirty;   /* 0x28 */
    unsigned int options; /* 0x2c */
    char pad30[0x224];
    unsigned int stream; /* 0x254 */
} Compiler_82B541B8;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern void fn_82B54048(Compiler_82B541B8 *ctx, unsigned int index, Item_82B541B8 *item,
                        Value_82B541B8 *value, int a, int b);
extern void fn_82AE7308(Compiler_82B541B8 *ctx, unsigned int index);

static __forceinline Value_82B541B8 *AsValue_82B541B8(void *ctx, Value_82B541B8 *v)
{
    if (v == 0 || v->kind != 0xb) {
        fn_82AA66A8(ctx, 0x12c1);
    }
    return v;
}

Register_82B541B8 *fn_82B541B8(Compiler_82B541B8 *ctx, Item_82B541B8 *item)
{
    Value_82B541B8 *value = AsValue_82B541B8(ctx, item->value);
    Register_82B541B8 *reg;
    unsigned int mode;

    if (value->index == ctx->current || value->buffer == 0) {
        return 0;
    }
    fn_82B54048(ctx, value->index, item, value, 0, 0);
    reg = &ctx->registers[value->index];
    if (value->flags & 2) {
        reg->state = 2;
        if (value->shared != 0) {
            ctx->dirty |= 0x20;
        }
    } else if (value->flags & 0x80) {
        if (value->external == 0) {
            fn_82AA66A8(ctx, 0x12c1);
        }
        reg->state = 2;
        ctx->dirty |= 0x20;
    } else {
        reg->state = 1;
        fn_82AE7308(ctx, value->index);
    }
    if (ctx->stream != 0) {
        mode = reg->mode;
        if (mode == 7 || mode == 2) {
            reg->stream = ctx->stream;
            reg->mode = 2;
        }
    }
    if (ctx->options & 0x800) {
        reg->locked = 1;
    }
    return reg;
}
