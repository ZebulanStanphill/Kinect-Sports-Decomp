typedef struct Reg_82950DB8 {
    char pad00[0x38];
    unsigned int index; /* 0x38 */
    unsigned int flags; /* 0x3c */
} Reg_82950DB8;

typedef struct Ins_82950DB8 {
    unsigned int header;     /* 0x0: opcode in the top 12 bits, operand count below */
    unsigned int numSources; /* 0x4 */
    unsigned int *operands;  /* 0x8 */
} Ins_82950DB8;

typedef struct Ctx_82950DB8 {
    char pad000[0x14];
    Reg_82950DB8 **regs; /* 0x014 */
    char pad018[0xec];
    Ins_82950DB8 *ins; /* 0x104 */
} Ctx_82950DB8;

int fn_82950DB8(Ctx_82950DB8 *self)
{
    unsigned int count;
    unsigned int i;
    Reg_82950DB8 *src;
    Reg_82950DB8 *dst;
    count = self->ins->header & 0xfffff;
    for (i = 0; i < count; i++) {
        src = self->regs[self->ins->operands[i]];
        dst = self->regs[self->ins->operands[2 * count + i]];
        if (self->ins->operands[i] != self->ins->operands[count + i]) {
            return 1;
        }
        if (dst->index != self->ins->operands[i] && (dst->index == -1 || dst->index != src->index)) {
            return 1;
        }
        if ((dst->flags ^ 0x80000) != src->flags) {
            return 1;
        }
    }
    self->ins->header = (count & 0xfffff) | 0x70000000;
    self->ins->numSources = count;
    return 0;
}
