typedef unsigned char (*ByteFilter_82A75410)(unsigned char value);

typedef struct BitReader_82A75410 {
    char pad00[0x1c];
    const unsigned char *input; /* 0x1C */
    unsigned int remaining;     /* 0x20 */
    unsigned int bits;          /* 0x24 */
    unsigned int bitCount;      /* 0x28 */
    unsigned int tail;          /* 0x2C */
    unsigned int tailBits;      /* 0x30 */
    char pad34[0x20];
    ByteFilter_82A75410 filter; /* 0x54 */
} BitReader_82A75410;

extern unsigned char fn_82BA02A8(unsigned char value);
extern int fn_82A6CF00(BitReader_82A75410 *reader, int flags, unsigned int limit);

int fn_82A75410(BitReader_82A75410 *reader, unsigned int count, unsigned int *out)
{
    unsigned int bitCount = reader->bitCount;
    unsigned int bits = reader->bits;
    unsigned int remaining = reader->remaining;
    const unsigned char *input = reader->input;
    int result = 0;
    unsigned int tailBits = reader->tailBits;
    unsigned int tail = reader->tail;
    int needMore = bitCount < count;

    if (needMore) {
        if (tailBits != 0) {
            unsigned int take = 32 - bitCount;

            if (take >= tailBits) {
                take = tailBits;
            }
            tailBits -= take;
            bits = (bits << take) | (tail >> tailBits);
            tail &= (1 << tailBits) - 1;
            bitCount += take;
        }
        if (reader->filter == fn_82BA02A8) {
            while (bitCount <= 24 && remaining != 0) {
                bits = (bits << 8) | *input;
                bitCount += 8;
                input++;
                remaining--;
            }
        } else {
            while (bitCount <= 24 && remaining != 0) {
                bits = (bits << 8) | reader->filter(*input);
                bitCount += 8;
                input++;
                remaining--;
            }
        }
        reader->bits = bits;
        reader->bitCount = bitCount;
        reader->remaining = remaining;
        reader->input = input;
        reader->tailBits = tailBits;
        reader->tail = tail;
        if (bitCount < count) {
            result = fn_82A6CF00(reader, 1, count);
            if (result < 0) {
                return result;
            }
            if (reader->bitCount < count) {
                count = reader->bitCount;
            }
        }
    }
    *out = (reader->bits >> (short)(reader->bitCount - count)) << (32 - count);
    return result;
}
