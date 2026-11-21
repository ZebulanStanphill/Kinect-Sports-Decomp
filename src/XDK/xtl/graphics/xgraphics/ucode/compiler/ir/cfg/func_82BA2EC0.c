typedef struct Inst_82BA2EC0 Inst_82BA2EC0;

struct Inst_82BA2EC0 {
    char pad0[0x8];
    Inst_82BA2EC0 *next; /* 0x08 */
    char padc[0x2c];
    int operand; /* 0x38 */
    char pad3c[0x14];
    int opcodeKind; /* 0x50 */
    char pad54[0x90];
    unsigned int flags; /* 0xe4 */
};

typedef struct BlockList_82BA2EC0 {
    int pad0;
    unsigned int count; /* 0x04 */
    void **items;       /* 0x08 */
} BlockList_82BA2EC0;

typedef struct Block_82BA2EC0 {
    char pad0[0x1c];
    Inst_82BA2EC0 *insts; /* 0x1c */
    char pad20[0x1c];
    BlockList_82BA2EC0 *predecessors; /* 0x3c */
} Block_82BA2EC0;

typedef struct Compiler_82BA2EC0 {
    char pad0[0xc];
    void *ctx; /* 0x0c */
    char pad10[0x64];
    Inst_82BA2EC0 *exitMove; /* 0x74 */
    char pad78[0x30];
    Block_82BA2EC0 *exitBlock; /* 0xa8 */
} Compiler_82BA2EC0;

extern void fn_82AB15D0(int level, const char *format, ...);
extern int fn_82BC5AC0(Block_82BA2EC0 *block);
extern Inst_82BA2EC0 *fn_82BC24F0(int op, void *ctx);
extern void fn_82BC34D8(Inst_82BA2EC0 *inst, Compiler_82BA2EC0 *self, int index, float x, float y, float z,
                        float w);
extern void fn_82BA0C40(Compiler_82BA2EC0 *self, Inst_82BA2EC0 *inst);
extern void fn_82BC5538(void *block, Inst_82BA2EC0 *inst);
extern unsigned char fn_82BC2580(Inst_82BA2EC0 *inst);

static __forceinline unsigned char GetItem(BlockList_82BA2EC0 *list, unsigned int index, void **out)
{
    if (index + 1 > list->count) {
        return 0;
    }
    *out = list->items[index];
    return 1;
}

void fn_82BA2EC0(Compiler_82BA2EC0 *self)
{
    Inst_82BA2EC0 *inst;

    if (self->exitMove == 0) {
        void *predecessor;
        void *item;
        unsigned int i;
        Inst_82BA2EC0 *mov;

        if (fn_82BC5AC0(self->exitBlock) != 1) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "exitBlock->NumPredecessors() == 1",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode"
                        "\\compiler\\ir\\cfg.cpp",
                        0xa2c);
        }
        item = 0;
        for (i = 0; GetItem(self->exitBlock->predecessors, i, &item); i++) {
            predecessor = item;
        }
        mov = fn_82BC24F0(0x31, self->ctx);
        mov->opcodeKind = 5;
        mov->operand = 0;
        fn_82BC34D8(mov, self, 1, 0.0f, 0.0f, 0.0f, 0.0f);
        fn_82BA0C40(self, mov);
        fn_82BC5538(predecessor, mov);
        if (!fn_82BC2580(mov)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "mov->Validate()",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode"
                        "\\compiler\\ir\\cfg.cpp",
                        0xa38);
        }
    }
    for (inst = self->exitBlock->insts; (int)inst->next != 0; inst = inst->next) {
        if ((inst->flags & 1) != 0 && inst->opcodeKind == 5) {
            self->exitMove = inst;
            break;
        }
    }
}
