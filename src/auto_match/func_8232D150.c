typedef struct {
    unsigned char pad[0x28];
    float firstWeight;  /* 0x28 */
    float secondWeight; /* 0x2c */
    float thirdWeight;  /* 0x30 */
    float skipChance;   /* 0x34 */
} Weights_8232D150;

extern int fn_82520780(unsigned int *seed, float chance);
extern unsigned int lbl_83265A28;
extern const float lbl_821CA45C[2];

static __forceinline float RandomRange(unsigned int *seed, float weight)
{
    union {
        unsigned int bits;
        float value;
    } sample;

    float one = lbl_821CA45C[1];

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    sample.bits = (*seed & 0x7fffff) | 0x3f800000;
    return (sample.value - one) * weight;
}

int fn_8232D150(Weights_8232D150 *self, int restricted)
{
    float roll;
    int result;

    if (restricted != 0) {
        if (fn_82520780(&lbl_83265A28, self->skipChance) == 0) {
            roll = RandomRange(&lbl_83265A28, self->secondWeight + self->firstWeight);
            result = 1;
            if (roll < self->firstWeight)
                goto done;
            result = 2;
            goto done;
        }
    } else {
        roll = RandomRange(&lbl_83265A28, (self->thirdWeight + self->firstWeight) + self->secondWeight);
        if (roll < self->firstWeight) {
            result = 1;
            goto done;
        }
        result = 2;
        if (roll < self->firstWeight + self->secondWeight)
            goto done;
    }
    result = 3;
done:
    return result;
}
