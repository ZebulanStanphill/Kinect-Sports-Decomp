typedef struct Curve_825B99F8 {
    unsigned short count;
    short pad2;
    float range;                    /* 0x04 */
    float *values;                  /* 0x08 */
} Curve_825B99F8;

extern const float lbl_821CA45C[2];

float fn_825B99F8(Curve_825B99F8 *self, float t)
{
    float fraction = t / self->range;
    unsigned int index = (unsigned int)(fraction * ((float)self->count - lbl_821CA45C[1]));
    if (index >= self->count)
        index = self->count - 1;
    return self->values[index];
}
