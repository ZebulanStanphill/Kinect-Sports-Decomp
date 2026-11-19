union Count_82AAD208 {
    unsigned int value;

    struct {
        unsigned int opcode : 16;
        unsigned int count : 16;
    } fields;
};

extern unsigned int fn_82AAC8C0(unsigned int type, unsigned int count, void *state, unsigned int *flags);

static __forceinline unsigned int Encode(unsigned int opcode, union Count_82AAD208 count)
{
    count.fields.opcode = opcode;
    return count.value;
}

void fn_82AAD208(unsigned int token, union Count_82AAD208 count, void *state, unsigned int **destination)
{
    unsigned int *output;
    unsigned int value;
    unsigned int flags;
    unsigned int mask;
    unsigned int bits;

    output = *destination;
    value = fn_82AAC8C0((((token & ~0x700U) | ((token >> 20) & 0x700)) >> 8) & 0x1f, token & 0x7ff, state,
                        &flags);
    *output++ = 0x47;
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
    *output++ = Encode(4, count);
    *destination = output;
}
