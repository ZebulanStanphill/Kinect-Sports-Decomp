typedef struct Lock_82813A10 {
    long state;                 /* 0x0 */
    char cs[0x1c];              /* 0x4: RTL_CRITICAL_SECTION */
} Lock_82813A10;

long _InterlockedExchangeAdd(long volatile *addend, long value);
void RtlEnterCriticalSection(void *cs);
extern void fn_82813610(Lock_82813A10 *lock);

void fn_82813A10(Lock_82813A10 *lock)
{
    RtlEnterCriticalSection(lock->cs);
    if ((_InterlockedExchangeAdd(&lock->state, 0x10000) & 0xffff) != 0) {
        fn_82813610(lock);
    }
}
