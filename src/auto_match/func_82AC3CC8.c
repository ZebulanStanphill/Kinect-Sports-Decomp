typedef struct Bits_82AC3CC8 {
    unsigned int pad24 : 8;
    unsigned int mask20 : 4;
    unsigned int mask16 : 4;
    unsigned int isSet : 1;  /* 0x8000 */
    unsigned int bit14 : 1;  /* 0x4000 */
    unsigned int field8 : 6; /* 0x3f00 */
    unsigned int bit7 : 1;
    unsigned int bit6 : 1; /* 0x40 */
    unsigned int kind : 6; /* 0x3f */
} Bits_82AC3CC8;

typedef struct Inst_82AC3CC8 {
    Bits_82AC3CC8 bits; /* 0x0 */
    unsigned int a;     /* 0x4 */
    unsigned int b;     /* 0x8 */
} Inst_82AC3CC8;

typedef struct Ctx_82AC3CC8 {
    char pad0[0x20];
    unsigned int limit; /* 0x20 */
    char pad24[0x8058 - 0x24];
    unsigned int count; /* 0x8058 */
    int has3D;          /* 0x805c */
    int has3E;          /* 0x8060 */
    int has3F;          /* 0x8064 */
} Ctx_82AC3CC8;

typedef struct Entry_82AC3CC8 {
    int index;          /* 0x0: used in entry 0 */
    int a;              /* 0x4 */
    int b;              /* 0x8 */
    unsigned int flags; /* 0xc */
} Entry_82AC3CC8;

int fn_82AC3CC8(Inst_82AC3CC8 *insts, int idx, Ctx_82AC3CC8 *ctx, Entry_82AC3CC8 *out)
{
    Inst_82AC3CC8 *inst = &insts[idx];
    unsigned int kind;
    Entry_82AC3CC8 *e;
    int i;

    if (inst->bits.isSet) {
        if (inst->bits.bit6 || inst->bits.field8)
            return 0x80004005;
        kind = inst->bits.kind;
        if (kind > 0xf) {
            if (kind < 0x3d)
                return 0x80004005;
        } else if (kind >= ctx->count) {
            return 0x80004005;
        }
        if (kind == 0x3d) {
            if (ctx->has3D == 0)
                return 0x80004005;
        } else if (kind == 0x3e) {
            if (ctx->has3E == 0)
                return 0x80004005;
            goto check;
        } else if (kind == 0x3f) {
            if (ctx->has3F == 0)
                return 0x80004005;
        } else {
            goto check;
        }
        for (i = 1; i < 4; i++) {
            if (inst->bits.mask20 & (1 << i))
                return 0x80004005;
            if (inst->bits.mask16 & (1 << i))
                return 0x80004005;
            if (inst->bits.bit14)
                return 0x80004005;
        }
    check:
        e = &out[out->index];
        if (kind >= 0x3e) {
            if ((e->flags & 0x1000) == 0)
                return 0x80004005;
            if (kind == 0x3e)
                out[out->index].flags |= 0x80;
        }
        if (kind == 0x3d || kind <= 0xf) {
            if ((e->flags & 0x400) == 0)
                return 0x80004005;
        }
    } else {
        if (inst->bits.bit14)
            return 0x80004005;
        if (inst->bits.bit6)
            return 0x80004005;
        if (inst->bits.field8 > ctx->limit || inst->bits.kind > ctx->limit)
            return 0x80004005;
    }
    return 0;
}
