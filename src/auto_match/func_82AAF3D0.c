union Output_82AAF3D0 {
    unsigned int value;
    unsigned int *pointer;
};

union Count_82AAF3D0 {
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

void fn_82AAF3D0(unsigned int **source, unsigned int version, unsigned int unused, void *state,
                 unsigned int **destination)
{
    unsigned int *input;
    unsigned int *output;
    unsigned int token;
    unsigned int value;
    unsigned int type;
    union Count_82AAF3D0 count;
    union Output_82AAF3D0 next;
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
    if (type != 3) {
        fn_82A29A38();
    }
    token = fn_82AAC8C0(type, count.value + 1, state, &next.value);
    encoded = ((next.value & 0x3f) << 16) | 0x400000 | (token & 0xffff);
    *output = 0x22;
    *++output = encoded;
    *++output = 1;
    count.fields.opcode = 0x11;
    *++output = count.value;
    next.pointer = output + 1;
    fn_82AAD090(value, 0, 0, state, &next.pointer);
    *destination = next.pointer;
    *source = input;
}
