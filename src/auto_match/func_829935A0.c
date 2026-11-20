typedef struct Instr_829935A0 {
    unsigned int flags; /* 0x00 */
    unsigned int reg;   /* 0x04 */
    char pad08[0x8];
    unsigned int type; /* 0x10 */
    char pad14[0x28];
    unsigned int flags3c; /* 0x3c */
    char pad40[0x8];
    int index48; /* 0x48 */
    char pad4c[0x8];
    int index54; /* 0x54 */
} Instr_829935A0;

typedef struct Reg_829935A0 {
    unsigned int pad00;
    unsigned int flags; /* 0x04 */
} Reg_829935A0;

typedef struct Other_829935A0 {
    char pad00[0x3c];
    void *value; /* 0x3c */
} Other_829935A0;

typedef struct Compiler_829935A0 {
    char pad00[0x10];
    Reg_829935A0 **regs;     /* 0x10 */
    Instr_829935A0 **instrs; /* 0x14 */
    char pad18[0xb4];
    unsigned int options; /* 0xcc */
    char padd0[0x34];
    Other_829935A0 *other; /* 0x104 */
    char pad108[0x20];
    unsigned int *outputs; /* 0x128 */
    int outputBase;        /* 0x12c */
} Compiler_829935A0;

extern int fn_82975B00(Compiler_829935A0 *compiler, void *value, int code, const char *format, ...);

int fn_829935A0(Compiler_829935A0 *compiler, unsigned int *ids, unsigned int count, unsigned int *outMask,
                int all)
{
    unsigned int mask;
    unsigned int i;

    mask = 0;
    if (all != 0) {
        mask = 0xf0000;
    } else {
        if ((compiler->instrs[ids[0]]->flags3c & 0x200) != 0) {
            mask = 0x100000;
        }
        for (i = 0; i < count; i++) {
            unsigned int bit = 0;
            switch (compiler->instrs[ids[i]]->type) {
            case 0:
                bit = 0x10000;
                break;
            case 1:
                bit = 0x20000;
                break;
            case 2:
                bit = 0x40000;
                break;
            case 3:
                bit = 0x80000;
                break;
            }
            if ((bit & mask) != 0) {
                fn_82975B00(compiler, compiler->other->value, 0x12d5,
                            "internal error: overlapping output writes");
            }
            mask |= bit;
        }
    }
    if ((compiler->options & 0x20) == 0) {
        for (i = 0; i < count; i++) {
            Instr_829935A0 *instr = compiler->instrs[ids[i]];
            if ((instr->flags & 0x2000000) == 0 && ((compiler->regs[instr->reg]->flags & 1) == 0 ||
                                                    instr->index48 == -1 || instr->index54 != -1)) {
                break;
            }
        }
        if (i == count) {
            mask |= 0x200000;
        }
    } else {
        mask |= 0x200000;
    }
    if ((compiler->options & 1) != 0 && compiler->outputs != 0) {
        for (i = 0; i < count; i++) {
            compiler->outputs[compiler->outputBase * 6 + i - 4] = ids[i];
        }
    }
    *outMask = mask;
    return 0;
}
