typedef struct Idle_82465408 {
    char pad0[0x28];
    int animation;  /* 0x28 */
    float timer;    /* 0x2c */
    float minimum;  /* 0x30 */
    float maximum;  /* 0x34 */
    float holdTime; /* 0x38 */
} Idle_82465408;

/* the random number generator's state */
extern unsigned int lbl_83265A28;

extern int fn_82465328(Idle_82465408 *self);
extern void fn_824651F0(Idle_82465408 *self, int *animation);

/* Returns a pseudo-random number in [0, 1). */
static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return random.value - 1.0f;
}

static __forceinline float RandomRange(float minimum, float maximum)
{
    return (maximum - minimum) * RandomUnit() + minimum;
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

static __forceinline int CountDown(float *timer, float dt)
{
    float left = *timer - dt;

    *timer = -left >= 0.0f ? 0.0f : left;
    return *timer == 0.0f;
}

void fn_82465408(Idle_82465408 *self, float dt)
{
    if (self->timer > 0.0f) {
        if (fn_82465328(self)) {
            self->timer = Max(self->timer, self->holdTime);
        } else if (*(unsigned int *)&self->timer != 0 && CountDown(&self->timer, dt)) {
            fn_824651F0(self, &self->animation);
            self->timer = RandomRange(self->minimum, self->maximum);
        }
    }
}
