extern long _InterlockedIncrement(long *);

typedef struct Counter_82C0BEA8 {
    char pad0[0x34];
    unsigned int period;    /* 0x34 */
    char pad38[4];
    unsigned int tick;      /* 0x3c */
    char pad40[4];
    long count;             /* 0x44 */
} Counter_82C0BEA8;

void fn_82C0BEA8(Counter_82C0BEA8 *self)
{
    self->tick++;
    if (self->tick >= self->period)
        self->tick = 0;
    _InterlockedIncrement(&self->count);
}
