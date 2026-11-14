long _InterlockedDecrement(long volatile *);

typedef struct Stream_82C0BE40 {
    char pad0[0x34];
    unsigned int period;
    unsigned int counter;
    int pad3c[2];
    long pending;
} Stream_82C0BE40;

void fn_82C0BE40(Stream_82C0BE40 *self)
{
    if (++self->counter >= self->period)
        self->counter = 0;
    _InterlockedDecrement(&self->pending);
}
