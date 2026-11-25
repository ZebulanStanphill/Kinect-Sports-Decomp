typedef struct Source_82B1A378 {
    char pad0[0x8];
    unsigned int flags; /* 0x08 */
} Source_82B1A378;

typedef struct Operand_82B1A378 {
    unsigned int pad0 : 25;
    unsigned int component : 2;
    unsigned int index : 5; /* 0x00 */
    char pad4[0x8];
    Source_82B1A378 *source; /* 0x0c */
} Operand_82B1A378;

typedef struct OperandList_82B1A378 {
    char pad0[0x4];
    unsigned int count;            /* 0x04 */
    Operand_82B1A378 *operands[1]; /* 0x08 */
} OperandList_82B1A378;

typedef struct Instruction_82B1A378 {
    char pad0[0x8];
    unsigned int pad8 : 1;
    unsigned int scaleZ : 5;
    unsigned int scaleY : 5;
    unsigned int scaleX : 5;
    unsigned int pad8b : 16; /* 0x08 */
    char padC[0x8];
    OperandList_82B1A378 *list; /* 0x14 */
} Instruction_82B1A378;

typedef struct Context_82B1A378 {
    char pad0[0x270];
    double errorValue;  /* 0x270 */
    double errorLimit0; /* 0x278 */
    double errorLimit1; /* 0x280 */
} Context_82B1A378;

extern double fn_82B80EF8(Source_82B1A378 *source, unsigned int component, int index);
extern void fn_82AD20C0(void *head, Operand_82B1A378 *operand, Context_82B1A378 *ctx);
extern __declspec(noreturn) int fn_82AA66A8(Context_82B1A378 *ctx, int code);

int fn_82B1A378(Context_82B1A378 *ctx, void *head, Instruction_82B1A378 *instr)
{
    OperandList_82B1A378 *list = instr->list;
    unsigned int i;

    for (i = 0; i < list->count; i++) {
        Operand_82B1A378 *operand = list->operands[i];
        double value;
        int scale;

        if ((operand->source->flags & 0x3f80) != 0x3e80) {
            return 0xe24;
        }
        value = fn_82B80EF8(operand->source, operand->component, operand->index);
        if (value < -8.0 || value > 7.5) {
            ctx->errorValue = value;
            ctx->errorLimit0 = -8.0;
            ctx->errorLimit1 = 7.5;
            return 0xe25;
        }
        scale = (int)(value * 2.0);
        if ((double)scale * 0.5 != value) {
            ctx->errorValue = value;
            ctx->errorLimit0 = 0.5;
            return 0xe26;
        }
        switch (i) {
        case 0:
            instr->scaleX = scale;
            break;
        case 1:
            instr->scaleY = scale;
            break;
        case 2:
            instr->scaleZ = scale;
            break;
        default:
            fn_82AA66A8(ctx, 0x12c0);
        }
        fn_82AD20C0(head, operand, ctx);
    }
    return 0;
}
