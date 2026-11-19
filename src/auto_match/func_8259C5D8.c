long _InterlockedCompareExchange(long volatile *target, long exchange, long compare);
long _InterlockedExchangeAdd(long volatile *target, long value);
long _InterlockedIncrement(long volatile *target);
long _InterlockedDecrement(long volatile *target);
void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Mutex_8259C5D8 {
    long owner;     /* 0x0 */
    long recursion; /* 0x4 */
    long event;     /* 0x8 */
    long waiters;   /* 0xc */
} Mutex_8259C5D8;

extern long fn_8259C7E8(Mutex_8259C5D8 *mutex);
extern int fn_82A1E300(void);
extern int fn_82A1E650(long handle, unsigned int timeout);

void fn_8259C5D8(Mutex_8259C5D8 *mutex, unsigned int spinCount, unsigned long thread)
{
    unsigned int count = spinCount + 1;
    unsigned char acquired = 0;
    unsigned long previous;

    do {
        while (count != 0) {
            count--;
            previous = _InterlockedCompareExchange(&mutex->owner, thread, 0);
            if (previous == 0) {
                acquired = 1;
                _InterlockedIncrement(&mutex->recursion);
                break;
            }
            if (previous == thread) {
                _InterlockedIncrement(&mutex->recursion);
                acquired = 1;
                break;
            }
            if (count == 0) {
                break;
            }
            fn_82A1E300();
        }
        if (!acquired) {
            _InterlockedIncrement(&mutex->waiters);
            __lwsync();
            if ((unsigned long)_InterlockedExchangeAdd(&mutex->owner, 0) != 0) {
                fn_82A1E650(fn_8259C7E8(mutex), 0xffffffff);
            }
            _InterlockedDecrement(&mutex->waiters);
            count = 1;
        }
    } while (!acquired);
    __lwsync();
}
