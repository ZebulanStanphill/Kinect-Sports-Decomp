typedef struct IntConstant_82ABCF88 {
    unsigned char x; /* 0x0 */
    unsigned char y; /* 0x1 */
    unsigned char z; /* 0x2 */
    unsigned char w; /* 0x3 */
} IntConstant_82ABCF88;

typedef struct Constants_82ABCF88 {
    char pad0[0x10];
    unsigned int bools[8];               /* 0x010 */
    IntConstant_82ABCF88 integers[0xe0]; /* 0x030 */
    unsigned int dirtyBools[8];          /* 0x3b0 */
    unsigned int dirtyIntegers[2];       /* 0x3d0 */
    unsigned int dirtyBools2[8];         /* 0x3d8 */
    unsigned int dirtyIntegers2[2];      /* 0x3f8 */
} Constants_82ABCF88;

static __forceinline void SetBits_82ABCF88(unsigned int *word, unsigned int bits)
{
    *word |= bits;
}

int fn_82ABCF88(Constants_82ABCF88 *self, unsigned int unused1, unsigned int unused2, unsigned int type,
                unsigned int index, int *value)
{
    IntConstant_82ABCF88 *constant;

    if (value != 0) {
        switch (type) {
        case 0:
            self->bools[index >> 5] &= ~(1 << (index & 0x1f));
            self->bools[index >> 5] |= (*value != 0) << (index & 0x1f);
            SetBits_82ABCF88(&self->dirtyBools[index >> 5], 1 << (index & 0x1f));
            SetBits_82ABCF88(&self->dirtyBools2[index >> 5], 1 << (index & 0x1f));
            break;
        case 1:
            constant = &self->integers[index];
            constant->x = value[0];
            constant->y = value[1];
            constant->z = value[2];
            constant->w = value[3];
            SetBits_82ABCF88(&self->dirtyIntegers[index >> 5], 1 << (index & 0x1f));
            SetBits_82ABCF88(&self->dirtyIntegers2[index >> 5], 1 << (index & 0x1f));
            break;
        }
    }
    return 0;
}
