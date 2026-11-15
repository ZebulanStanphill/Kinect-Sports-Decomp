typedef struct Pair_824DC918 {
    float time;
    float delta;
} Pair_824DC918;

typedef struct Timer_824DC918 {
    Pair_824DC918 *begin; /* 0x00 */
    Pair_824DC918 *end;   /* 0x04 */
    char pad08[8];
    float total;   /* 0x10 */
    float average; /* 0x14 */
    char pad18[4];
    float time; /* 0x1c */
} Timer_824DC918;

extern void fn_824BF8A8(Timer_824DC918 *self, const Pair_824DC918 *sample);

void fn_824DC918(Timer_824DC918 *self, float delta)
{
    Pair_824DC918 sample;
    sample.time = self->time;
    sample.delta = delta;
    fn_824BF8A8(self, &sample);
    self->total += delta;
    self->average = self->total / (float)(unsigned int)(self->end - self->begin);
}
