typedef struct Reg_82950E98 {
    char pad00[0x38];
    unsigned int index; /* 0x38 */
    unsigned int flags; /* 0x3c */
} Reg_82950E98;

typedef struct Ins_82950E98 {
    unsigned int header;     /* 0x0: opcode in the top 12 bits, operand count below */
    unsigned int numSources; /* 0x4 */
    unsigned int *operands;  /* 0x8 */
} Ins_82950E98;

typedef struct Ctx_82950E98 {
    char pad000[0x14];
    Reg_82950E98 **regs; /* 0x014 */
    char pad018[0xec];
    Ins_82950E98 *ins; /* 0x104 */
} Ctx_82950E98;

extern void *memcpy(void *dst, const void *src, unsigned int size);

int fn_82950E98(Ctx_82950E98 *self)
{
    unsigned int count;
    unsigned int i;
    Reg_82950E98 *first;
    Reg_82950E98 *second;
    Reg_82950E98 *dst;

    count = self->ins->header & 0xfffff;
    for (i = 0; i < count; i++) {
        first = self->regs[self->ins->operands[i]];
        second = self->regs[self->ins->operands[count + i]];
        dst = self->regs[self->ins->operands[2 * count + i]];
        if (self->ins->operands[i] != self->ins->operands[count + i]) {
            return 1;
        }
        if (second->index != self->ins->operands[2 * count + i] &&
            (second->index == -1 || second->index != dst->index)) {
            return 1;
        }
        if ((second->flags ^ 0x80000) != dst->flags) {
            return 1;
        }
        if (first->index != self->ins->operands[2 * count + i] &&
            (first->index == -1 || first->index != dst->index)) {
            return 1;
        }
        if ((first->flags ^ 0x80000) != dst->flags) {
            return 1;
        }
    }
    self->ins->header = (count & 0xfffff) | 0x70000000;
    self->ins->numSources = count;
    memcpy(self->ins->operands, self->ins->operands + 2 * count, count * 4);
    return 0;
}
