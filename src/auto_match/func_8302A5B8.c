typedef struct Curve_8302A5B8 {
    int unk0;
    float *values; /* 0x4 */
    int unk8;
    int unkc;
    float start;   /* 0x10 */
    int unk14;
    float scale;   /* 0x18 */
} Curve_8302A5B8;

float fn_8302A5B8(Curve_8302A5B8 *self, float x)
{
    float f = (x - self->start) * self->scale;
    float *e = &self->values[(unsigned int)f];
    float first = e[0];
    return (f - (float)(unsigned int)f) * (e[1] - first) + first;
}
