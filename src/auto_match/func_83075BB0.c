/* Swaps the two banks of 20 samples, refills the new bank from the source, then (when a previous
   bank existed) blends each new sample against the old one and hands it back to the source. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Sample_83075BB0 {
    __vector4 value;          /* 0x00 */
    char pad10[0x10];
} Sample_83075BB0;

typedef struct Filter_83075BB0 {
    Sample_83075BB0 samples[2][20];   /* 0x000 */
    int bank;                         /* 0x500 */
} Filter_83075BB0;


__vector4 *fn_83075D30(__vector4 *out, void *source, int index);
void fn_83075D80(void *source, int index, __vector4 value);
float fn_8306E890(float a, float b);
float fn_8306E7D8(float a, float b);
void fn_83075A68(Sample_83075BB0 *current, Sample_83075BB0 *previous, float a, float b, float c, float t);

void fn_83075BB0(Filter_83075BB0 *self, void *source, float t)
{
    int previous = self->bank;
    int i;
    float a;
    float b;
    float c;
    Sample_83075BB0 *cur;
    Sample_83075BB0 *old;
    __vector4 tmp;

    self->bank = previous == 0;
    for (i = 0; i < 20; i++) {
        self->samples[self->bank][i].value = *fn_83075D30(&tmp, source, i);
    }
    if (previous > -1) {
        a = fn_8306E890(0.06f, t);
        b = fn_8306E7D8(a * a * 1.1f / (2.0f - a), 1.0f);
        c = t * 1.5f;
        cur = self->samples[self->bank];
        old = self->samples[previous];
        for (i = 0; i < 20; i++) {
            fn_83075A68(&cur[i], &old[i], a, b, c, t);
            fn_83075D80(source, i, cur[i].value);
        }
    }
}
