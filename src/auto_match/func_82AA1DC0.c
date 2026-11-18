typedef struct Instr_82AA1DC0 {
    unsigned int srcLow : 4;  /* word 0, bits 31-28 */
    unsigned int mask : 12;   /* word 0, bits 27-16 */
    unsigned int bit15 : 1;   /* word 0, bit 15 */
    unsigned int count : 3;   /* word 0, bits 14-12 */
    unsigned int reg : 12;    /* word 0, bits 11-0 */
    unsigned int pad1 : 16;   /* word 1, bits 31-16 */
    unsigned int opcode : 4;  /* word 1, bits 15-12 */
    unsigned int pad2 : 10;   /* word 1, bits 11-2 */
    unsigned int srcHigh : 2; /* word 1, bits 1-0 */
} Instr_82AA1DC0;

typedef struct Assembler_82AA1DC0 {
    __int64 written; /* 0x0 */
    void *program;   /* 0x8 */
} Assembler_82AA1DC0;

extern int fn_82636148(void *program, unsigned int reg, void *out);
extern unsigned char fn_82AA0258(Assembler_82AA1DC0 *self, unsigned int a, unsigned int b, unsigned int c,
                                 int value);
extern void fn_82AA1AD8(Assembler_82AA1DC0 *self, unsigned int index);

void fn_82AA1DC0(Assembler_82AA1DC0 *self, Instr_82AA1DC0 *instr, unsigned char skip, int unused3,
                 int unused4, unsigned int index)
{
    unsigned int i;
    unsigned int count;
    unsigned int reg;
    unsigned int mask;
    unsigned int src;
    int value;
    char scratch[4];

    if (skip != 0) {
        return;
    }
    if (((1 << instr->opcode) & 0x607eu) == 0) {
        return;
    }
    count = instr->count;
    reg = instr->reg;
    mask = instr->mask;
    src = (instr->srcHigh << 4) | instr->srcLow;
    self->written = 0;
    for (i = 0; i < count; i++, reg++) {
        unsigned int lo;
        unsigned int hi;
        unsigned int bit;

        value = fn_82636148(self->program, reg, scratch);
        lo = mask & 1;
        hi = (mask >> 1) & 1;
        bit = src & 1;
        src >>= 1;
        mask >>= 2;
        if (fn_82AA0258(self, lo, hi, bit, value)) {
            instr->mask |= 2 << (i * 2);
        }
    }
    if (self->written != 0) {
        fn_82AA1AD8(self, index + 1);
    }
}
