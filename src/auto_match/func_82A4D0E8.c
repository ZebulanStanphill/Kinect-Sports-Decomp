long _InterlockedCompareExchange(long volatile *target, long exchange, long compare);
void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Sample_82A4D0E8 {
    unsigned int words[3]; /* 0x00 */
} Sample_82A4D0E8;

typedef struct Buffer_82A4D0E8 {
    char pad[0x28];             /* 0x00 */
    Sample_82A4D0E8 samples[2]; /* 0x28 */
    long active;                /* 0x40 */
    int reserved;               /* 0x44 */
    unsigned int index;         /* 0x48 */
    int reserved4c;             /* 0x4c */
    int available;              /* 0x50 */
} Buffer_82A4D0E8;

void fn_82A4D0E8(Buffer_82A4D0E8 *self, Sample_82A4D0E8 *output)
{
    if (self->available == 1) {
        long previous;
        do {
            previous = _InterlockedCompareExchange(&self->active, (long)&self->samples[self->index ^ 1],
                                                   (long)&self->samples[self->index]);
            __lwsync();
            if (previous == -1) {
                __emit(0x7FFFFB78);
            }
        } while (previous == -1);
        self->index ^= 1;
    }
    {
        Sample_82A4D0E8 *sample = &self->samples[self->index ^ 1];
        *output = *sample;
    }
    self->available = 0;
}
