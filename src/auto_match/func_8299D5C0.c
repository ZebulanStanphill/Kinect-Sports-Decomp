typedef struct Instr_8299D5C0 {
    unsigned int opcode;      /* 0x00 */
    unsigned int destCount;   /* 0x04 */
    unsigned int *dests;      /* 0x08 */
    unsigned int sourceCount; /* 0x0c */
    unsigned int *sources;    /* 0x10 */
} Instr_8299D5C0;

typedef struct Reg_8299D5C0 {
    char pad00[0x10];
    unsigned int type; /* 0x10 */
    char pad14[0x24];
    unsigned int alias; /* 0x38 */
} Reg_8299D5C0;

typedef struct Compiler_8299D5C0 {
    char pad00[0x14];
    Reg_8299D5C0 **regs; /* 0x14 */
} Compiler_8299D5C0;

int fn_8299D5C0(Compiler_8299D5C0 *compiler, Instr_8299D5C0 **instrs, unsigned int begin, unsigned int end,
                unsigned int *targets, unsigned int targetCount, unsigned int *maxWrites, int *readsConstant,
                int *partialWrite)
{
    unsigned int maxCount;
    unsigned int i;

    *readsConstant = 0;
    maxCount = 0;
    *partialWrite = 0;
    for (i = begin; i < end; i++) {
        Instr_8299D5C0 *instr = instrs[i];

        if (instr != 0 && instr->opcode != 0) {
            unsigned int width = instr->opcode & 0xfffff;
            unsigned int writes = 0;
            unsigned int groups = instr->destCount / width;
            unsigned int t;

            for (t = 0; t < targetCount; t++) {
                unsigned int g;

                for (g = 0; g < groups; g++) {
                    unsigned int hits = 0;
                    unsigned int k;

                    for (k = 0; k < width; k++) {
                        unsigned int dest = instr->dests[g * width + k];

                        if (compiler->regs[dest]->alias == targets[t] || dest == targets[t]) {
                            writes++;
                            hits++;
                            if (writes > maxCount) {
                                maxCount = writes;
                            }
                            if (instr->sourceCount == 1 && compiler->regs[instr->sources[0]]->type == 3) {
                                *readsConstant = 1;
                            }
                            if ((instr->opcode & 0xfff00000) != 0x50000000) {
                                unsigned int s;

                                for (s = 0; s < instr->sourceCount; s++) {
                                    if (compiler->regs[instr->sources[s]]->type == 3) {
                                        *readsConstant = 1;
                                    }
                                }
                            }
                        }
                    }
                    if (hits != width && hits != 0) {
                        *partialWrite = 1;
                    }
                }
            }
        }
    }
    *maxWrites = maxCount;
    return 0;
}
