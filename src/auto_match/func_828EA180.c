typedef struct BitReader_828E9FF8 {
    unsigned int bitPos;  /* 0x0 */
    unsigned int bytePos; /* 0x4 */
    unsigned char *data;  /* 0x8 */
} BitReader_828E9FF8;

static __forceinline unsigned int ReadBits_828E9FF8(BitReader_828E9FF8 *reader, int bits)
{
    unsigned int value = 0;
    unsigned int shift = 0;

    if (bits == 0) {
        return 0;
    }
    if (reader->bitPos != 0 && reader->bitPos + bits >= 8) {
        shift = 8 - reader->bitPos;
        bits -= shift;
        value = reader->data[reader->bytePos++] >> (unsigned char)reader->bitPos;
        reader->bitPos = 0;
    }
    while (bits >= 8) {
        value |= reader->data[reader->bytePos++] << shift;
        shift += 8;
        bits -= 8;
    }
    if (bits > 0) {
        value |= ((reader->data[reader->bytePos] >> (unsigned char)reader->bitPos) & ~(-1 << bits)) << shift;
        reader->bitPos += bits;
    }
    return value;
}

void fn_828EA180(BitReader_828E9FF8 *reader, unsigned char *out, int count)
{
    for (; count > 0; count--) {
        *out++ = (unsigned char)ReadBits_828E9FF8(reader, 8);
    }
}
