typedef struct Instruction_82AD1400 {
    unsigned int word0; /* 0x00 */
    unsigned int word4; /* 0x04 */
    unsigned int word8; /* 0x08 */
} Instruction_82AD1400;

typedef struct Block_82AD1400 {
    unsigned int flags;          /* 0x00 */
    struct Block_82AD1400 *next; /* 0x04 */
} Block_82AD1400;

typedef struct Program_82AD1400 {
    Block_82AD1400 *blocks; /* 0x00 */
    int pad4;
    unsigned int flags; /* 0x08 */
    char padC[0x20];
    Block_82AD1400 *mainBlock; /* 0x2c */
} Program_82AD1400;

typedef struct Compiler_82AD1400 {
    char pad0[0x28];
    unsigned int options; /* 0x28 */
} Compiler_82AD1400;

typedef struct Operand_82AD1400 {
    int words[4];
} Operand_82AD1400;

extern void fn_82B82D28(Block_82AD1400 *block, int start, Instruction_82AD1400 **found, int *count,
                        unsigned int *extra, int a, int b, int c);
extern void fn_82B86B80(Operand_82AD1400 *out, Instruction_82AD1400 *instruction, int count,
                        unsigned int extra);
extern Instruction_82AD1400 *fn_82B86A10(Compiler_82AD1400 *self, int kind, Operand_82AD1400 *operand);

static __forceinline int NotNull(Block_82AD1400 *block)
{
    if (block) {
        return 1;
    }
    return 0;
}

Instruction_82AD1400 *fn_82AD1400(Compiler_82AD1400 *self, Program_82AD1400 *program)
{
    Instruction_82AD1400 *found;
    int count;
    unsigned int extra;
    Block_82AD1400 *block;
    Operand_82AD1400 operand;

    extra = 0;
    count = 4;
    found = 0;
    if (program->flags & 0x380000) {
        block = program->mainBlock;
    } else {
        block = program->blocks;
        while (NotNull(block) && !(block->flags & 0xe000000)) {
            block = block->next;
        }
        if (block == 0) {
            return 0;
        }
    }
    fn_82B82D28(block, 0, &found, &count, &extra, 0, 0, 0);
    if (count != 0 || extra != 0) {
        if ((found->word8 & 0x3f80) != 0x3e80) {
            return 0;
        }
        if (!(self->options & 0x4000)) {
            fn_82B86B80(&operand, found, count, extra);
            found = fn_82B86A10(self, 1, &operand);
        }
    }
    return found;
}
