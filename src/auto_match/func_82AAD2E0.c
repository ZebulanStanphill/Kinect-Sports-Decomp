extern unsigned int lbl_83160520[6];
extern unsigned int fn_82AAC8C0(unsigned int type, unsigned int count, void *state, unsigned int *flags);

static __forceinline unsigned int GetType(unsigned int token)
{
    return (((token & ~0x700U) | ((token >> 20) & 0x700)) >> 8) & 0x1f;
}

void fn_82AAD2E0(unsigned int token, unsigned int source, unsigned int swizzle, void *state,
                 unsigned int **destination)
{
    unsigned int *output;
    unsigned int value;
    unsigned int flags;
    unsigned int mask;
    unsigned int bits;
    unsigned int shifted;
    unsigned int sourceSwizzle;

    output = *destination;
    *output++ = 0xc;
    value = fn_82AAC8C0(GetType(token), token & 0x7ff, state, &flags);
    mask = token & 0xf0000;
    if (mask != 0xf0000) {
        *output++ = ((flags & 0x3f) << 16) | 0x400000 | (value & 0xffff);
        bits = 0;
        if (mask & 0x10000) {
            bits = 1;
        }
        if (mask & 0x20000) {
            bits |= 4;
        }
        if (mask & 0x40000) {
            bits |= 0x10;
        }
        if (mask & 0x80000) {
            bits |= 0x40;
        }
        *output++ = bits;
    } else {
        *output++ = ((flags & 0x3f) << 16) | (value & 0xffff);
    }
    sourceSwizzle = source & 0xff0000;
    /* The source token is reused for its negate bit once its swizzle is taken. */
    source = (source & 0xf000000) - 0xd000000 == 0 ? 0x10000 : 0;
    if (sourceSwizzle == 0xe40000 && source == 0) {
        *output++ = 0x40020;
    } else {
        shifted = sourceSwizzle >> 16;
        bits = lbl_83160520[shifted & 3];
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 4;
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 8;
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 12;
        *output++ = 0x440020;
        *output++ = bits | source;
    }
    if (swizzle != 0xe40000) {
        *output++ = 0x440021;
        shifted = swizzle >> 16;
        bits = lbl_83160520[shifted & 3];
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 4;
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 8;
        shifted >>= 2;
        bits |= lbl_83160520[shifted & 3] << 12;
        *output++ = bits;
    } else {
        *output++ = 0x40021;
    }
    *destination = output;
}
