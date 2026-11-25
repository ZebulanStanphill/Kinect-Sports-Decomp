typedef struct Decoder_82F07E00 {
    char pad0[0x254];
    int *blockInfo; /* 0x254 */
} Decoder_82F07E00;

typedef struct Quant_82F07E00 {
    int scale;    /* 0x0 */
    int offset;   /* 0x4 */
    int plusOne;  /* 0x8 */
    int minusOne; /* 0xc */
} Quant_82F07E00;

extern void *memset(void *dest, int c, unsigned int count);

/* Dequantises count/2 (level, run) pairs into the 64 coefficients and returns a mask of the
   blocks they touched. */
unsigned int fn_82F07E00(Decoder_82F07E00 *decoder, short *pairs, int count, short *coefs, int *scan,
                         Quant_82F07E00 *quant)
{
    int scale = quant->scale;
    int offset = quant->offset;
    int plusOne = quant->plusOne;
    int minusOne = quant->minusOne;
    int *blockInfo = decoder->blockInfo;
    int pos;
    int i;
    int level;
    int info;
    unsigned int mask;

    memset(coefs, 0, 0x80);
    pos = 0;
    mask = 0;
    for (i = 0; i < count; i += 2) {
        level = pairs[i];
        pos += pairs[i + 1];
        info = blockInfo[pos];
        if ((info & 7) != 0) {
            mask |= 1 << ((info >> 3) & 7);
        }
        if (level == 1) {
            coefs[scan[pos]] = plusOne;
        } else if (level == -1) {
            coefs[scan[pos]] = minusOne;
        } else if (level > 0) {
            coefs[scan[pos]] = level * scale + offset;
        } else {
            coefs[scan[pos]] = level * scale - offset;
        }
        pos++;
    }
    return mask;
}
