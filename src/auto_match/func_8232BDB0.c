typedef struct Weights_8232BDB0 {
    float values[3]; /* 0x00 */
} Weights_8232BDB0;

typedef struct Chances_8232BDB0 {
    Weights_8232BDB0 weights; /* 0x00 */
    float bonusChance;        /* 0x0c */
    float total;              /* 0x10 */
} Chances_8232BDB0;

extern unsigned int lbl_83265A28;
/* The 1.0f at +4 is the link-time home of that constant. */
extern const float lbl_821CA45C[2];

extern int fn_82520780(unsigned int *seed, float chance);

static __forceinline float NextRandom_8232BDB0(unsigned int *seed)
{
    float one = lbl_821CA45C[1];

    union {
        unsigned int i;
        float f;
    } value;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - one;
}

/* Picks one of three weighted outcomes; without the bonus roll the third is left out. */
int fn_8232BDB0(Chances_8232BDB0 *self)
{
    int bonus = fn_82520780(&lbl_83265A28, self->bonusChance);
    Weights_8232BDB0 weights = self->weights;
    float total = self->total;
    float sum;
    float roll;
    unsigned int i;

    if (!bonus) {
        total -= weights.values[2];
        weights.values[2] = 0.0f;
    }
    roll = NextRandom_8232BDB0(&lbl_83265A28) * total;
    sum = 0.0f;
    for (i = 0; (int)i < 3; i++) {
        sum += weights.values[i];
        if (sum > roll) {
            switch (i) {
            case 0:
                return bonus ? 0 : 2;
            case 1:
                return bonus ? 1 : 3;
            case 2:
                return 4;
            }
        }
    }
    return 5;
}
