typedef struct Timer_824A58A8 {
    char pad0[0x50];
    float start;
    int pad54;
    float current;
    int elapsed;
} Timer_824A58A8;

int fn_824A58A8(Timer_824A58A8 *self)
{
    self->current = self->start;
    self->elapsed = 0;
    return 0;
}
