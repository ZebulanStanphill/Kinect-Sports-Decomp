typedef struct State_82AAC8C0 {
    unsigned int version; /* 0x00 */
    char pad4[0x9c - 0x4];
    int hasPosition;           /* 0x9c */
    unsigned int textureMask;  /* 0xa0 */
    unsigned int registers[4]; /* 0xa4 */
} State_82AAC8C0;

extern void fn_82A29A38(void);

unsigned int fn_82AAC8C0(unsigned int kind, unsigned int index, State_82AAC8C0 *state, unsigned int *size)
{
    switch (kind) {
    case 0:
        *size = 4;
        break;
    case 3:
        if (state->version >= 0xffff0104) {
            fn_82A29A38();
        }
        index = state->registers[index];
        *size = 4;
        if (index == 0) {
            fn_82A29A38();
        }
        break;
    case 8:
        if (state->version < 0xffff0200) {
            fn_82A29A38();
        }
        if (index >= 4) {
            fn_82A29A38();
        }
        if (state->version == 0xffff0200) {
            state->textureMask |= 1 << index;
            index += 0x23;
            *size = 4;
        } else {
            *size = 0x17;
        }
        break;
    case 9:
        *size = 4;
        state->hasPosition = 1;
        index = 0x22;
        break;
    default:
        fn_82A29A38();
        break;
    }
    return index;
}
