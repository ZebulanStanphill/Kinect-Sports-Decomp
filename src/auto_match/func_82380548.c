typedef union Timer_82380548 {
    float seconds;
    unsigned int bits;
} Timer_82380548;

typedef struct Self_82380548 {
    char pad0[0xa4];
    float repeatDelay; /* 0xa4 */
    char padA8[0x1fc - 0xa8];
    Timer_82380548 timerB;      /* 0x1fc */
    Timer_82380548 timerA;      /* 0x200 */
    Timer_82380548 repeatTimer; /* 0x204 */
    char pad208[0x20c - 0x208];
    int repeats; /* 0x20c */
} Self_82380548;

static __forceinline void Countdown(float *timer, float dt)
{
    float remaining = *timer - dt;

    *timer = -remaining >= 0.0f ? 0.0f : remaining;
}

static __forceinline int ClampInt(int value, int low, int high)
{
    value = value < low ? low : value;
    return value < high ? value : high;
}

/* Runs the timers down by dt and starts the next repeat when the repeat timer has expired. */
void fn_82380548(Self_82380548 *self, float dt)
{
    if (self->timerA.bits != 0) {
        Countdown(&self->timerA.seconds, dt);
    }
    if (self->timerB.bits != 0) {
        Countdown(&self->timerB.seconds, dt);
    }
    if (self->repeatTimer.bits != 0) {
        Countdown(&self->repeatTimer.seconds, dt);
    }
    if (self->repeats > 0 && self->repeatTimer.seconds <= 0.0f) {
        self->repeats = ClampInt(self->repeats - 1, 0, self->repeats);
        self->repeatTimer.seconds = self->repeatDelay;
    }
}
