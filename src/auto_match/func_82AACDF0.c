typedef struct Input_82AACDF0 {
    unsigned int reg;  /* 0x00 */
    unsigned int kind; /* 0x04 */
} Input_82AACDF0;

typedef struct State_82AACDF0 {
    unsigned int version; /* 0x00 */
    char pad4[0x1c - 0x4];
    Input_82AACDF0 inputs[17]; /* 0x1c */
    unsigned int registers[4]; /* 0xa4 */
} State_82AACDF0;

extern void fn_82A29A38(void);

static __forceinline unsigned int NormalizeType(unsigned int type)
{
    unsigned int result = type;

    if (type >= 11 && type <= 13) {
        result = 2;
    }
    return result;
}

unsigned int fn_82AACDF0(unsigned int token, State_82AACDF0 *state, int *size)
{
    unsigned int type;
    unsigned int index;

    type = ((token >> 28) & 7) | ((token & 0x1800) >> 8);
    index = token & 0x7ff;
    switch (type) {
    case 11:
        index += 0x800;
        break;
    case 12:
        index += 0x1000;
        break;
    case 13:
        index += 0x1800;
        break;
    }
    type = NormalizeType(type);
    switch (type) {
    case 0:
        *size = 4;
        break;
    case 1:
        *size = state->inputs[index].kind;
        index = state->inputs[index].reg;
        if (index >= 0x10) {
            fn_82A29A38();
        }
        if (*size != 0x12 && *size != 0x13 && *size != 0x11 && *size != 0xc) {
            fn_82A29A38();
        }
        break;
    case 2:
        *size = 1;
        break;
    case 3:
        if (state->registers[index] != 0) {
            if (state->version >= 0xffff0104) {
                fn_82A29A38();
            }
            *size = 4;
            index = state->registers[index];
        } else {
            *size = 0x11;
        }
        break;
    case 7:
        *size = 2;
        break;
    case 14:
        *size = 0;
        break;
    case 17:
        switch (index) {
        case 0:
            *size = 0x16;
            break;
        case 1:
            *size = 0x15;
            break;
        }
        index = 0;
        break;
    default:
        fn_82A29A38();
        break;
    }
    return index;
}
