#define __lwsync() __emit(0x7C2004AC)
long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Lock_82E66440 {
    long state;
    int closed;
} Lock_82E66440;

extern void fn_82A1E108(unsigned int ms);

int fn_82E66440(Lock_82E66440 *lock)
{
    int result = 1;
    for (;;) {
        long state;
        if (lock->closed != 0) {
            result = 0;
            break;
        }
        state = lock->state;
        if ((state & 0xc0000000) != 0) {
            fn_82A1E108(10);
            continue;
        }
        if (_InterlockedCompareExchange(&lock->state, state + 1, state) == state) {
            __lwsync();
            break;
        }
    }
    return result;
}
