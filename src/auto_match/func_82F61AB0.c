long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock_82F61AB0 {
    long owner;         /* 0x00 */
    int pad4[5];
    int count;          /* 0x18 */
    int recursion;      /* 0x1c */
} Lock_82F61AB0;

extern long fn_82A1BB18(void);

int fn_82F61AB0(Lock_82F61AB0 *self)
{
    int hr = 0;
    long thread = fn_82A1BB18();
    if (_InterlockedCompareExchange(&self->owner, thread, thread) == thread) {
        self->recursion = 0;
        self->count = 0;
        __lwsync();
        _InterlockedCompareExchange(&self->owner, 0, thread);
    } else {
        hr = 0x82240400;
    }
    return hr;
}
