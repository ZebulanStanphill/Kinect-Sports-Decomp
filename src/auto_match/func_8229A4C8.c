typedef struct Timer_8229A4C8 {
    char pad00[0x120c];
    int state; /* 0x120c */
    char pad1210[12];

    union {
        unsigned int bits;
        float seconds;
    } remaining; /* 0x121c */
} Timer_8229A4C8;

extern void fn_8229A000(Timer_8229A4C8 *);

int fn_8229A4C8(Timer_8229A4C8 *self, float delta)
{
    if (self->state == 4 && self->remaining.bits != 0) {
        float remaining = self->remaining.seconds - delta;
        self->remaining.seconds = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->remaining.seconds == 0.0f) {
            fn_8229A000(self);
            self->state = 0;
        }
    }
    return 0;
}
