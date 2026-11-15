extern float lbl_821CA45C[2];
extern unsigned int lbl_83265A28;

typedef struct Range_822F9320 {
    char pad[0x4c];
    float low0;
    float low1;
    float high0;
    float high1;
} Range_822F9320;

typedef struct Blend_822F9320 {
    char pad[0x10];
    float amount;
} Blend_822F9320;

typedef struct State_822F9320 {
    char pad[0xc];
    Range_822F9320 *range;
    Blend_822F9320 *blend;
} State_822F9320;

static __forceinline float Random_822F9320(void)
{
    union {
        unsigned int bits;
        float value;
    } result;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    result.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return result.value - lbl_821CA45C[1];
}

float fn_822F9320(State_822F9320 *self)
{
    Range_822F9320 *range = self->range;
    float blend = self->blend->amount;
    float low = range->low0 + (range->high0 - range->low0) * blend;
    float high = range->low1 + (range->high1 - range->low1) * blend;
    return low + (high - low) * Random_822F9320();
}
