typedef struct Matrix_82ADD9F8 {
    char padding[0x2a0]; /* 0x00 */
    unsigned int stride; /* 0x2a0 */
    char padding2a4[8];  /* 0x2a4 */
    unsigned int bits;   /* 0x2ac */
} Matrix_82ADD9F8;

void fn_82ADD9F8(Matrix_82ADD9F8 *self, unsigned int first, unsigned int second)
{
    unsigned int row = first * self->stride * 8 + self->bits;
    *(unsigned __int64 *)(row + ((second >> 3) & 0x1ffffff8)) |= 1ULL << (second & 63);
    row = second * self->stride * 8 + self->bits;
    *(unsigned __int64 *)(row + ((first >> 3) & 0x1ffffff8)) |= 1ULL << (first & 63);
}
