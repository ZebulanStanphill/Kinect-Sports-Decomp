typedef struct Instr_82B0FD38 {
    char pad00[0x8];
    unsigned int pad08 : 8;
    unsigned int allocated : 1;
    unsigned int pad09 : 9;
    unsigned int opcode : 7;
    unsigned int pad19 : 2;
    unsigned int writeMask : 4;
    unsigned int pad1f : 1;
    char pad0c[0x4];
    unsigned int pad10 : 13;
    unsigned int count : 3;
    unsigned int base : 16;
} Instr_82B0FD38;

typedef struct Assembler_82B0FD38 {
    char pad00[0x74];
    unsigned int lastRegister; /* 0x74 */
} Assembler_82B0FD38;

extern int fn_82AA66A8(void *self, int error);

static __forceinline unsigned char IsVectorOp(unsigned int opcode)
{
    return opcode >= 0x20 && opcode <= 0x52;
}

static __forceinline unsigned int HighestBit(unsigned int mask)
{
    if (mask != 0) {
        return 32 - _CountLeadingZeros(mask);
    }
    return 0;
}

void fn_82B0FD38(Assembler_82B0FD38 *self, Instr_82B0FD38 *instr)
{
    unsigned int base;
    unsigned int end;

    switch ((int)instr->opcode) {
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x6c:
    case 0x6d:
        if (instr->writeMask > 1) {
            fn_82AA66A8(self, 0x12c0);
            return;
        }
        instr->count = 1;
        break;
    case 0x60:
    case 0x61:
    case 0x6e:
        instr->count = 4;
        break;
    case 0x71:
    case 0x7c:
        fn_82AA66A8(self, 0x12c0);
        return;
    default:
        if (IsVectorOp(instr->opcode)) {
            instr->count = 4;
        } else {
            instr->count = HighestBit(instr->writeMask);
        }
        break;
    }
    base = self->lastRegister + 1;
    end = instr->count + base;
    if (end > 0xffff) {
        fn_82AA66A8(self, 0xdc8);
        return;
    }
    self->lastRegister = end - 1;
    instr->allocated = 1;
    instr->base = base;
}
