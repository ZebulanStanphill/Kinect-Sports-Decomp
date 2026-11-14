typedef struct Curve_8302A5B8 {
    int unk0;
    float *values; /* 0x4 */
    int unk8;
    float end;     /* 0xc */
    float start;   /* 0x10 */
    int count;     /* 0x14 */
    float scale;   /* 0x18 */
} Curve_8302A5B8;

float fn_8302A8F0(Curve_8302A5B8 *self, float x)
{
    float *values = self->values;
    float f;
    float *e;
    float first;
    if (x >= self->end) {
        return values[self->count - 1];
    }
    if (x <= self->start) {
        return values[0];
    }
    f = (x - self->start) * self->scale;
    e = &values[(unsigned int)f];
    first = e[0];
    return (f - (float)(unsigned int)f) * (e[1] - first) + first;
}
