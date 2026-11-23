typedef struct Owner_8261D808 {
    char pad0[0xb3c];
    float deltaTime; /* 0xb3c */
} Owner_8261D808;

typedef union Timer_8261D808 {
    float seconds;
    unsigned int bits;
} Timer_8261D808;

typedef struct Delay_8261D808 {
    Owner_8261D808 *owner; /* 0x0 */
    char pad4[0x10];
    Timer_8261D808 hold; /* 0x14 */
    Timer_8261D808 wait; /* 0x18 */
    char pad1c[0x4];
    int paused; /* 0x20 */
} Delay_8261D808;

extern void fn_82529320(Owner_8261D808 *owner, int value);

static __forceinline void Countdown(float *timer, float dt)
{
    float remaining = *timer - dt;

    *timer = -remaining >= 0.0f ? 0.0f : remaining;
}

int fn_8261D808(Delay_8261D808 *self)
{
    if (self->hold.seconds > 0.0f || self->paused != 0) {
        if (self->paused == 0 && self->hold.bits != 0) {
            Countdown(&self->hold.seconds, self->owner->deltaTime);
        }
    } else if (self->wait.bits != 0) {
        Countdown(&self->wait.seconds, self->owner->deltaTime);
        if (self->wait.seconds == 0.0f) {
            fn_82529320(self->owner, 0);
            return 1;
        }
    }
    return 0;
}
