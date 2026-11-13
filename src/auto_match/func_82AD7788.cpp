// Marks a node (bit 27 of its packed word) and appends it to a growable pointer
// array. For six opcodes the node's GetValue is checked first: 8 or 9 leaves
// the node alone, anything else sets bit 8 of the owner's flags.
#include "game/Node_82ABE0E8.h"

struct Owner_82AD7788 {
    char pad[0x28];
    unsigned int flags;
};

// Storage of the array: a header followed by the pointers.
struct Block_82AD7788 {
    int unk0;
    int unk4;
    unsigned int count;
    unsigned int capacity;
    Node_82ABE0E8 *items[1];
};

struct Array_82AD7788 {
    unsigned int block; // address of the storage's member at 4, low bit clear
    unsigned int empty; // bit 0 set: no storage
};

extern "C" {
Block_82AD7788 *fn_82AD6090(Array_82AD7788 *array, int count);

void fn_82AD7788(Owner_82AD7788 *owner, Node_82ABE0E8 *node, Array_82AD7788 *array)
{
    bool checked;
    unsigned int opcode;
    Block_82AD7788 *block;
    int value;

    opcode = node->bits >> 7 & 0x7f;
    checked = (opcode == 0x56 || opcode == 0x57 || opcode == 0x59 || opcode == 0x5a || opcode == 0x54 || opcode == 0x55);
    if (checked) {
        value = node->GetValue(owner);
        if (value == 8) {
            return;
        }
        if (value == 9) {
            return;
        }
        owner->flags = owner->flags | 0x100;
    }
    node->bits = node->bits | 0x8000000;
    if ((array->empty & 1) == 0) {
        block = (Block_82AD7788 *)((array->block & 0xfffffffe) - 4);
        if ((block != 0) && (block->count + 1U <= block->capacity)) goto have_room;
    }
    block = fn_82AD6090(array, 1);
have_room:
    {
        Node_82ABE0E8 **slot = block->items + block->count++;
        *slot = node;
    }
}
}
