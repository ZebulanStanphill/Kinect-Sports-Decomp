#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock_82F61A28 {
    long owner;             /* 0x00 */
    int pad4;
    int a;                  /* 0x08 */
    int b;                  /* 0x0c */
    int pad10[2];
    int savedA;             /* 0x18 */
    int savedB;             /* 0x1c */
} Lock_82F61A28;

extern long _InterlockedCompareExchange(long volatile *target, long exchange, long comparand);
extern long fn_82A1BB18(void);

long fn_82F61A28(Lock_82F61A28 *self, int *out)
{
    long hr = 0;
    long prev = _InterlockedCompareExchange(&self->owner, fn_82A1BB18(), 0);

    __lwsync();
    if (prev == 0) {
        self->savedB = self->b;
        self->savedA = self->a;
        *out = self->b;
    } else {
        hr = 0x82240400;
    }
    return hr;
}
