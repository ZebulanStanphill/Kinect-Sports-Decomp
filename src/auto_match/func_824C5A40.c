
typedef union TimerValue_824C5A40 {
    unsigned int bits;
    float seconds;
} TimerValue_824C5A40;

typedef struct Timer_824C5A40 {
    char padding[32];
    TimerValue_824C5A40 value;
} Timer_824C5A40;

void fn_824C5A40(Timer_824C5A40 *self, float elapsed)
{
    if (self->value.bits != 0) {
        float remaining = self->value.seconds - elapsed;
        self->value.seconds = -remaining >= 0.0f ? 0.0f : remaining;
    }
}
