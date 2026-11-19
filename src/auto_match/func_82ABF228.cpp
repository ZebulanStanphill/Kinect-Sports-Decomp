#include "game/Node_82ABE0E8.h"

extern "C" {
int strncmp(const char *a, const char *b, unsigned int n);
}

struct Link_82ABF228 {
    unsigned int prev; /* 0x0 */
    unsigned int next; /* 0x4: tagged, bit 0 ends the list */
};

struct Block_82ABF228 : Link_82ABF228 {
    char pad8[0x18 - 0x8];
    unsigned int nodes; /* 0x18: tagged link to the first node's link field */
    unsigned int flags; /* 0x1c */
};

struct Instruction_82ABF228 : Node_82ABE0E8 {
    char pad10[0x24 - 0x10];
    unsigned int next; /* 0x24 */
};

struct Shader_82ABF228 {
    Link_82ABF228 blocks; /* 0x0 */
};

static __forceinline Block_82ABF228 *First(const Link_82ABF228 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Block_82ABF228 *)list->next;
}

static __forceinline Instruction_82ABF228 *FromLink(unsigned int link)
{
    return (Instruction_82ABF228 *)((link & ~1u) - 0x28);
}

extern "C" bool fn_82ABF228(Shader_82ABF228 *shader, const char *message)
{
    char predicated[] = "Error: Predicated Control Flow & Predicated ALU don't match correctly. Shader's "
                        "behavior will change based on other vertices/pixels in the thread, based on ";
    char uninitialized[] = "Uninitialized register trace exceeds ";
    unsigned int link;
    unsigned int opcode;
    int value;
    bool checked;
    Block_82ABF228 *block;
    Block_82ABF228 *nextBlock;
    Instruction_82ABF228 *node;

    if (strncmp(message, predicated, sizeof(predicated) - 1) == 0 ||
        strncmp(message, uninitialized, sizeof(uninitialized) - 1) == 0) {
        for (block = First(&shader->blocks); block != 0; block = nextBlock) {
            if ((block->flags & 1) == 0) {
                for (node = FromLink(block->nodes); node != 0; node = FromLink(link)) {
                    opcode = node->bits >> 7 & 0x7f;
                    checked = opcode == 0x56 || opcode == 0x57 || opcode == 0x59 || opcode == 0x5a ||
                              opcode == 0x54 || opcode == 0x55;
                    if (checked) {
                        value = node->GetValue(shader);
                        if (value == 8 || value == 9) {
                            return true;
                        }
                    }
                    link = ((Instruction_82ABF228 *)((unsigned int)node & ~1u))->next;
                    if (link & 1) {
                        break;
                    }
                }
            }
            link = ((Block_82ABF228 *)((unsigned int)block & ~1u))->next;
            if (link & 1) {
                break;
            }
            nextBlock = (Block_82ABF228 *)link;
        }
    }
    {
        char deadCode[] = "Warning: Dead code ";

        return 0 == strncmp(message, deadCode, sizeof(deadCode) - 1);
    }
}
