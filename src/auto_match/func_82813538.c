/* Releases a held lock: drops the 0x10000 reader/writer unit from the lock word and
   leaves the critical section that follows it, then clears the holder. */
typedef struct Lock_82813538 {
    long state;                 /* 0x0 */
    char cs[0x1c];              /* 0x4: RTL_CRITICAL_SECTION */
} Lock_82813538;

typedef struct Holder_82813538 {
    Lock_82813538 *lock;
    int owned;
} Holder_82813538;

long _InterlockedExchangeAdd(long volatile *addend, long value);
void RtlLeaveCriticalSection(void *cs);

void fn_82813538(Holder_82813538 *self)
{
    Lock_82813538 *lock = self->lock;

    if (lock != 0) {
        _InterlockedExchangeAdd(&lock->state, -0x10000);
        RtlLeaveCriticalSection(lock->cs);
        self->lock = 0;
        self->owned = 0;
    }
}
