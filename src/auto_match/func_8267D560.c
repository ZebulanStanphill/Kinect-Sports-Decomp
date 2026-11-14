#define __lwsync() __emit(0x7C2004AC)
long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

long fn_8267D560(long volatile *value, long mask)
{
    long old;
    long next;
    long prev;

    do {
        old = *value;
        next = old & mask;
        __lwsync();
        prev = _InterlockedCompareExchange(value, next, old);
        __lwsync();
    } while (prev != old);
    return next;
}
