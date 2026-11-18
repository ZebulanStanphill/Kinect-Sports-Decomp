typedef struct VideoMode_8262EB18 {
    int pal;     /* 0x0 */
    int force60; /* 0x4 */
} VideoMode_8262EB18;

typedef struct Range_8262EB18 {
    float min;   /* 0x0 */
    float max;   /* 0x4 */
    float value; /* 0x8 */
} Range_8262EB18;

extern VideoMode_8262EB18 lbl_8326F968;
extern const float lbl_8218E8E8[5];

static __forceinline int Is50Hz(void)
{
    return lbl_8326F968.pal != 0 && lbl_8326F968.force60 == 0;
}

/* Sets the range's value, clamped to half a second's worth of frames times the range's span. */
void fn_8262EB18(Range_8262EB18 *range, float value)
{
    float span = range->max - range->min;
    float limit;

    range->value = value;
    limit = (float)(Is50Hz() ? 50 : 60) * lbl_8218E8E8[0] * span;
    if (value > limit) {
        range->value = limit;
    }
}
