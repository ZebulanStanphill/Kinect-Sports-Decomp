extern void fn_82A29A38(void);

typedef struct State_82AACB10 {
    char reserved00[0x9c];
    int active; /* 0x9c */
} State_82AACB10;

void fn_82AACB10(unsigned int **source, unsigned int version, unsigned int unused, State_82AACB10 *state,
                 unsigned int **destination)
{
    unsigned int *input;
    unsigned int *output;
    unsigned int token;
    if (version != 0xffff0104U) {
        fn_82A29A38();
    }
    input = *source;
    output = *destination;
    input++;
    token = *input++;
    *output++ = 0x47;
    state->active = 1;
    if ((((token & ~0x700U) | ((token >> 20) & 0x700)) & 0x1f00) != 0) {
        fn_82A29A38();
    }
    *output = 0x580000;
    *++output = 0x101;
    *++output = (token & 0x7ff) | 0x440000;
    *++output = 0x203210;
    *destination = output + 1;
    *source = input;
}
