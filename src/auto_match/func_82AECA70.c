typedef struct Link_82AECA70 {
    unsigned int prev;
    unsigned int tag;
    unsigned int val;
} Link_82AECA70;

typedef struct Operand_82AECA70 {
    unsigned int unknown28 : 4;
    unsigned int kind : 3;
    unsigned int unknown13 : 12;
    unsigned int swizzle : 8;
    unsigned int reg : 5;
    int unknown4;
    int unknown8;
    int type; /* 0xc */
} Operand_82AECA70;

typedef struct Instruction_82AECA70 {
    char unknown00[8];
    unsigned int unknown17 : 15; /* 0x08 */
    unsigned int count : 3;
    unsigned int unknown6 : 8;
    unsigned int noTemp : 1;
    unsigned int writeMask : 4;
    unsigned int unknown0 : 1;
    char unknown0C[0x10];
    void *block; /* 0x1c */
    char unknown20[0xc];
    Operand_82AECA70 *sources[2]; /* 0x2c */
} Instruction_82AECA70;

typedef struct Context_82AECA70 {
    char unknown00[0x2c];
    unsigned int unknown8 : 24; /* 0x2c */
    unsigned int byCount : 1;
    unsigned int unknown0 : 7;
} Context_82AECA70;

extern Operand_82AECA70 *fn_82AD1270(Operand_82AECA70 *operand, unsigned int reg);
extern Operand_82AECA70 *fn_82AD17B0(Context_82AECA70 *context, int type);
extern Operand_82AECA70 *fn_82AD1978(Instruction_82AECA70 *instruction, Operand_82AECA70 *operand);
extern void fn_82AEAB00(Context_82AECA70 *context, Instruction_82AECA70 *created,
                        Instruction_82AECA70 *instruction, unsigned int temp, int index, int component);
extern int fn_82B168F8(Instruction_82AECA70 *instruction, unsigned int component);
extern int fn_82B16998(Instruction_82AECA70 *instruction, unsigned int index, int mask);
extern Instruction_82AECA70 *fn_82B841E8(Context_82AECA70 *context, void *block, unsigned int *list,
                                         int opcode, int destinations, int sources);
extern unsigned int fn_82B84350(Context_82AECA70 *context, void *block, int unknown, unsigned int count);

static __forceinline void linkInsert(unsigned int *h, unsigned int r)
{
    Link_82AECA70 *l = (Link_82AECA70 *)((r & 0xfffffffe) + 0x24);

    l->prev = *h;
    *(unsigned int *)(*h & 0xfffffffe) = (unsigned int)l - 0x24;
    l->tag = ((unsigned int)h - 0x24) | 1;
    *h = (unsigned int)&l->tag;
}

static __forceinline unsigned char IsSingleBit_82AECA70(unsigned int mask)
{
    return mask != 0 && mask - (mask & ~(mask - 1)) == 0;
}

void fn_82AECA70(Context_82AECA70 *context, Instruction_82AECA70 *instruction, int opcode, unsigned int *list)
{
    Operand_82AECA70 *first = instruction->sources[0];
    Operand_82AECA70 *second = instruction->sources[1];
    void *block = instruction->block;
    int type = first->type;
    unsigned int mask;
    unsigned int temp;
    unsigned int low;
    int index;
    int component;
    Instruction_82AECA70 *created;
    Operand_82AECA70 *operand;
    unsigned int reg;
    unsigned int firstSelect;
    unsigned int secondSelect;

    if ((unsigned char)context->byCount) {
        mask = (1 << instruction->count) - 1;
    } else {
        mask = instruction->writeMask;
    }
    temp = 0;
    if (!IsSingleBit_82AECA70(mask) && !(unsigned char)instruction->noTemp) {
        temp = fn_82B84350(context, block, 0, instruction->count);
    }
    for (index = 0; mask != 0; index++) {
        low = mask & ~(mask - 1);
        mask -= low;
        component = 31 - _CountLeadingZeros(low);
        created = fn_82B841E8(context, block, list, opcode, 1, 1);
        reg = first->reg;
        secondSelect = (second->swizzle >> (component * 2)) & 3;
        firstSelect = (first->swizzle >> (component * 2)) & 3;
        operand = fn_82AD17B0(context, type);
        operand->kind = 2;
        fn_82AD1270(operand, reg);
        operand->swizzle = (secondSelect << 2) | 0xe0 | firstSelect;
        created->sources[0] = fn_82AD1978(created, operand);
        fn_82B16998(created, 0, fn_82B168F8(instruction, component));
        fn_82AEAB00(context, created, instruction, temp, index, component);
    }
    if (temp != 0) {
        linkInsert(list, temp);
    }
}
