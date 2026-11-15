typedef struct Filter_82FC9D50 {
    unsigned int rate; /* 0x0 */
    char reserved[0x6c];
    unsigned int values[8]; /* 0x70 */
    float complement[8];    /* 0x90 */
    float factor[8];        /* 0xb0 */
} Filter_82FC9D50;

extern double fn_82F655D8(double, double);
extern double lbl_82155200;

void fn_82FC9D50(Filter_82FC9D50 *self, float scale)
{
    float reciprocal = 1.0f / ((float)self->rate * scale);
    double base = (double)0.001f;
    int i;
    for (i = 0; i < 8; i++) {
        float factor = (float)fn_82F655D8(base, (float)self->values[i] * reciprocal);
        self->complement[i] = 1.0f - factor;
        self->factor[i] = factor;
    }
}
