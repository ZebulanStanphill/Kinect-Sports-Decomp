typedef struct Fader_824A2040 {
    char padding[0xd4];
    int useDirect; /* 0xd4 */
    int visible;   /* 0xd8 */
    float alpha;   /* 0xdc */
} Fader_824A2040;

extern void fn_824A2128(Fader_824A2040 *self);
extern void fn_827F4058(Fader_824A2040 *self);

static __forceinline float Select_824A2040(float condition, float a, float b)
{
    return condition >= 0.0f ? a : b;
}

void fn_824A2040(Fader_824A2040 *self, float elapsed)
{
    float target;
    float delta;
    float step;

    if (self->useDirect != 0) {
        fn_824A2128(self);
    } else {
        fn_827F4058(self);
    }
    if (self->visible != 0) {
        target = 1.0f;
    } else {
        target = 0.0f;
    }
    delta = target - self->alpha;
    step = elapsed * 2.0f;
    delta = Select_824A2040(delta - -step, delta, -step);
    delta = Select_824A2040(delta - step, step, delta);
    self->alpha = delta + self->alpha;
}
