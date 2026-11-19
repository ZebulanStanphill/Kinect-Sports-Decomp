typedef struct Filter_826EB5F0 {
    char pad00[0xc];
    float gain;        /* 0x0c */
    float inverseGain; /* 0x10 */
} Filter_826EB5F0;

extern const float lbl_8200D8A4;
extern const float lbl_8200D8A8;
extern const float lbl_8200D8AC;

static __forceinline float Abs_826EB5F0(float x)
{
    return x >= 0.0f ? x : -x;
}

static __forceinline float Max_826EB5F0(float a, float b)
{
    return b < a ? a : b;
}

void fn_826EB5F0(Filter_826EB5F0 *self, const float *v, float t)
{
    float peak;
    float scale;

    peak = Max_826EB5F0(Max_826EB5F0(Abs_826EB5F0(v[0]), Abs_826EB5F0(v[2])),
                        Max_826EB5F0(Abs_826EB5F0(v[1]), Abs_826EB5F0(v[3])));
    if (peak < 0.01f) {
        self->gain = 1.0f;
    } else {
        scale = t * 2.0f + lbl_8200D8AC;
        if (scale < lbl_8200D8A8) {
            scale = lbl_8200D8A8;
        }
        self->gain = lbl_8200D8A4 / (scale + peak);
    }
    self->inverseGain = 1.0f / self->gain;
}
