typedef struct Macroblock_82CBDE30 {
    char pad0[0xe];
    unsigned char pattern[4]; /* 0x0e */
    char pad12[0x6];
} Macroblock_82CBDE30;

typedef struct Decoder_82CBDE30 {
    char pad0[0x88];
    int mbWidth; /* 0x88 */
    char pad8c[0x88];
    Macroblock_82CBDE30 *empty; /* 0x114 */
    char pad118[0x54b8];
    int *skipped; /* 0x55d0 */
} Decoder_82CBDE30;

void fn_82CBDE30(Decoder_82CBDE30 *dec, Macroblock_82CBDE30 *mb, int hasLeft, int row)
{
    unsigned char *top;
    unsigned char *left;
    unsigned char *topLeft;
    unsigned int bits;
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char v0;
    unsigned char v1;
    unsigned char v2;
    unsigned char v3;

    top = dec->empty->pattern;
    topLeft = top;
    left = top;
    if (row != 0 && dec->skipped[row] == 0) {
        top = (mb - dec->mbWidth)->pattern;
    }
    if (hasLeft != 0) {
        left = (mb - 1)->pattern;
    }
    if (row != 0 && dec->skipped[row] == 0 && hasLeft != 0) {
        topLeft = (mb - dec->mbWidth - 1)->pattern;
    }
    bits = *(unsigned int *)mb->pattern;
    b0 = (unsigned char)(bits >> 24);
    b1 = (unsigned char)(bits >> 16);
    b2 = (unsigned char)(bits >> 8);
    b3 = (unsigned char)bits;
    v0 = b0 ^ (topLeft[3] == top[2] ? left[1] : top[2]);
    v1 = b1 ^ (top[2] == top[3] ? v0 : top[3]);
    v2 = b2 ^ (left[1] == v0 ? left[3] : v0);
    v3 = b3 ^ (v0 == v1 ? v2 : v1);
    *(unsigned int *)mb->pattern = ((((v0 << 8) | v1) << 8) | v2) << 8 | v3;
}
