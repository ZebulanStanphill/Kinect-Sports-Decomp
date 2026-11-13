// Placeholder for a node type whose word at 8 packs several fields (bits 7-13
// an opcode, bits 14-16 and 19-21 two 3-bit selectors, bit 27 a flag). Named
// after the address of GetValue, its only member known so far, until the class is
// known.

#ifndef GAME_NODE_82ABE0E8_H
#define GAME_NODE_82ABE0E8_H

struct Node_82ABE0E8 {
    int unk0;
    int unk4;
    unsigned int bits;
    int unkC;

    // Looks an entry up through fn_82ABDD90 (opcode and selectors) and returns
    // its 4-bit value, or 7 when the entry's low two bits are set.
    unsigned int GetValue(void *context);
};

#endif
