extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);

typedef struct Ctx_82B81860 {
    char pad[0x30];
    unsigned int version;
} Ctx_82B81860;

typedef struct State_82B81860 {
    char pad[0x14];
    unsigned int flags;
} State_82B81860;

typedef struct Desc_82B81860 {
    unsigned int word0;
    unsigned int word1;
    unsigned int word2;
} Desc_82B81860;

static __forceinline int IsValid(const Ctx_82B81860 *ctx)
{
    return (ctx->version & 0xffff0000) != 0xffff0000;
}

int fn_82B81860(Ctx_82B81860 *ctx, State_82B81860 *state, Desc_82B81860 *desc, unsigned char report)
{
    int code = 0;

    if (IsValid(ctx)) {
        unsigned int type = desc->word0 & 0x1f;
        if (type == 0x11)
            code = 0xde6;
        else if (type == 0x12)
            code = 0xde7;
    }
    if (IsValid(ctx)) {
        if ((desc->word1 & 0x10000000) != 0 && (desc->word2 & 1) == 0) {
            if ((state->flags & 1) != 0)
                code = 0xde5;
            else
                code = ((desc->word2 >> 14) & 3) + 0xe2e;
        }
        desc->word0 |= 0x80000;
    }
    if (code != 0 && report)
        fn_82AA66A8(ctx, code);
    return code;
}
