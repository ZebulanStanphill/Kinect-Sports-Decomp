typedef struct Timer_825E4788 {
    char pad00[0x1c];
    int repeat;  /* 0x1c */
    float delay; /* 0x20 */
    char pad24[0xc];
} Timer_825E4788;

typedef struct Self_825E4788 {
    char pad00[0x34];
    float time; /* 0x34 */
    char pad38[0x40];
    int timerCount; /* 0x78 */
    char pad7C[0x24];
    Timer_825E4788 timers[1]; /* 0xa0 */
} Self_825E4788;

extern void fn_825E4220(Self_825E4788 *self, Timer_825E4788 *timer);
extern void fn_825E42D8(Self_825E4788 *self, Timer_825E4788 *timer, int flag);

void fn_825E4788(Self_825E4788 *self, float elapsed)
{
    int index;

    self->time = elapsed + self->time;
    for (index = 0; index < self->timerCount; index++) {
        if (self->timers[index].delay > 0.0f) {
            self->timers[index].delay -= elapsed;
            if (self->timers[index].delay < 0.0f) {
                if (self->timers[index].repeat != 0) {
                    fn_825E4220(self, &self->timers[index]);
                } else {
                    fn_825E42D8(self, &self->timers[index], 0);
                }
            }
        }
    }
}
