typedef struct Filter_82FCA2D8 {
    unsigned int rate; /* 0x0 */
    char reserved[0xcc];
    unsigned int values[16]; /* 0xd0 */
    float complement[16];    /* 0x110 */
    float factor[16];        /* 0x150 */
} Filter_82FCA2D8;

extern double fn_82F655D8(double, double);
extern double lbl_82155200;

void fn_82FCA2D8(Filter_82FCA2D8 *self, float scale)
{
    float reciprocal = 1.0f / ((float)self->rate * scale);
    double base = (double)0.001f;
    int i;
    for (i = 0; i < 16; i++) {
        float factor = (float)fn_82F655D8(base, (float)self->values[i] * reciprocal);
        self->complement[i] = 1.0f - factor;
        self->factor[i] = factor;
    }
}
