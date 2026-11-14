typedef struct Tween_8262E990 {
    float low, high, rate, value;
    unsigned int flags;
} Tween_8262E990;

extern Tween_8262E990 *fn_8262E718(Tween_8262E990 *self);
extern Tween_8262E990 *fn_8262E850(Tween_8262E990 *self);

float fn_8262E990(Tween_8262E990 *self, float delta)
{
    if (self->flags & 2) {
        self->value = -(self->rate * delta - self->value);
        if (self->value < self->low)
            self = fn_8262E718(self);
    } else if (self->flags & 1) {
        self->value = self->rate * delta + self->value;
        if (self->value > self->high)
            self = fn_8262E850(self);
    }
    return self->value;
}
