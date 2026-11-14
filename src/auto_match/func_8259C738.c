#define __lwsync() __emit(0x7C2004AC)

long _InterlockedDecrement(long volatile *addend);
long _InterlockedExchange(long volatile *target, long value);
long _InterlockedExchangeAdd(long volatile *addend, long value);

typedef struct Lock_8259C738 {
    long owner;
    long count;
    long event;
    long waiters;
} Lock_8259C738;

extern long fn_8259C7E8(Lock_8259C738 *self);
extern int fn_82A1E810(long event);

static __forceinline unsigned char Release(Lock_8259C738 *self)
{
    unsigned char result = 1;
    if (_InterlockedDecrement(&self->count) != 0)
        result = 0;
    return result;
}

void fn_8259C738(Lock_8259C738 *self)
{
    if (Release(self)) {
        __lwsync();
        _InterlockedExchange(&self->owner, 0);
        __lwsync();
        if (_InterlockedExchangeAdd(&self->waiters, 0) > 0)
            fn_82A1E810(fn_8259C7E8(self));
    }
}
