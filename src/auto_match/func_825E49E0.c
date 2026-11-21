typedef struct BitTable_825E49E0 {
    int base;            /* 0x00 */
    int unk04[6];        /* 0x04 */
    int bitsPerEntry;    /* 0x1c */
    int unk20[2];        /* 0x20 */
    unsigned char *data; /* 0x28 */
} BitTable_825E49E0;

unsigned int fn_825E49E0(BitTable_825E49E0 *table, unsigned short index)
{
    int bits;
    int bitPos;
    int byteOffset;
    int shift;
    unsigned int mask;
    unsigned int bit;
    int i;
    unsigned int value;
    unsigned char *src;
    unsigned char *dst;

    bits = table->bitsPerEntry;
    bit = 1;
    mask = 0;
    i = 0;
    bitPos = (index - table->base) * bits;
    byteOffset = bitPos / 8;
    shift = bitPos % 8;
    if (0 < bits) {
        do {
            i++;
            mask |= bit;
            bit <<= 1;
        } while (i < bits);
    }
    value = 0;
    src = table->data + byteOffset;
    dst = (unsigned char *)&value;
    dst[0] = src[3];
    dst[1] = src[2];
    dst[2] = src[1];
    dst[3] = src[0];
    return ((mask << shift) & value) >> shift;
}
