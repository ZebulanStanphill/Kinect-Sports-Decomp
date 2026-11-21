typedef unsigned char (*ByteFilter_82A75588)(unsigned char value);

typedef struct BitReader_82A75588 {
    char pad00[0x1c];
    const unsigned char *input; /* 0x1C */
    unsigned int remaining;     /* 0x20 */
    unsigned int bits;          /* 0x24 */
    unsigned int bitCount;      /* 0x28 */
    unsigned int tail;          /* 0x2C */
    unsigned int tailBits;      /* 0x30 */
    char pad34[0x20];
    ByteFilter_82A75588 filter; /* 0x54 */
} BitReader_82A75588;

extern unsigned char fn_82BA02A8(unsigned char value);
extern int fn_82A6CF00(BitReader_82A75588 *reader, int flags, unsigned int limit);

int fn_82A75588(BitReader_82A75588 *reader, unsigned int limit)
{
    unsigned int remaining = reader->remaining;
    int result = 0;
    unsigned int tailBits;
    unsigned int bitCount = reader->bitCount;
    unsigned int bits = reader->bits;
    const unsigned char *input = reader->input;
    unsigned int tail;

    tailBits = reader->tailBits;
    if (limit > remaining * 8 + tailBits + bitCount) {
        if (reader->filter == fn_82BA02A8) {
            while (bitCount <= 24 && remaining != 0) {
                bits = (bits << 8) | *input;
                bitCount += 8;
                input++;
                remaining--;
            }
            tail = 0;
            if (remaining != 0) {
                tailBits += remaining * 8;
                while (remaining != 0) {
                    tail = (tail << 8) | *input;
                    input++;
                    remaining--;
                }
            }
        } else {
            while (bitCount <= 24 && remaining != 0) {
                bits = (bits << 8) | reader->filter(*input);
                bitCount += 8;
                input++;
                remaining--;
            }
            tail = 0;
            if (remaining != 0) {
                tailBits += remaining * 8;
                do {
                    tail = (tail << 8) | reader->filter(*input);
                    input++;
                    remaining--;
                } while (remaining != 0);
            }
        }
        reader->bits = bits;
        reader->bitCount = bitCount;
        reader->remaining = remaining;
        reader->input = input;
        reader->tailBits = tailBits;
        reader->tail = tail;
        result = fn_82A6CF00(reader, 0, limit);
    }
    return result;
}
