#define __lwsync() __emit(0x7C2004AC)

extern long _InterlockedExchangeAdd(long *addend, long value);
void *memcpy(void *dst, const void *src, unsigned int size);

extern long lbl_831E79A4;
extern unsigned int lbl_8329F804;

typedef struct Log_82A5D160 {
    char pad[0x44];
    unsigned int last;
    unsigned int repeats;
} Log_82A5D160;

void fn_82A5D160(Log_82A5D160 *self, const void *data)
{
    unsigned int old;

    if ((unsigned int)lbl_831E79A4 == 0x1800)
        return;
    old = _InterlockedExchangeAdd(&lbl_831E79A4, 0x1800);
    if (old != 0) {
        if (old - self->last == 0x1800)
            self->repeats = self->repeats + 1;
        else
            self->repeats = 1;
        self->last = old;
        if (self->repeats <= 14) {
            memcpy((void *)old, data, 0x1800);
            __lwsync();
        }
    } else {
        self->last = lbl_8329F804;
    }
}
