// Walks a list of uses and reports whether one of them belongs to a node with
// opcode 0x5a that either has its flag bit set or whose GetValue is 3 or 4; a
// GetValue of 8 or 9 ends the search with 0.
#include "game/Node_82ABE0E8.h"

struct NodeBits_82B189C0 {
    unsigned int high : 4;
    unsigned int flag : 1;
    unsigned int mid : 13;
    unsigned int opcode : 7;
    unsigned int low : 7;
};

struct Use_82B189C0 {
    char pad[0x20];
    unsigned int owner;   // address of the owning node's member at 0x28, low bit clear
    unsigned int noOwner; // bit 0 set: no owner
    char pad28[0x18];
    Use_82B189C0 *next;
};

extern "C" int fn_82B189C0(void *context, Use_82B189C0 *list)
{
    Use_82B189C0 *use;
    Node_82ABE0E8 *node;
    int value;

    for (use = list->next; use != 0; use = use->next) {
        if ((use->noOwner & 1) != 0) {
            node = 0;
        } else {
            node = (Node_82ABE0E8 *)((use->owner & 0xfffffffe) - 0x28);
        }
        if ((node->bits & 0x3f80) == 0x2d00) {
            if ((unsigned char)((NodeBits_82B189C0 *)&node->bits)->flag) {
                return 1;
            }
            value = node->GetValue(context);
            if (value == 3 || value == 4) {
                return 1;
            }
            if (value == 8 || value == 9) {
                return 0;
            }
        }
    }
    return 0;
}
