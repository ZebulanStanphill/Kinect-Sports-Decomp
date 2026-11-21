typedef struct Value_8296C4F8 {
    char pad0[0x8];
    int definition; /* 0x08 */
    char padc[0x34];
    unsigned int mask; /* 0x40 */
    char pad44[0x4];
    int reg; /* 0x48 */
} Value_8296C4F8;

typedef struct Register_8296C4F8 {
    char pad0[0x24];
    unsigned int slot; /* 0x24 */
    unsigned int used; /* 0x28 */
} Register_8296C4F8;

typedef struct Program_8296C4F8 {
    char pad0[0x14];
    Value_8296C4F8 **values;       /* 0x14 */
    Register_8296C4F8 **registers; /* 0x18 */
} Program_8296C4F8;

typedef struct Instruction_8296C4F8 {
    unsigned int token; /* 0x00: opcode in the top 12 bits, width in the low 20 */
    unsigned int count; /* 0x04 */
    int *destinations;  /* 0x08 */
    int pad0c;
    int *sources; /* 0x10 */
} Instruction_8296C4F8;

int fn_8296C4F8(Program_8296C4F8 *program, Instruction_8296C4F8 *instruction)
{
    unsigned int token = instruction->token;
    unsigned int width;
    unsigned int rows;
    unsigned int i;
    unsigned int row;

    if ((token & 0xfff00000) == 0)
        return 0;
    width = token & 0xfffff;
    rows = instruction->count / width;
    for (row = 0; row < rows; row++) {
        for (i = 0; i < width; i++) {
            Value_8296C4F8 *value = program->values[instruction->destinations[row * width + i]];

            if (value->reg != -1 && value->definition == -1) {
                Register_8296C4F8 *reg = program->registers[value->reg];

                if ((instruction->token & 0xfff00000) == 0x11300000) {
                    value->mask = program->values[instruction->sources[i]]->mask;
                } else {
                    value->mask |= 1 << reg->slot;
                    reg->used = 1;
                }
            }
        }
        for (i = 0; i < width; i++) {
            Value_8296C4F8 *value = program->values[instruction->destinations[row * width + i]];

            if (value->reg != -1 && value->definition == -1) {
                Register_8296C4F8 *reg = program->registers[value->reg];

                if (reg->used != 0) {
                    reg->used = 0;
                    reg->slot = (reg->slot + 1) & 0x1f;
                }
            }
        }
    }
    return 0;
}
