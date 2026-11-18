union Output_82AAF4B0 {
    unsigned int value;
    unsigned int *pointer;
};

union Count_82AAF4B0 {
    unsigned int value;

    struct {
        unsigned int opcode : 16;
        unsigned int count : 16;
    } fields;
};

extern void fn_82A29A38(void);
extern unsigned int fn_82AAC8C0(unsigned int type, unsigned int count, void *state, unsigned int *flags);
extern void fn_82AAD090(unsigned int token, unsigned int a, unsigned int b, void *state,
                        unsigned int **destination);

static __forceinline unsigned int Encode(unsigned int opcode, union Count_82AAF4B0 count)
{
    count.fields.opcode = opcode;
    return count.value;
}

void fn_82AAF4B0(unsigned int **source, unsigned int version, unsigned int unused, void *state,
                 unsigned int **destination)
{
    unsigned int *input;
    unsigned int *output;
    unsigned int token;
    unsigned int value;
    unsigned int type;
    unsigned int opcode;
    int notTexture;
    int isLast;
    unsigned int size;
    union Count_82AAF4B0 count;
    union Output_82AAF4B0 next;
    unsigned int encoded;

    if (version >= 0xffff0104U) {
        fn_82A29A38();
    }
    input = *source;
    output = *destination;
    ++input;
    token = *input++;
    value = *input++;
    type = (((token & ~0x700U) | ((token >> 20) & 0x700)) >> 8) & 0x1f;
    count.value = token & 0x7ff;
    opcode = ((unsigned short *)input)[1];
    notTexture = opcode != 0x49;
    if (notTexture) {
        isLast = opcode == 0x4d;
    } else {
        isLast = ((unsigned short *)input)[7] == 0x4d;
    }
    if (type != 3) {
        fn_82A29A38();
    }
    token = fn_82AAC8C0(type, (notTexture ? 1 : 2) + count.value, state, &next.value);
    encoded = ((next.value & 0x3f) << 16) | 0x400000 | (token & 0xffff);
    size = notTexture ? 4 : 1;
    *output = 0x22;
    *++output = encoded;
    *++output = size;
    *++output = Encode(0x11, count);
    next.pointer = output + 1;
    fn_82AAD090(value, 0, 0, state, &next.pointer);
    if (isLast) {
        unsigned int *base = next.pointer;
        output = base + 2;
        base[0] = 0x47;
        base[1] = 0x44000e;
        *output = size;
        *++output = Encode(0x51, count);
        *++output = 0x3333;
        next.pointer = output + 1;
    }
    *destination = next.pointer;
    *source = input;
}
