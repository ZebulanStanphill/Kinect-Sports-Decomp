typedef struct Desc_82B0FE60 {
    unsigned int a : 4;
    unsigned int kind : 3;
    unsigned int b : 12;
    unsigned int bits : 8;
    unsigned int c : 5;
} Desc_82B0FE60;

typedef struct Operand_82B0FE60 {
    Desc_82B0FE60 desc; /* 0x0 */
    int pad4[2];
    unsigned int value; /* 0xc */
} Operand_82B0FE60;

typedef struct Node_82B0FE60 {
    char pad0[0x2c];
    Operand_82B0FE60 *operands[1]; /* 0x2c */
} Node_82B0FE60;

extern Desc_82B0FE60 *fn_82AD17B0(void *ctx, unsigned int value);

void fn_82B0FE60(void *ctx, Node_82B0FE60 *node, unsigned int count, unsigned int mask, unsigned int extra)
{
    unsigned int value = 0;
    unsigned int bit = 1;
    unsigned int format = 0;
    unsigned int used = 0;
    unsigned int swizzle = 0;
    unsigned int i;
    Desc_82B0FE60 *desc;
    unsigned int shift;

    for (i = 0; i < count; i++, bit <<= 1) {
        if (bit & mask) {
            Operand_82B0FE60 *operand = node->operands[i];
            Desc_82B0FE60 *desc2 = &operand->desc;

            if (value == 0) {
                value = operand->value;
                format = desc2->c;
            }
            shift = used * 2;
            swizzle = (swizzle & ~(3 << shift)) | ((desc2->bits & 3) << shift);
            used++;
        }
    }
    desc = fn_82AD17B0(ctx, value);
    desc->kind = used + extra;
    for (i = 0; i < extra; i++) {
        swizzle = (swizzle << 2) | (swizzle & 3);
    }
    desc->bits = swizzle;
    desc->c = format;
}
