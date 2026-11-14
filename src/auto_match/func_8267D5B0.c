#define __lwsync() __emit(0x7C2004AC)
long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

long fn_8267D5B0(long volatile *value, long bits)
{
    long old;
    long next;
    long prev;

    do {
        old = *value;
        next = old | bits;
        __lwsync();
        prev = _InterlockedCompareExchange(value, next, old);
        __lwsync();
    } while (prev != old);
    return next;
}
