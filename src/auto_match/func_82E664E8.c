/* Writer lock acquire (the counterpart of the reader lock fn_82E66440): waits while a writer holds the lock, sets the
   writer-waiting bit, and takes the lock (bit 31) once no readers are left. */
#define __lwsync() __emit(0x7C2004AC)
long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Lock_82E664E8 {
    long state;
} Lock_82E664E8;

extern void fn_82A1E108(unsigned int ms);

void fn_82E664E8(Lock_82E664E8 *lock)
{
    for (;;) {
        long state = lock->state;
        long next;
        if ((state & 0x80000000) != 0) {
            fn_82A1E108(10);
            continue;
        }
        next = state | 0x40000000;
        if ((state & 0x3fffffff) == 0)
            next |= 0x80000000;
        if (next == state)
            continue;
        if (_InterlockedCompareExchange(&lock->state, next, state) == state) {
            __lwsync();
            if ((next & 0x80000000) != 0)
                break;
        }
    }
}
