typedef struct Info_82B1A198 {
    char pad[0x28];
    unsigned int pad0 : 17;
    unsigned int flag : 1;
    unsigned int pad1 : 14;
} Info_82B1A198;

typedef struct Owner_82B1A198 {
    char pad[0x94];
    Info_82B1A198 *info;
} Owner_82B1A198;

typedef struct PageHeader_82B1A198 {
    Owner_82B1A198 *owner;
} PageHeader_82B1A198;

typedef struct Register_82B1A198 {
    char pad0[0x8];
    unsigned int pad8 : 18;
    unsigned int file : 7;
    unsigned int padx : 7;
    char padc[0x8];
    unsigned int pad14 : 22;
    unsigned int types : 8;
    unsigned int pad1 : 2;
} Register_82B1A198;

typedef struct Operand_82B1A198 {
    unsigned int flags; /* component in bits 0-4, swizzle in bits 5-6 */
    int pad4[2];
    Register_82B1A198 *reg; /* 0x0c */
} Operand_82B1A198;

typedef struct Constant_82B1A198 {
    void *vt; /* 0x00 */
    int kind; /* 0x04 */
    int pad8[2];
    int type; /* 0x10 */
    int pad14;

    union {
        int i;
        double d;
    } value; /* 0x18 */

    char pad20[0x10];
} Constant_82B1A198;

typedef struct Temp_82B1A198 {
    void *vt;
    int kind;
    int a;
    int b;
    char pad10[0x20];
} Temp_82B1A198;

typedef struct Slot_82B1A198 {
    int pad0;
    int kind; /* 0x04 */
} Slot_82B1A198;

typedef struct Node_82B1A198 {
    char pad0[0xc];
    Slot_82B1A198 *slot; /* 0x0c */
} Node_82B1A198;

typedef struct Use_82B1A198 {
    int pad0[2];
    int *target; /* 0x08 */
    int *next;   /* 0x0c */
} Use_82B1A198;

typedef struct List_82B1A198 List_82B1A198;

typedef struct ListVtbl_82B1A198 {
    void *slot0;
    Use_82B1A198 *(*First)(List_82B1A198 *self); /* 0x04 */
} ListVtbl_82B1A198;

struct List_82B1A198 {
    ListVtbl_82B1A198 *vt;
};

typedef struct Instruction_82B1A198 {
    char pad0[0x70];
    int *uses; /* 0x70 */
} Instruction_82B1A198;

extern int *fn_82B455A8(void *context, int *object);
extern int *fn_82B455D0(void *context, int *object);
extern void fn_82B8EB40(void *context, Operand_82B1A198 *operand, Register_82B1A198 **reg,
                        unsigned int *swizzle, unsigned int *component);
extern Constant_82B1A198 *fn_82AC6560(void *context, unsigned int size, unsigned int tag);
extern void fn_82930918(Temp_82B1A198 *temp);
extern double fn_82B80EF8(Register_82B1A198 *reg, unsigned int index, unsigned int component);
extern void fn_82AD20C0(void *head, Operand_82B1A198 *node, void *allocator);
__declspec(noreturn) extern void fn_82AA66A8(void *context, int code, ...);

static __forceinline unsigned int GetType_82B1A198(Register_82B1A198 *reg, unsigned int index)
{
    if (!(unsigned char)!((PageHeader_82B1A198 *)((unsigned int)reg & 0xfffff000))->owner->info->flag) {
        return 0;
    }
    return (reg->types >> (index * 2)) & 3;
}

int fn_82B1A198(void *context, void *list, Instruction_82B1A198 **operands, int **out)
{
    List_82B1A198 *uses;
    Use_82B1A198 *first;
    Use_82B1A198 *use;
    Node_82B1A198 *node;
    Operand_82B1A198 *operand;
    Constant_82B1A198 *constant;
    Temp_82B1A198 temp;
    Register_82B1A198 *reg;
    unsigned int component;
    unsigned int swizzle;
    unsigned int resolved;
    unsigned int flags;
    Operand_82B1A198 **next;
    double value;

    uses = (List_82B1A198 *)fn_82B455A8(context, operands[0]->uses);
    first = uses->vt->First(uses);
    use = first;
    if (use != 0) {
        next = (Operand_82B1A198 **)&operands[1];
        do {
            node = (Node_82B1A198 *)fn_82B455A8(context, use->target);
            if (node->slot != 0 && node->slot->kind != 3) {
                operand = *++next;
                reg = operand->reg;
                flags = operand->flags;
                component = flags & 0x1f;
                swizzle = (flags >> 5) & 3;
                if (reg->file != 0x7d) {
                    fn_82B8EB40(context, operand, &reg, &resolved, &component);
                    if (reg->file != 0x7d) {
                        return 0xdd8;
                    }
                    swizzle = resolved & 3;
                }
                constant = fn_82AC6560(context, 0x30, 0x11);
                fn_82930918(&temp);
                constant->vt = temp.vt;
                value = fn_82B80EF8(reg, swizzle, component);
                constant->kind = 3;
                switch (GetType_82B1A198(reg, swizzle)) {
                case 0:
                    constant->value.d = (float)value;
                    constant->type = 5;
                    break;
                case 1:
                    constant->type = 3;
                    constant->value.i = (int)value;
                    break;
                case 2:
                    constant->value.i = (unsigned int)value;
                    constant->type = 2;
                    break;
                default:
                    fn_82AA66A8(context, 0x12c0);
                }
                node->slot = (Slot_82B1A198 *)constant;
                fn_82AD20C0(list, operand, context);
            }
            use = (Use_82B1A198 *)fn_82B455D0(context, use->next);
        } while (use != 0);
    }
    *out = (int *)first;
    return 0;
}
