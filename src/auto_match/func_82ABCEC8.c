typedef struct Constants_82ABCEC8 {
    char pad0[0x10];
    unsigned int bools[8];       /* 0x010 */
    int values[0xe0];            /* 0x030 */
    unsigned int dirtyBools[8];  /* 0x3b0 */
    unsigned int dirtyValues[8]; /* 0x3d0 */
} Constants_82ABCEC8;

int fn_82ABCEC8(Constants_82ABCEC8 *self, unsigned int stage, unsigned int type, unsigned int index,
                int *value)
{
    if (stage == 0) {
        switch (type) {
        case 0:
            self->bools[index >> 5] &= ~(1 << (index & 0x1f));
            self->bools[index >> 5] |= (*value != 0) << (index & 0x1f);
            self->dirtyBools[index >> 5] |= 1 << (index & 0x1f);
            break;
        case 1:
            break;
        case 2:
            self->values[index] = *value;
            self->dirtyValues[index >> 5] |= 1 << (index & 0x1f);
            break;
        default:
            return 0x80004005;
        }
    }
    return 0;
}
