#define __lwsync() __emit(0x7C2004AC)
typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern long _InterlockedIncrement(long volatile *);
extern long fn_82812380(long *count, long limit);
extern void fn_82A1E7D8(void *event);

typedef struct Lock_828133A8 {
    long count;       /* +0x0 */
    char cs[0x1c];    /* +0x4 */
    void *event;      /* +0x20 */
} Lock_828133A8;

void fn_828133A8(Lock_828133A8 *self)
{
    long count = fn_82812380(&self->count, 0x10000);
    if ((count & 0xffff0000) == 0) {
        __lwsync();
    } else {
        RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)self->cs);
        count = _InterlockedIncrement(&self->count);
        RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)self->cs);
    }
    if ((count & 0xffff) == 1)
        fn_82A1E7D8(self->event);
}
