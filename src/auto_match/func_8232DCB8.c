typedef struct Reaction_8232DCB8 {
    char pad00[0xc];
    void *target; /* 0x0c */
    int pad10;    /* 0x10 */
    float chance; /* 0x14 */
    char pad18[0x34 - 0x18];
    float triggerChance; /* 0x34 */
    float delayMinimum;  /* 0x38 */
    float delayMaximum;  /* 0x3c */
    float timerMinimum;  /* 0x40 */
    float timerStep;     /* 0x44 */
    char pad48[0x60 - 0x48];
    float timer;    /* 0x60 */
    int triggered;  /* 0x64 */
    float delay;    /* 0x68 */
    int lastPlayer; /* 0x6c */
} Reaction_8232DCB8;

extern unsigned int lbl_83265A28;

extern int fn_82520780(unsigned int *seed, float chance);
extern void fn_8232C5F0(void *target, int flag, float chance);

static __forceinline float RandomUnit(unsigned int *seed)
{
    union {
        unsigned int bits;
        float value;
    } random;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    random.bits = *seed & 0x7fffff | 0x3f800000;
    return random.value - 1.0f;
}

static __forceinline float RandomRange(unsigned int *seed, float minimum, float maximum)
{
    return (maximum - minimum) * RandomUnit(seed) + minimum;
}

static __forceinline float Max(float x, float y)
{
    return x - y >= 0.0f ? x : y;
}

static __forceinline float Min(float x, float y)
{
    return x - y >= 0.0f ? y : x;
}

void fn_8232DCB8(Reaction_8232DCB8 *self, unsigned int state, int unused, int player, int active)
{
    if (active == 0) {
        /* The original tests the second state group as a range whose bounds are both 6. */
        fn_8232C5F0(self->target, state < 3 || (state >= 6 && state == 6), self->chance);
    } else {
        if ((fn_82520780(&lbl_83265A28, self->triggerChance) != 0 && self->triggered == 0) ||
            (self->lastPlayer == player && self->triggered != 0)) {
            self->triggered = 1;
            self->delay = RandomRange(&lbl_83265A28, self->delayMinimum, self->delayMaximum);
        }
        if (self->lastPlayer == player) {
            self->timer = Min(Max(self->timer - self->timerStep, self->timerMinimum), 1.0f);
        }
    }
    self->lastPlayer = player;
}
