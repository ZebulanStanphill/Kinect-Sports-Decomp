typedef struct BitSet_8300CC80 {
    char pad0[0x14];
    unsigned short bitCount;
    char pad16[0x24 - 0x16];
    unsigned char *bits;
} BitSet_8300CC80;

void *memset(void *dst, int value, unsigned int size);

void fn_8300CC80(BitSet_8300CC80 *self, unsigned int bitCount)
{
    memset(self->bits, 0, (bitCount + 7) >> 3);
    self->bitCount = (unsigned short)bitCount;
}
