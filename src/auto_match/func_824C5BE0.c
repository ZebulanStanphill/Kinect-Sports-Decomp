
typedef union TimerValue_824C5BE0 {
    unsigned int bits;
    float seconds;
} TimerValue_824C5BE0;

typedef struct Timer_824C5BE0 {
    char padding[8];
    TimerValue_824C5BE0 value;
} Timer_824C5BE0;

void fn_824C5BE0(Timer_824C5BE0 *self, float elapsed)
{
    if (self->value.bits != 0) {
        float remaining = self->value.seconds - elapsed;
        self->value.seconds = -remaining >= 0.0f ? 0.0f : remaining;
    }
}
