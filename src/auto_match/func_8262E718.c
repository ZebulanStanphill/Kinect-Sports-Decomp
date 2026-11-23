typedef struct Range_8262E718 {
    float min; /* 0x00 */
    float max; /* 0x04 */
    int pad8;
    float value;        /* 0x0c */
    unsigned int flags; /* 0x10 */
} Range_8262E718;

static __forceinline float Clamp(float value, float low, float high)
{
    return value - high >= 0.0f ? high : (value - low >= 0.0f ? value : low);
}

static __forceinline void Wrap(float *value, float min, const Range_8262E718 *range)
{
    float *cursor = value;
    float step;

    if (*cursor < min) {
        step = range->max - min;
        do {
            *cursor += step;
        } while (*cursor < range->min);
    }
}

void fn_8262E718(Range_8262E718 *self)
{
    float min;
    float result;

    if (self->flags & 4) {
        self->flags = (self->flags & ~3) | 1;
        self->value = self->min - self->value + self->min;
        result = Clamp(self->value, self->min, self->max);
    } else {
        min = self->min;
        if (self->flags & 8) {
            Wrap(&self->value, min, self);
            self->value = Clamp(self->value, min, self->max);
            return;
        }
        self->flags &= 2;
        result = min;
    }
    self->value = result;
}
