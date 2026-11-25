void fn_82AB1538(unsigned char *data, unsigned int bit, int width, unsigned int value)
{
    unsigned int byteIndex = (bit - 1) >> 3;
    unsigned int shift = bit - byteIndex * 8 - 1;
    unsigned int word = (data + byteIndex)[3];
    unsigned int mask;
    int i;
    int outputShift;

    word = (word << 8) | (data + byteIndex)[2];
    word = (word << 8) | (data + byteIndex)[1];
    word = (word << 8) | (data + byteIndex)[0];
    mask = ((~0u >> (32 - shift - width)) >> shift) << shift;
    word = (word & ~mask) | ((value << shift) & mask);
    for (i = 0, outputShift = 0; i < 4; ++i, outputShift += 8) {
        (data + byteIndex)[i] = (unsigned char)(word >> outputShift);
    }
}
