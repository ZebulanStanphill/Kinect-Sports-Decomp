typedef union Instruction_82B175C8 {
    unsigned int word;

    struct {
        unsigned int pad0 : 1;
        unsigned int marked : 1;
        unsigned int pad2 : 8;
        unsigned int first : 3;
        unsigned int pad13 : 2;
        unsigned int second : 3;
        unsigned int opcode : 7;
        unsigned int pad25 : 7;
    } fields;
} Instruction_82B175C8;

typedef struct Record_82B175C8 {
    unsigned int unknown; /* 0x0 */
    unsigned int flags;   /* 0x4 */
    char pad8[0x20];
} Record_82B175C8;

typedef struct Context_82B175C8 {
    char pad0[0xc];
    Record_82B175C8 *records; /* 0xc */
} Context_82B175C8;

extern unsigned int fn_82ABDD90(Context_82B175C8 *, unsigned int, unsigned int, unsigned int);
extern void fn_82AA66A8(Context_82B175C8 *, int);

unsigned char fn_82B175C8(Context_82B175C8 *self, unsigned int *previous, Instruction_82B175C8 *instruction,
                          unsigned int mode)
{
    unsigned int opcode = instruction[2].fields.opcode;
    if (opcode == 0x78) {
        unsigned char wide = (previous[2] & 0x3f80) == 0x3000 && (previous[2] & 0x380000) > 0x80000;
        Instruction_82B175C8 *header = (Instruction_82B175C8 *)previous[11 + ((unsigned int)wide > 0)];
        if ((unsigned char)header->fields.marked != 0) {
            return 1;
        }
    }
    if (instruction[2].fields.opcode == 0x7c) {
        char *base = (char *)instruction - 8;
        unsigned int record =
            *(unsigned int *)(fn_82ABDD90(self, instruction[2].fields.opcode, instruction[2].fields.first,
                                          instruction[2].fields.second) +
                              base) &
            0x7fff;
        if ((self->records[record].flags & 0x70) == 0x30) {
            return 1;
        }
    }
    if (mode >= 1) {
        if (mode != 1) {
            fn_82AA66A8(self, 0x12c0);
        }
        return opcode == 0x76;
    }
    return 0;
}
