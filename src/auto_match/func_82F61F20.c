long _InterlockedCompareExchange(long volatile *target, long exchange, long compare);
void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock_82F61F20 {
    long busy;          /* 0x00 */
    long owner;         /* 0x04 */
    long position;      /* 0x08 */
    long length;        /* 0x0c */
    unsigned int start; /* 0x10 */
    unsigned int size;  /* 0x14 */
    unsigned int f18;   /* 0x18 */
    unsigned int f1c;   /* 0x1c */
} Lock_82F61F20;

extern unsigned int fn_82A1BB18(void);

int fn_82F61F20(Lock_82F61F20 *self)
{
    int hr = 0;
    long thread = fn_82A1BB18();
    long previous;

    previous = _InterlockedCompareExchange(&self->busy, thread, 0);
    __lwsync();
    if (previous == 0) {
        previous = _InterlockedCompareExchange(&self->owner, thread, 0);
        __lwsync();
        if (previous == 0) {
            self->position = 0;
            self->f18 = 0;
            self->f1c = 0;
            self->start = 0;
            self->size = 0;
            self->length = 0;
            __lwsync();
            _InterlockedCompareExchange(&self->owner, 0, thread);
        } else {
            hr = 0x82240401;
        }
        __lwsync();
        _InterlockedCompareExchange(&self->busy, 0, thread);
    } else {
        hr = 0x82240400;
    }
    return hr;
}
