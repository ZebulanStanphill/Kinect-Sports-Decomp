typedef struct Target_82AD5E58 {
    unsigned char pad00[0xc];
    void *value; /* 0x0c */
} Target_82AD5E58;

typedef struct Instr_82AD5E58 {
    void *uses; /* 0x00 */
    unsigned char pad04[4];
    unsigned pad08_hi : 18; /* 0x08 */
    unsigned opcode : 7;
    unsigned pad08_lo : 7;
    unsigned char pad0c[0x1c];
    unsigned int next;            /* 0x28: tagged link, bit 0 set = end of list */
    Target_82AD5E58 *operands[2]; /* 0x2c */
} Instr_82AD5E58;

typedef struct Block_82AD5E58 {
    unsigned char pad00[4];
    unsigned int next; /* 0x04: tagged link */
    unsigned char pad08[0x14];
    unsigned int instrs; /* 0x1c: tagged link to the first instruction */
} Block_82AD5E58;

typedef struct Shader_82AD5E58 {
    unsigned char pad00[4];
    unsigned int blocks; /* 0x04: tagged link to the first block */
} Shader_82AD5E58;

static __forceinline Block_82AD5E58 *FirstBlock_82AD5E58(Shader_82AD5E58 *shader)
{
    if (shader->blocks & 1) {
        return 0;
    }
    return (Block_82AD5E58 *)shader->blocks;
}

static __forceinline Instr_82AD5E58 *FirstInstr_82AD5E58(Block_82AD5E58 *block)
{
    if (block->instrs & 1) {
        return 0;
    }
    return (Instr_82AD5E58 *)block->instrs;
}

static __forceinline Block_82AD5E58 *NextBlock_82AD5E58(Block_82AD5E58 *block)
{
    Block_82AD5E58 *node = (Block_82AD5E58 *)((unsigned int)block & ~1u);

    unsigned int next = node->next;

    if (next & 1) {
        return 0;
    }
    return (Block_82AD5E58 *)next;
}

static __forceinline Instr_82AD5E58 *NextInstr_82AD5E58(Instr_82AD5E58 *instr)
{
    Instr_82AD5E58 *node = (Instr_82AD5E58 *)((unsigned int)instr & ~1u);

    unsigned int next = node->next;

    if (next & 1) {
        return 0;
    }
    return (Instr_82AD5E58 *)next;
}

extern void fn_82AD20C0(void *uses, Target_82AD5E58 *operand, Shader_82AD5E58 *shader);
extern Target_82AD5E58 *fn_82AD1978(Instr_82AD5E58 *instr, Target_82AD5E58 *operand);
extern unsigned char fn_82ABE2E0(void *value);
extern void fn_82B8AE98(Shader_82AD5E58 *shader, void *value);

void fn_82AD5E58(Shader_82AD5E58 *shader)
{
    Block_82AD5E58 *block;
    Instr_82AD5E58 *instr;
    int side;
    unsigned int other;
    void *value;
    Target_82AD5E58 *kept;

    for (block = FirstBlock_82AD5E58(shader); block != 0; block = NextBlock_82AD5E58(block)) {
        for (instr = FirstInstr_82AD5E58(block); instr != 0; instr = NextInstr_82AD5E58(instr)) {
            if (instr->opcode == 0x6d || instr->opcode == 0x6c) {
                side = instr->opcode != 0x6d;
                value = instr->operands[1 - side]->value;
                other = 1 - side;
                kept = instr->operands[side];
                fn_82AD20C0(instr, instr->operands[other], shader);
                instr->operands[other] = fn_82AD1978(instr, kept);
                if (fn_82ABE2E0(value)) {
                    fn_82B8AE98(shader, value);
                }
                instr->opcode = 3;
            }
        }
    }
}
