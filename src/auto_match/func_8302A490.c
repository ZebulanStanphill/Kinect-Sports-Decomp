typedef struct Table_8302A490 {
    int f0;
    float *values;           /* 0x04 */
    float (*func)(double x); /* 0x08 */
    float max;               /* 0x0c */
    float min;               /* 0x10 */
    unsigned int count;      /* 0x14 */
    float scale;             /* 0x18 */
} Table_8302A490;

extern void *lbl_831BC768;
void *fn_82FA5060(void *heap, unsigned int size);

int fn_8302A490(Table_8302A490 *self)
{
    double step = (self->max - self->min) / (double)(self->count - 1);
    unsigned int i;

    self->scale = (float)(1.0 / step);
    self->values = (float *)fn_82FA5060(lbl_831BC768, self->count * 4);
    if (self->values != 0) {
        for (i = 0; i < self->count; i++) {
            self->values[i] = self->func(i * step + self->min);
        }
        return 1;
    }
    return 2;
}
