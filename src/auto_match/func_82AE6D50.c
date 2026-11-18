typedef struct Register_82AE6D50 {
    unsigned int pad0 : 3;
    unsigned int index : 9; /* 0x00 */
    unsigned int pad1 : 20;
    unsigned int flags; /* 0x04 */
    char pad08[0x20];
} Register_82AE6D50;

typedef struct Named_82AE6D50 {
    char pad0[0x18];
    const char *name; /* 0x18 */
} Named_82AE6D50;

typedef struct Context_82AE6D50 {
    char pad0[0xc];
    Register_82AE6D50 *registers; /* 0x0c */
    char pad10[0x20];
    unsigned int version; /* 0x30 */
} Context_82AE6D50;

extern unsigned int fn_82ABDCF8(Context_82AE6D50 *ctx);
extern unsigned int fn_82AE4D28(Context_82AE6D50 *ctx);
extern Named_82AE6D50 *fn_82AE6CC0(Context_82AE6D50 *ctx, unsigned int index);
__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);

/* Returns the first index and the count of the register file that the register belongs to. */
void fn_82AE6D50(Context_82AE6D50 *ctx, unsigned int index, unsigned int *first, unsigned int *count)
{
    Register_82AE6D50 *reg = &ctx->registers[index];
    unsigned int base;
    unsigned int end;
    Named_82AE6D50 *named;

    switch ((reg->flags >> 4) & 7) {
    case 0:
        base = 0xffff0000 == (ctx->version & 0xffff0000) ? 0x80 : 0;
        *first = base;
        *count = base + 0x80;
        break;
    case 1:
        base = 0xffff0000 == (ctx->version & 0xffff0000) ? 0x10 : 0;
        *first = base;
        *count = base + 0x10;
        break;
    case 2:
        *first = 0;
        *count = 0x100;
        break;
    case 3:
        base = fn_82ABDCF8(ctx);
        end = base + fn_82AE4D28(ctx);
        *first = base;
        *count = end;
        break;
    default:
        if (reg->index <= 0xff) {
            fn_82AA66A8(ctx, 0x12c0);
        }
        if (reg->flags & 0xff80) {
            named = fn_82AE6CC0(ctx, index);
            if (named == 0) {
                fn_82AA66A8(ctx, 0x12c0);
            }
            fn_82AA66A8(ctx, 0x119d, named->name);
        }
        *first = 0;
        *count = 0;
        break;
    }
}
