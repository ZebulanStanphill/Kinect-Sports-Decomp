typedef struct Var_829020B8 {
    char pad0[4];
    int reg; /* 0x04 */
    char pad8[0x5c];
    int slot; /* 0x64 */
    char pad68[8];
    unsigned int index; /* 0x70 */
} Var_829020B8;

typedef struct Reg_829020B8 {
    char pad0[4];
    unsigned int flags; /* 0x04 */
} Reg_829020B8;

typedef struct Program_829020B8 {
    char pad0[0x10];
    Reg_829020B8 **regs; /* 0x10 */
    Var_829020B8 **vars; /* 0x14 */
} Program_829020B8;

typedef struct Node_829020B8 Node_829020B8;

struct Node_829020B8 {
    char pad0[8];
    char *data;          /* 0x08 */
    Node_829020B8 *next; /* 0x0C */
};

typedef struct List_829020B8 {
    char pad0[0x20];
    Node_829020B8 *head; /* 0x20 */
} List_829020B8;

typedef struct Block_829020B8 {
    char pad0[0x10];
    int start;          /* 0x10 */
    unsigned int count; /* 0x14 */
    char pad18[0x20];
    List_829020B8 *list; /* 0x38 */
    char pad3c[0x10];
    unsigned int maxIndex; /* 0x4C */
    char **byIndex;        /* 0x50 */
    char **bySlot;         /* 0x54 */
} Block_829020B8;

typedef struct Linker_829020B8 {
    char pad0[8];
    Program_829020B8 *program; /* 0x08 */
    char padc[0xc];
    int *varMap; /* 0x18 */
} Linker_829020B8;

extern void *fn_829302D0(int size, int alignment);
extern void *memset(void *dst, int value, unsigned int size);

int fn_829020B8(Linker_829020B8 *self, Block_829020B8 *block)
{
    Var_829020B8 *var;
    Node_829020B8 *node;
    unsigned int index;
    unsigned int i;

    if (block->count == 0 || block->list == 0 || block->byIndex != 0) {
        return 0;
    }
    block->maxIndex = 0;
    for (i = 0; i < block->count; i++) {
        index = self->program->vars[self->varMap[block->start + i]]->index + 1;
        if (block->maxIndex < index) {
            block->maxIndex = index;
        }
    }
    block->byIndex = (char **)fn_829302D0(block->maxIndex * 4, 0x10);
    if (block->byIndex == 0) {
        return 0x8007000e;
    }
    block->bySlot = (char **)fn_829302D0(block->count * 4, 0x10);
    if (block->bySlot == 0) {
        return 0x8007000e;
    }
    memset(block->byIndex, 0, block->maxIndex * 4);
    memset(block->bySlot, 0, block->count * 4);
    node = block->list->head;
    for (i = 0; i < block->count && node != 0; i++) {
        var = self->program->vars[self->varMap[block->start + i]];
        if ((self->program->regs[var->reg]->flags & 0x80) == 0) {
            block->byIndex[var->index] = node->data + 0x10;
            block->bySlot[var->slot] = node->data + 0x10;
        }
        node = node->next;
    }
    return 0;
}
