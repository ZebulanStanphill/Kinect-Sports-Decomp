typedef struct PredBlock_82F1A7E0 {
    unsigned short row[8];    /* 0x00 */
    unsigned short column[8]; /* 0x10 */
} PredBlock_82F1A7E0;

typedef struct Decoder_82F1A7E0 {
    char pad0[0x2d0];
    int widthInBlocks; /* 0x2D0 */
    char pad2d4[0x908 - 0x2d4];
    PredBlock_82F1A7E0 *lumaPred; /* 0x908 */
    PredBlock_82F1A7E0 *cbPred;   /* 0x90C */
    PredBlock_82F1A7E0 *crPred;   /* 0x910 */
} Decoder_82F1A7E0;

void fn_82F1A7E0(Decoder_82F1A7E0 *decoder, int block, int x, int y, unsigned short *coefficients)
{
    int stride = decoder->widthInBlocks * 2;
    PredBlock_82F1A7E0 *base;
    PredBlock_82F1A7E0 *pred;
    int index;
    int i;

    if (block >= 4) {
        if (block == 4) {
            base = decoder->cbPred;
        } else {
            base = decoder->crPred;
        }
        index = (stride >> 1) * y + x;
    } else {
        base = decoder->lumaPred;
        index = ((block >> 1) + y * 2) * stride + (block & 1) + x * 2;
    }
    pred = &base[index];
    for (i = 0; i < 8; i++) {
        pred->row[i] = coefficients[i];
        pred->column[i] = coefficients[i * 8];
    }
}
