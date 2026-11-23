typedef union Timer_8239FE38 {
    float value;
    unsigned int bits;
} Timer_8239FE38;

typedef struct Self_8239FE38 {
    char pad0[0x128];
    int count; /* 0x128 */
    int pad12c;
    Timer_8239FE38 refill; /* 0x130 */
    Timer_8239FE38 timerB; /* 0x134 */
    Timer_8239FE38 timerA; /* 0x138 */
} Self_8239FE38;

static __forceinline void CountDown(Timer_8239FE38 *timer, float dt)
{
    float left;

    if (timer->bits != 0) {
        left = timer->value - dt;
        timer->value = -left >= 0.0f ? 0.0f : left;
    }
}

static __forceinline float ClampF(float value, float low, float high)
{
    value = value - low >= 0.0f ? value : low;
    return value - high >= 0.0f ? high : value;
}

static __forceinline int ClampI(int value, int low, int high)
{
    if (value < low) {
        value = low;
    }
    if (value >= high) {
        value = high;
    }
    return value;
}

void fn_8239FE38(Self_8239FE38 *self, float dt)
{
    CountDown(&self->timerA, dt);
    CountDown(&self->timerB, dt);
    if (self->count > 0) {
        self->refill.value = ClampF(self->refill.value - dt, 0.0f, self->refill.value);
        if (self->refill.bits == 0) {
            self->count = ClampI(self->count - 1, 0, self->count);
            self->refill.value = 5.0f;
        }
    }
}
