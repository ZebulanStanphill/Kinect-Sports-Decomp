#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock_82E66318 {
    long locked;
    int count;
    unsigned int owner;
} Lock_82E66318;

extern long _InterlockedCompareExchange(long volatile *target, long exchange, long comparand);
extern unsigned int fn_82A1BB18(void);
extern void fn_82A1E108(unsigned int ms);

void fn_82E66318(Lock_82E66318 *lock)
{
    unsigned int wait = 1;

    for (;;) {
        if (lock->owner == fn_82A1BB18()) {
            lock->count++;
            return;
        }
        if (lock->locked != 0) {
            fn_82A1E108(wait);
            wait <<= 1;
            if (wait > 100) {
                wait = 100;
            }
        }
        if (_InterlockedCompareExchange(&lock->locked, 1, 0) == 0) {
            break;
        }
    }
    __lwsync();
    lock->count = 1;
    lock->owner = fn_82A1BB18();
}
