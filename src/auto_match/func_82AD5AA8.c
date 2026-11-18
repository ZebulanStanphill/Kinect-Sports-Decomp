typedef struct Block_82AD5AA8 {
    unsigned int next;   /* 0x00: tagged link to the next block's anchor */
    unsigned int anchor; /* 0x04 */
    char pad08[0x10];
    unsigned int firstInst; /* 0x18: tagged link to the first instruction's anchor */
    unsigned int lastInst;  /* 0x1c: tagged */
} Block_82AD5AA8;

typedef struct Inst_82AD5AA8 {
    int pad0;
    int pad4;
    unsigned int flags; /* 0x08 */
    char pad0c[6];
    unsigned short reg; /* 0x12 */
    char pad14[8];
    Block_82AD5AA8 *block; /* 0x1c */
    int pad20;
    unsigned int next;   /* 0x24: tagged link to the next instruction's anchor */
    unsigned int anchor; /* 0x28 */
} Inst_82AD5AA8;

extern unsigned int fn_82ADD198(void *ctx, unsigned int value);
extern unsigned char fn_82ABDAA0(Inst_82AD5AA8 *inst);
extern Inst_82AD5AA8 *fn_82AD1400(void *ctx, Inst_82AD5AA8 *inst);
__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);

static __forceinline Inst_82AD5AA8 *NextInst(Inst_82AD5AA8 *inst)
{
    unsigned int link = ((Inst_82AD5AA8 *)((unsigned int)inst & ~1u))->next;

    if (link & 1) {
        return 0;
    }
    return (Inst_82AD5AA8 *)((link & ~1u) - 0x28);
}

static __forceinline Inst_82AD5AA8 *FirstInst(Block_82AD5AA8 *block)
{
    if (block->lastInst & 1) {
        return 0;
    }
    return (Inst_82AD5AA8 *)((block->firstInst & ~1u) - 0x28);
}

static __forceinline Block_82AD5AA8 *NextBlock(Block_82AD5AA8 *block)
{
    unsigned int link = ((Block_82AD5AA8 *)((unsigned int)block & ~1u))->next;

    if (link & 1) {
        return 0;
    }
    return (Block_82AD5AA8 *)((link & ~1u) - 4);
}

/* Finds the first instruction after start (in program order) whose register maps to value's key. */
Inst_82AD5AA8 *fn_82AD5AA8(void *ctx, Inst_82AD5AA8 *start, unsigned int value)
{
    unsigned int key = fn_82ADD198(ctx, value);
    Block_82AD5AA8 *block = start->block;
    Inst_82AD5AA8 *first = NextInst(start);
    Inst_82AD5AA8 *inst;
    Inst_82AD5AA8 *other;

    for (;;) {
        for (inst = first; inst != 0; inst = NextInst(inst)) {
            if (fn_82ABDAA0(inst)) {
                if ((unsigned char)((inst->flags >> 23) & 1)) {
                    if (!fn_82ABDAA0(inst)) {
                        fn_82AA66A8(ctx, 0x12c0);
                    }
                    if (fn_82ADD198(ctx, inst->reg) == key) {
                        return inst;
                    }
                }
                other = fn_82AD1400(ctx, inst);
                if (other != 0 && (unsigned char)((other->flags >> 23) & 1)) {
                    if (!fn_82ABDAA0(other)) {
                        fn_82AA66A8(ctx, 0x12c0);
                    }
                    if (fn_82ADD198(ctx, other->reg) == key) {
                        return inst;
                    }
                }
            }
        }
        block = NextBlock(block);
        if (block == 0) {
            fn_82AA66A8(ctx, 0x12c0);
        }
        first = FirstInst(block);
    }
}
