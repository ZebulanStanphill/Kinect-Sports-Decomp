typedef struct Def_82B8B0B8 {
    unsigned int value; /* 0x00 */
    int pad4;
    struct Def_82B8B0B8 *next; /* 0x08 */
} Def_82B8B0B8;

typedef struct Block_82B8B0B8 {
    unsigned char pad0[0xc];
    Def_82B8B0B8 *defs; /* 0x0c */
    unsigned char pad10[0x10];
    unsigned char arena[4]; /* 0x20 */
} Block_82B8B0B8;

typedef struct Instr_82B8B0B8 {
    int pad0;
    int pad4;
    unsigned int pad8 : 10;     /* 0x08 */
    unsigned int dstCount : 3;  /* 0x08, bits 19-21 */
    unsigned int predicate : 1; /* 0x08, bit 18 */
    unsigned int pad8b : 1;
    unsigned int srcCount : 3; /* 0x08, bits 14-16 */
    unsigned int opcode : 7;   /* 0x08, bits 7-13 */
    unsigned int pad8c : 7;
    unsigned char padC[0x10];
    Block_82B8B0B8 *block; /* 0x1c */
} Instr_82B8B0B8;

__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);
extern int fn_82ABDD90(void *ctx, int opcode, int dstCount, unsigned int srcCount);
extern void fn_82B18438(void *ctx, Block_82B8B0B8 *from, unsigned int to);
extern Instr_82B8B0B8 *fn_82B841E8(void *ctx, Block_82B8B0B8 *block, void *arena, int opcode, int a, int b);
extern void fn_82B8AC10(void *ctx, Instr_82B8B0B8 *instr, int pass, int flag);

static __forceinline int NotNull(void *p)
{
    if (p != 0) {
        return 1;
    }
    return 0;
}

static __forceinline unsigned int *Operand(void *ctx, Instr_82B8B0B8 *instr)
{
    return (unsigned int *)((char *)instr +
                            fn_82ABDD90(ctx, instr->opcode, instr->dstCount, instr->srcCount) - 0x10);
}

unsigned char fn_82B8B0B8(void *ctx, Instr_82B8B0B8 *instr, int unused, unsigned char predicate)
{
    unsigned int opcode;
    unsigned char changed;
    Block_82B8B0B8 *block;
    Def_82B8B0B8 **link;
    Def_82B8B0B8 *def;
    unsigned int value;
    Instr_82B8B0B8 *call;

    opcode = instr->opcode;
    if (opcode == 0x75) {
        return 0;
    }
    changed = 0;
    if (instr->predicate == predicate) {
        switch ((int)opcode) {
        case 0x57:
            value = *Operand(ctx, instr);
            block = instr->block;
            fn_82B8AC10(ctx, instr, 0, 1);
            call = fn_82B841E8(ctx, block, block->arena, 0x56, 0, 0);
            *Operand(ctx, call) = value;
            break;
        default:
            fn_82AA66A8(ctx, 0xdac, "predication");
        case 0x5a:
            value = *Operand(ctx, instr);
            block = instr->block;
            link = &block->defs;
            def = *link;
            while (NotNull(def)) {
                if (def->value != value) {
                    fn_82B18438(ctx, block, def->value);
                    changed = 1;
                }
                if (*link == def) {
                    link = &def->next;
                }
                def = *link;
            }
            fn_82B8AC10(ctx, instr, 0, 1);
            break;
        }
    } else {
        switch ((int)opcode) {
        case 0x55:
            return 0;
        case 0x57:
            fn_82AA66A8(ctx, 0xdac, "remove conditional call");
        default:
            fn_82AA66A8(ctx, 0xdac, "predication");
        case 0x5a:
            break;
        }
        value = *Operand(ctx, instr);
        fn_82B18438(ctx, instr->block, value);
        changed = 1;
        fn_82B8AC10(ctx, instr, 0, 1);
    }
    return changed;
}
