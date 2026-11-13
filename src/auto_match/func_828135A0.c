/* Releases a held read lock: drops one reader from the lock word and signals the
   writer event when the reader count reaches zero, then clears the holder. */
typedef struct Lock_828135A0 {
    long state;                 /* 0x0 */
    char cs[0x1c];              /* 0x4: RTL_CRITICAL_SECTION */
    void *event;                /* 0x20 */
} Lock_828135A0;

typedef struct Holder_828135A0 {
    Lock_828135A0 *lock;
    int owned;
} Holder_828135A0;

long _InterlockedDecrement(long volatile *addend);
extern void fn_82A1E810(void *event);

void fn_828135A0(Holder_828135A0 *self)
{
    Lock_828135A0 *lock = self->lock;

    if (lock != 0) {
        if ((_InterlockedDecrement(&lock->state) & 0xffff) == 0) {
            fn_82A1E810(lock->event);
        }
        self->lock = 0;
        self->owned = 0;
    }
}
