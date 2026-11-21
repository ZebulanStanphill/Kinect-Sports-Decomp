/* Writes a move instruction for a shader source operand: the opcode word with the negate field,
   the source swizzle remapped through lbl_83160520 unless it is the identity, then two constant
   words. */
typedef union Word_82AAC9C0 {
    unsigned int value;

    struct {
        unsigned int pad : 13;
        unsigned int negate : 3;
        unsigned int opcode : 16;
    } bits;
} Word_82AAC9C0;

extern unsigned int lbl_83160520[6];
extern void fn_82A29A38(void);

void fn_82AAC9C0(unsigned int source, int opcode, unsigned int **destination)
{
    unsigned int *output;
    Word_82AAC9C0 word;
    unsigned int sourceSwizzle;
    unsigned int shifted;
    unsigned int bits;

    output = *destination;
    if (opcode != 0x34 && opcode != 7) {
        fn_82A29A38();
    }
    word.value = opcode & 0xffff;
    if ((source & 0xf000000) == 0xd000000) {
        word.bits.negate = 1;
    } else {
        word.bits.negate = 0;
    }
    *output++ = word.value;
    sourceSwizzle = source & 0xff0000;
    if (sourceSwizzle != 0xe40000) {
        unsigned int wComponent;

        shifted = sourceSwizzle >> 16;
        bits = lbl_83160520[shifted & 3];
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 4;
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 8;
        shifted >>= 2;
        wComponent = lbl_83160520[shifted & 3];
        *output++ = 0x440020;
        bits |= wComponent << 12;
        *output++ = bits;
    } else {
        *output++ = 0x40020;
    }
    *output++ = 0x410000;
    *output++ = 0x4444;
    *destination = output;
}
