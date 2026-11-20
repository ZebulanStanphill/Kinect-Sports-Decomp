extern int fn_82AB15D0(int level, const char *format, ...);

#define ASSERT_82BB31A0(cond, text, line)                                                                    \
    if (!(cond)) {                                                                                           \
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", text,                                                 \
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode"              \
                    "\\compiler\\ir\\ssa.cpp",                                                               \
                    line);                                                                                   \
    }

typedef struct Values_82BB31A0 {
    int unknown0;
    int **values; /* 0x4 */
} Values_82BB31A0;

typedef struct Register_82BB31A0 {
    char pad0[0x2c];
    Values_82BB31A0 *values; /* 0x2c */
} Register_82BB31A0;

typedef struct Instr_82BB31A0 Instr_82BB31A0;

typedef struct InstrVtbl_82BB31A0 {
    char pad0[0x4c];
    unsigned char (*HasSource)(Instr_82BB31A0 *self);                               /* 0x4c */
    unsigned int (*GetComponent)(Instr_82BB31A0 *self, int operand, int component); /* 0x50 */
} InstrVtbl_82BB31A0;

struct Instr_82BB31A0 {
    InstrVtbl_82BB31A0 *vt; /* 0x00 */
    char pad4[0x10];
    int sourceIndex;                /* 0x14 */
    int opcode;                     /* 0x18 */
    Register_82BB31A0 *operands[2]; /* 0x1c */
    char pad24[0xc0];
    unsigned int flags; /* 0xe4 */
};

typedef struct Context_82BB31A0 {
    char pad0[0x5f8];
    int nextValue; /* 0x5f8 */
} Context_82BB31A0;

typedef struct Resolver_82BB31A0 {
    int values[4];         /* 0x000 */
    Instr_82BB31A0 *instr; /* 0x010 */
    char pad14[0xf0];
    Context_82BB31A0 *context; /* 0x104 */
} Resolver_82BB31A0;

void fn_82BB31A0(Resolver_82BB31A0 *self)
{
    int *first;
    int i;

    if (self->instr->operands[0]->values->values != 0) {
        Values_82BB31A0 *values;
        values = self->instr->operands[0]->values;
        first = *values->values;
    } else {
        first = 0;
    }
    for (i = 0; i < 4; i++) {
        switch (self->instr->vt->GetComponent(self->instr, 0, i)) {
        case 1:
            if ((unsigned char)((self->instr->flags >> 9) & 1)) {
                self->values[i] =
                    (*self->instr->operands[self->instr->sourceIndex]->values->values)[i];
            } else if (first != 0 && self->instr->opcode != 0x89) {
                self->values[i] = first[i];
            } else {
                ASSERT_82BB31A0(self->instr->opcode == 0x89, "inst->GetOpcode() == R400Tables::IR_PHI_NODE",
                                0x367);
                self->values[i] = 3;
            }
            break;
        case 2:
            self->values[i] = 2;
            break;
        case 3:
            self->values[i] = 1;
            break;
        case 0:
        case 4:
        case 5:
        case 6:
        case 7:
            if (self->instr->vt->HasSource(self->instr)) {
                unsigned int index = self->instr->vt->GetComponent(self->instr, 1, i);
                self->values[i] = (*self->instr->operands[1]->values->values)[index];
            } else {
                self->values[i] = ++self->context->nextValue;
            }
            break;
        }
    }
}
