extern unsigned int lbl_83160500[4];
extern unsigned int lbl_83160510[4];
extern unsigned int fn_82AAC8C0(unsigned int type, unsigned int count, void *state, unsigned int *flags);

static __forceinline unsigned int GetType(unsigned int token)
{
    return (((token & ~0x700U) | ((token >> 20) & 0x700)) >> 8) & 0x1f;
}

void fn_82AACF70(unsigned int token, void *state, unsigned int **destination)
{
    unsigned int *output;
    unsigned int value;
    unsigned int flags;
    unsigned int mask;
    unsigned int bits;
    unsigned int shift;
    unsigned int saturate;
    unsigned int scale;
    unsigned int modifiers;
    unsigned int *table;
    unsigned int type;
    unsigned int index;

    output = *destination;
    shift = (token >> 24) & 0xf;
    mask = token & 0xf0000;
    type = GetType(token);
    index = token & 0x7ff;
    saturate = 0;
    if (token & 0x100000) {
        saturate = 0x100;
    }
    scale = 0;
    if (shift != 0) {
        if (shift & 8) {
            shift = ~shift + 1;
            table = lbl_83160510;
        } else {
            table = lbl_83160500;
        }
        scale = table[shift & 3] << 9;
    }
    modifiers = scale | saturate;
    value = fn_82AAC8C0(type, index, state, &flags);
    if (modifiers == 0 && mask == 0xf0000) {
        *output++ = ((flags & 0x3f) << 16) | (value & 0xffff);
    } else {
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
        *output++ = ((flags & 0x3f) << 16) | 0x400000 | (value & 0xffff);
        *output++ = bits | modifiers;
    }
    *destination = output;
}
