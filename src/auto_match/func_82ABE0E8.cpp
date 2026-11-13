#include "game/Node_82ABE0E8.h"

struct Entry_82ABE0E8 {
    int unk0;
    int unk4;
    unsigned int value;
};

// Returns the offset of the entry for an opcode and two selectors, relative to
// the node before this one.
extern "C" int fn_82ABDD90(void *context, unsigned int opcode, unsigned int selectA, unsigned int selectB);

unsigned int Node_82ABE0E8::GetValue(void *context)
{
    int offset = fn_82ABDD90(context, bits >> 7 & 0x7f, bits >> 0x13 & 7, bits >> 0xe & 7);
    Entry_82ABE0E8 *entry = (Entry_82ABE0E8 *)((char *)(this - 1) + offset);
    if (entry->value & 3) {
        return 7;
    }
    return entry->value >> 2 & 0xf;
}
