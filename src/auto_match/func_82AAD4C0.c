union Count_82AAD4C0 {
    unsigned int value;

    struct {
        unsigned int opcode : 16;
        unsigned int count : 16;
    } fields;
};

extern unsigned int lbl_83160520[6];
extern unsigned int fn_82AAC8C0(unsigned int type, unsigned int count, void *state, unsigned int *flags);
extern void fn_82A29A38(void);

static __forceinline unsigned int Encode(unsigned int opcode, union Count_82AAD4C0 count)
{
    count.fields.opcode = opcode;
    return count.value;
}

static __forceinline unsigned int GetType(unsigned int token)
{
    return (((token & ~0x700U) | ((token >> 20) & 0x700)) >> 8) & 0x1f;
}

void fn_82AAD4C0(unsigned int token, unsigned int source, unsigned int swizzle, void *state,
                 unsigned int **destination)
{
    unsigned int *output;
    unsigned int value;
    unsigned int flags;
    unsigned int mask;
    unsigned int bits;
    unsigned int shifted;
    union Count_82AAD4C0 count;

    output = *destination;
    *output++ = 0x47;
    mask = token & 0xf0000;
    value = fn_82AAC8C0(GetType(token), token & 0x7ff, state, &flags);
    count.value = source & 0x7ff;
    if (GetType(source) != 0) {
        fn_82A29A38();
    }
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
    *output++ = Encode(0x44, count);
    shifted = swizzle >> 16;
    bits = lbl_83160520[shifted & 3];
    shifted >>= 2;
    bits |= lbl_83160520[shifted & 3] << 4;
    shifted >>= 2;
    bits |= lbl_83160520[shifted & 3] << 8;
    shifted >>= 2;
    bits |= lbl_83160520[shifted & 3] << 12;
    *output++ = bits;
    *destination = output;
}
