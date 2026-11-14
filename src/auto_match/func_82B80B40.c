typedef struct Reg_82B80B40 {
    unsigned int word0;
    unsigned int bits;
    unsigned int word2;
    unsigned int word3;
} Reg_82B80B40;

typedef struct Entry_82B80B40 {
    unsigned int bits;
    unsigned int f4;
    unsigned int f8;
} Entry_82B80B40;

typedef struct Ctx_82B80B40 {
    char pad0[0x15c];
    Entry_82B80B40 entries[15];
    char pad210[8];
    unsigned int count;
} Ctx_82B80B40;

typedef struct Decl_82B80B40 {
    char pad0[8];
    int name;
} Decl_82B80B40;

typedef struct Inst_82B80B40 {
    char pad0[0x1c];
    unsigned int *words;
} Inst_82B80B40;

extern void fn_82B80788(Ctx_82B80B40 *ctx, char *buf, int size, int name, unsigned int mode);
__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);

int fn_82B80B40(Ctx_82B80B40 *ctx, Reg_82B80B40 reg, Decl_82B80B40 *decl,
                Inst_82B80B40 *inst, int index)
{
    unsigned int i;
    char buf[100];

    for (i = 0; i < ctx->count; i++) {
        Entry_82B80B40 *e = &ctx->entries[i];
        if ((e->bits & 0x1f) == (reg.bits & 0x1f) && ((e->bits ^ reg.bits) & 0x1e0) == 0) {
            if (decl != 0) {
                fn_82B80788(ctx, buf, 100, decl->name, inst->words[index * 2] >> 27 & 0xf);
                fn_82AA66A8(ctx, 0xdb9, buf);
            }
            return 1;
        }
    }
    return 0;
}
