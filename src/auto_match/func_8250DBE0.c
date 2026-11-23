typedef struct Tween_827F4868 {
    unsigned char pad0[0x22];
    unsigned short curve; /* 0x22 */
    float target;         /* 0x24 */
    float range;          /* 0x28 */
    float duration;       /* 0x2c */
    float elapsed;        /* 0x30 */
} Tween_827F4868;

typedef struct FloatVector_8250DBE0 {
    int allocator;
    float *first;
    float *last;
    float *end;
} FloatVector_8250DBE0;

typedef struct Fader_8250DBE0 {
    Tween_827F4868 tween; /* 0x00 */
    char pad34[0xdc - 0x34];
    unsigned char flags; /* 0xdc */
    char padDD[0xe4 - 0xdd];
    FloatVector_8250DBE0 values;  /* 0xe4 */
    FloatVector_8250DBE0 targets; /* 0xf4 */
    char pad104[0x108 - 0x104];
    float rate; /* 0x108 */
} Fader_8250DBE0;

extern float fn_827F4868(Tween_827F4868 *self);

void fn_8250DBE0(Fader_8250DBE0 *self, float dt)
{
    float value;
    float maxStep;
    float delta;
    float *target;
    float *current;
    float *last;

    self->tween.elapsed += dt;
    value = fn_827F4868(&self->tween);
    maxStep = dt / self->rate;
    target = self->targets.first;
    last = self->targets.last;
    current = self->values.first;
    while (target != last) {
        delta = *target - *current;
        delta = delta - -maxStep >= 0.0f ? delta : -maxStep;
        delta = delta - maxStep >= 0.0f ? maxStep : delta;
        *current = delta + *current;
        target++;
        current++;
    }
    self->flags = (self->flags & ~0x20) | ((unsigned char)(value == self->tween.target) << 5);
}
