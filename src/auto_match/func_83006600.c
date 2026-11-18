typedef struct Quantized_83006600 {
    short value;   /* 0x0 */
    short pad2;    /* 0x2 */
    int reserved4; /* 0x4 */
    int reserved8; /* 0x8 */
} Quantized_83006600;

typedef struct Effect_83006600 Effect_83006600;

typedef struct EffectVtbl_83006600 {
    void *reserved00[15];                                                           /* 0x00 */
    void (*setParameter)(Effect_83006600 *self, int id, float value, int a, int b); /* 0x3c */
} EffectVtbl_83006600;

struct Effect_83006600 {
    EffectVtbl_83006600 *vtbl; /* 0x00 */
    int reserved04[16];        /* 0x04 */
    Quantized_83006600 *gain;  /* 0x44 */
};

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, int size);
extern void fn_83004190(short *out, float value);

void fn_83006600(Effect_83006600 *self, float value)
{
    float previous;

    if (self->gain == 0) {
        Quantized_83006600 *gain;

        if (value == 0.0f) {
            return;
        }
        gain = (Quantized_83006600 *)fn_82FA5060(lbl_831BC768, 0xc);
        self->gain = gain;
        if (gain != 0) {
            gain->value = 0;
            gain->reserved4 = 0;
        }
        if (self->gain == 0) {
            return;
        }
    }
    previous = self->gain->value * 0.1f;
    fn_83004190(&self->gain->value, value);
    self->vtbl->setParameter(self, 0x1d, value - previous, 0, 0);
}
