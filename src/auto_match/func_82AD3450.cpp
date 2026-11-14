#include "game/Node_82ABE0E8.h"

struct Block_82AD3450 {
    char pad[0x30];
    unsigned int flags;
    char pad34[0x1c];
    Block_82AD3450 *next;
};

struct Func_82AD3450 {
    char pad[0x70];
    Block_82AD3450 *current;
};

struct Arg_82AD3450 {
    char pad[0x1c];
    Func_82AD3450 *func;
};

static __forceinline unsigned char IsSkipped(Block_82AD3450 *b)
{
    return (b->flags >> 22) & 1;
}

extern "C" {
Node_82ABE0E8 *fn_82AD2020(void *context, Block_82AD3450 *block);

int fn_82AD3450(void *context, Arg_82AD3450 *arg)
{
    Func_82AD3450 *func = arg->func;
    Block_82AD3450 *b = func->current;
    Node_82ABE0E8 *node;
    if (IsSkipped(b)) {
        do {
            for (b = b->next; b != 0; b = b->next) {
                if ((b->flags & 0x400000) == 0)
                    break;
            }
        } while (IsSkipped(b));
        func->current = b;
    }
    node = fn_82AD2020(context, func->current);
    if (node == 0)
        return 1;
    return node->GetValue(context) != 1;
}
}
