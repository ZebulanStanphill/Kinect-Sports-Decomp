typedef struct IntArray_827B3C68 {
    unsigned int *data; /* 0x0 */
    unsigned int size;  /* 0x4 */
    unsigned int capacity;
} IntArray_827B3C68;

typedef struct GammaTable_827B3C68 {
    int unk0;              /* 0x0 */
    float gamma;           /* 0x4 */
    IntArray_827B3C68 lut; /* 0x8 */
} GammaTable_827B3C68;

extern double fn_82F655D8(double base, double exponent);
extern void fn_827B3858(IntArray_827B3C68 *array, unsigned int count, unsigned int extra);

void fn_827B3C68(GammaTable_827B3C68 *self, float gamma)
{
    IntArray_827B3C68 *lut;
    int i;

    if (gamma == 1.0f) {
        self->lut.size = 0;
    } else {
        lut = &self->lut;
        fn_827B3858(lut, 0x100, 0);
        lut->size = 0x100;
        for (i = 0; i < 0x100; i++) {
            lut->data[i] =
                (unsigned int)((float)fn_82F655D8((float)i * (1.0f / 255.0f), gamma) * 255.0f + 0.5f);
        }
    }
    self->gamma = gamma;
}
