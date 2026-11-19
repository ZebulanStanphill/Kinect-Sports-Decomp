/* Builds the swizzle code of operand slot `index` for the current target format. */
typedef struct Operand_82936130 {
    char pad0[0x10];
    void *relative; /* 0x10 */
    int f14;
    unsigned int offset; /* 0x18 */
    char pad1c[0x24 - 0x1c];
    unsigned int swizzle; /* 0x24 */
} Operand_82936130;

typedef struct Self_82936130 {
    char pad0[0x38];
    int format; /* 0x38 */
    char pad3c[0x60 - 0x3c];
    Operand_82936130 *operands[1]; /* 0x60 */
} Self_82936130;

extern unsigned char lbl_8315AC98[];

unsigned int fn_82936130(Self_82936130 *self, int index)
{
    unsigned int swizzle = self->operands[index]->swizzle;
    Operand_82936130 *next;
    unsigned int offset;
    unsigned int component;
    unsigned int low;

    switch (lbl_8315AC98[self->format]) {
    case 1:
        return (swizzle & 3) * 0x55;
    case 2:
        return ((swizzle >> 2) & 3) * 0x15 | (swizzle & 3) << 6;
    case 4:
        low = swizzle & 3;
        component = 0;
        offset = 0;
        next = self->operands[index + 1];
        if (next != 0) {
            if (next->relative == 0) {
                offset = next->offset;
            }
            component = next->swizzle & 3;
        }
        return ((low << 2 | (((offset >> 4) - 2) & 3)) << 4 | (((offset & ~3) + 4) & 0xf)) & ~3 | component;
    }
    return swizzle;
}
