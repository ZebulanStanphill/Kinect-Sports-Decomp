typedef struct Range_8262E850 {
    float minimum;      /* 0x00 */
    float maximum;      /* 0x04 */
    float unknown08;    /* 0x08 */
    float value;        /* 0x0C */
    unsigned int flags; /* 0x10 */
} Range_8262E850;

static __forceinline float Select(float test, float positive, float negative)
{
    return test >= 0.0f ? positive : negative;
}

void fn_8262E850(Range_8262E850 *range)
{
    float maximum;
    float value;

    if (range->flags & 4) {
        maximum = range->maximum;
        range->flags = (range->flags & ~3) | 2;
        range->value = maximum - (range->value - maximum);
        value = Select(range->value - maximum, maximum,
                       Select(range->value - range->minimum, range->value, range->minimum));
    } else {
        maximum = range->maximum;
        if (range->flags & 8) {
            while (range->value > range->maximum) {
                range->value -= range->maximum - range->minimum;
            }
            value = Select(range->value - maximum, maximum,
                           Select(range->value - range->minimum, range->value, range->minimum));
        } else {
            range->flags &= 1;
            value = maximum;
        }
    }
    range->value = value;
}
