typedef struct BitReader_828E5538 BitReader_828E5538;

extern int fn_828E9DA8(BitReader_828E5538 *reader);
extern int fn_828E9D90(BitReader_828E5538 *reader);
extern unsigned int fn_828E9FF8(BitReader_828E5538 *reader, int bits);

static __forceinline unsigned int ReadBits(BitReader_828E5538 *reader, int bits)
{
    if (bits <= fn_828E9DA8(reader) - fn_828E9D90(reader)) {
        return fn_828E9FF8(reader, bits);
    }
    return 0;
}

/* Reads a sign bit and a fixed-point magnitude of intBits + fracBits bits. */
float fn_828E5538(BitReader_828E5538 *reader, int intBits, int fracBits)
{
    int total = intBits + fracBits;
    unsigned char positive;
    unsigned int value;
    float scale;

    if (fracBits >= 0) {
        scale = (float)(1 << fracBits);
    } else {
        scale = 1.0f / (float)(1 << -fracBits);
    }
    positive = 1;
    value = 0;
    if (total > 0) {
        positive = ReadBits(reader, 1) != 0;
        value = ReadBits(reader, total);
    }
    return (float)((__int64)(positive ? 1 : -1) * value) / scale;
}
