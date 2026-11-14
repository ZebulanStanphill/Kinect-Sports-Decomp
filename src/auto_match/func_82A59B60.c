/* Reads a value (the default one for index -1) under the module's critical section, after an interlocked read that
   synchronises with the object's state word. */
typedef struct Obj_82A59B60 {
    int pad0[3];
    long state;             /* 0x0c */
    int defaultValue;       /* 0x10 */
    int values[1];          /* 0x14 */
} Obj_82A59B60;

extern char lbl_83219D50[];

extern long _InterlockedCompareExchange(long volatile *target, long exchange, long comparand);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_82A59B60(Obj_82A59B60 *self, int index, int *out)
{
    _InterlockedCompareExchange(&self->state, 0, 0);
    RtlEnterCriticalSection(lbl_83219D50 + 0x54);
    if (index == -1)
        *out = self->defaultValue;
    else
        *out = self->values[index];
    RtlLeaveCriticalSection(lbl_83219D50 + 0x54);
    return 0;
}
