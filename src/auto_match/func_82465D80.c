typedef struct Tuning_82465D80 {
    char pad00[0x1c];
    unsigned int count; /* 0x1c */
    char pad20[0x78 - 0x20];
    char event[0xbc - 0x78]; /* 0x78 */
    float interval;          /* 0xbc */
} Tuning_82465D80;

typedef union TimerValue_82465D80 {
    float value;
    unsigned int bits;
} TimerValue_82465D80;

typedef struct Pattern_82465D80 {
    char pad00[0x10];
    char sub10[0xcc - 0x10]; /* 0x10 */
    void *owner;             /* 0xcc */
    char padD0[0xe8 - 0xd0];
    TimerValue_82465D80 timer; /* 0xe8 */
    int pattern;               /* 0xec */
} Pattern_82465D80;

extern Tuning_82465D80 lbl_831D3858;

extern int fn_824656C8(int min, int max, int current);
extern void fn_82465390(void *owner, void *sub);
extern void fn_82270AC0(void *event);
extern void fn_824660C0(Pattern_82465D80 *self, unsigned int index, int notify);

void fn_82465D80(Pattern_82465D80 *self, float dt)
{
    Tuning_82465D80 *tuning = &lbl_831D3858;
    float edge = (float)tuning->count * 0.25f;

    if (self->timer.bits != 0) {
        float remaining = self->timer.value - dt;

        remaining = -remaining >= 0.0f ? 0.0f : remaining;
        self->timer.value = remaining;
        if (remaining == 0.0f) {
            unsigned int i;

            self->pattern = fn_824656C8(1, 5, self->pattern);
            fn_82465390(self->owner, self->sub10);
            fn_82270AC0(tuning->event);
            switch (self->pattern) {
            case 1:
            case 2:
                for (i = 0; i < tuning->count; i++) {
                    if ((i & 1) == (unsigned int)(self->pattern == 1))
                        fn_824660C0(self, i, 0);
                }
                break;
            case 3:
                for (i = 0; i < tuning->count; i++) {
                    if ((float)i < edge || (float)(tuning->count - i - 1) < edge)
                        fn_824660C0(self, i, 0);
                }
                break;
            case 4:
                for (i = 0; i < tuning->count; i++) {
                    if ((float)i >= edge && (float)(tuning->count - i - 1) >= edge)
                        fn_824660C0(self, i, 0);
                }
                break;
            }
            self->timer.value = tuning->interval;
        }
    }
}
