struct Operand_8299BE18 {
    char padding[0x6f];
    unsigned char color; /* 0x6f */
};

struct Instruction_8299BE18 {
    unsigned int token;
    unsigned int operandCount;
    unsigned int *operands;
    char padding0C[0x18];
    void *texture;        /* 0x24 */
    unsigned int visited; /* 0x28 */
    char padding2C[0x10];
    unsigned int location; /* 0x3c */
};

struct Program_8299BE18 {
    char padding[0xc];
    unsigned int instructionCount; /* 0x0c */
    int unused;
    struct Operand_8299BE18 **operands;
    struct Instruction_8299BE18 **instructions;
    char padding1C[0xe8];
    struct Instruction_8299BE18 *current; /* 0x104 */
};

extern void fn_82975B00(struct Program_8299BE18 *self, unsigned int location, int error, const char *format,
                        ...);
extern int fn_8299BD58(struct Program_8299BE18 *self, struct Instruction_8299BE18 *instruction,
                       unsigned int depth);

int fn_8299BE18(struct Program_8299BE18 *self)
{
    int result = 0;
    unsigned int index;
    if (self->instructionCount > 64) {
        fn_82975B00(self, 0, 0x1194, "program is order of magnitude too large to compile to ps_1_4");
        return 1;
    }
    for (index = 0; index < self->instructionCount; ++index) {
        self->instructions[index]->visited = 0;
    }
    for (index = 0; index < self->instructionCount; ++index) {
        unsigned int operand;
        self->current = self->instructions[index];
        if (self->current->texture != 0) {
            for (operand = 0; operand < self->current->operandCount; ++operand) {
                if (self->operands[self->current->operands[operand]]->color == 1) {
                    fn_82975B00(self, self->current->location, 0x1194,
                                "cannot perform texture load that is in anyway dependent on COLOR registers");
                    result = 1;
                }
            }
        }
        if (fn_8299BD58(self, self->current, 0) == 0) {
            result = 1;
            break;
        }
    }
    return result;
}
