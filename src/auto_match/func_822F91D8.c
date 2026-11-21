extern float lbl_821CA45C[2];
extern unsigned int lbl_83265A28;

typedef struct Tuning_822F91D8 {
    char pad0[0x83c];
    float *values; /* 0x83C */
    char pad840[0x4];
    int level; /* 0x844 */
} Tuning_822F91D8;

typedef struct Object_822F91D8 {
    char pad0[0x4];
    Tuning_822F91D8 *tuning; /* 0x04 */
} Object_822F91D8;

static __forceinline unsigned int NextRandom(void)
{
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    return lbl_83265A28;
}

static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    random.bits = (NextRandom() & 0x7fffff) | 0x3f800000;
    return random.value - lbl_821CA45C[1];
}

static __forceinline float Lerp(float from, float to, float t)
{
    return from + (to - from) * t;
}

float fn_822F91D8(Object_822F91D8 *self)
{
    float low = self->tuning->values[self->tuning->level + 0x23];
    float high = self->tuning->values[self->tuning->level + 0x28];
    float result = Lerp(low, high, RandomUnit());

    return (int)NextRandom() > 0 ? result : -result;
}
