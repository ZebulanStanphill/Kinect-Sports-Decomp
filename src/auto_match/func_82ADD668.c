typedef struct Range_82ADD668 {
    unsigned int pad : 13;
    unsigned int count : 3;  /* bits 16-18 */
    unsigned int start : 16; /* low half */
} Range_82ADD668;

typedef struct Inst_82ADD668 {
    char pad00[0x8];
    unsigned int pad08 : 27;
    unsigned int writeMask : 4; /* bits 1-4 */
    unsigned int pad08b : 1;
    char pad0c[0x10 - 0x0c];
    Range_82ADD668 range; /* 0x10 */
} Inst_82ADD668;

typedef struct Value_82ADD668 {
    unsigned __int64 *used[4]; /* 0x00: one bit set per register, per slot */
    char pad10[0xc0 - 0x10];
    unsigned int pad0 : 10;
    unsigned int swizzle : 8; /* bits 14-21: two bits per slot */
    unsigned int pad1 : 11;
    unsigned int slots : 3; /* bits 0-2 */
} Value_82ADD668;

typedef struct Ctx_82ADD668 {
    char pad[0x2b0];
    Value_82ADD668 **values; /* 0x2b0 */
} Ctx_82ADD668;

extern unsigned int fn_82ADD198(Ctx_82ADD668 *ctx, unsigned int id);
/* Reports an internal error and does not return here: the code after each call is laid out as if
   nothing followed it, and no value has to survive the call. */
extern __declspec(noreturn) void fn_82AA66A8(Ctx_82ADD668 *ctx, int code);

/* Keeps the mask loop's test at its top, as the original has it. */
static __forceinline int IsSet(unsigned int mask)
{
    if (mask != 0) {
        return 1;
    }
    return 0;
}

static __forceinline unsigned char IsUsed(unsigned __int64 *bits, unsigned int index)
{
    return (bits[index >> 6] & ((unsigned __int64)1 << (index & 63))) != 0;
}

/* Returns the lowest register the instruction's written components use. */
unsigned int fn_82ADD668(Ctx_82ADD668 *ctx, Inst_82ADD668 *inst)
{
    unsigned int index;
    Value_82ADD668 *value;
    unsigned int mask;
    unsigned int lowest;
    unsigned int component;
    unsigned int slot;
    unsigned int reg;

    for (index = inst->range.start;; index++) {
        if (index >= inst->range.start + inst->range.count) {
            fn_82AA66A8(ctx, 0x12c0);
        }
        value = ctx->values[fn_82ADD198(ctx, index)];
        if (value != 0) {
            break;
        }
    }

    lowest = 0xffff;
    for (mask = inst->writeMask; IsSet(mask); mask -= mask & ~(mask - 1)) {
        component = 31 - _CountLeadingZeros(mask & ~(mask - 1));
        for (slot = 0; slot < value->slots; slot++) {
            if (component == ((value->swizzle >> (slot * 2)) & 3)) {
                break;
            }
        }
        if (slot >= value->slots) {
            fn_82AA66A8(ctx, 0x12c0);
        }
        for (reg = inst->range.start; reg < inst->range.start + inst->range.count; reg++) {
            if (IsUsed(value->used[slot], reg)) {
                if (reg < lowest) {
                    lowest = reg;
                }
                break;
            }
        }
        if (reg >= inst->range.start + inst->range.count) {
            fn_82AA66A8(ctx, 0x12c0);
        }
    }
    if (lowest == 0xffff) {
        fn_82AA66A8(ctx, 0x12c0);
    }
    return lowest;
}
