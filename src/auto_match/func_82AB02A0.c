extern void fn_82A29A38(void);

void fn_82AB02A0(unsigned int **source, unsigned int version, unsigned int **destination)
{
    unsigned int *input;
    unsigned int *output;
    unsigned int token;
    unsigned int count;
    if (version < 0xffff0200U) {
        fn_82A29A38();
    }
    input = *source;
    output = *destination;
    input++;
    token = *input++;
    count = token & 0x7ff;
    if (count >= 0x10) {
        fn_82A29A38();
        count = 0x10 - 1;
    }
    token = (token & ~0x700U) | ((token >> 20) & 0x700);
    if ((token & 0x1f00) != 0x700) {
        fn_82A29A38();
    }
    count = (count & 0xffff) | 0x20000;
    *output = 0x1c;
    *++output = count;
    *++output = *input;
    *++output = *++input;
    *++output = *++input;
    *++output = *++input;
    *source = input + 1;
    *destination = output + 1;
}
