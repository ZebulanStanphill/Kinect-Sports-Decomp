long _InterlockedCompareExchange(long volatile *target, long exchange, long compare);
void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7C2004AC)

typedef struct CriticalSection_82F61BE8 {
    unsigned char bytes[0x1c];
} CriticalSection_82F61BE8;

typedef struct Lock_82F61BE8 {
    long busy;                     /* 0x00 */
    long owner;                    /* 0x04 */
    long position;                 /* 0x08 */
    long length;                   /* 0x0c */
    unsigned int start;            /* 0x10 */
    unsigned int size;             /* 0x14 */
    unsigned int f18;              /* 0x18 */
    unsigned int f1c;              /* 0x1c */
    unsigned int f20;              /* 0x20 */
    unsigned int f24;              /* 0x24 */
    unsigned int f28;              /* 0x28 */
    unsigned int tag;              /* 0x2c */
    CriticalSection_82F61BE8 lock; /* 0x30 */
    unsigned char pad4c[0x4];
    void *buffer; /* 0x50 */
} Lock_82F61BE8;

extern unsigned int fn_82A1BB18(void);
extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern int RtlInitializeCriticalSectionAndSpinCount(CriticalSection_82F61BE8 *section,
                                                    unsigned int spinCount);

int fn_82F61BE8(Lock_82F61BE8 *self, unsigned int count, unsigned int first, unsigned int second)
{
    int hr;
    long thread;
    long previous;
    unsigned int total;

    if (count < 1 || first < 1 || second < 1) {
        return 0x82240403;
    }
    hr = 0;
    thread = fn_82A1BB18();
    previous = _InterlockedCompareExchange(&self->busy, thread, 0);
    __lwsync();
    if (previous == 0) {
        previous = _InterlockedCompareExchange(&self->owner, thread, 0);
        __lwsync();
        if (previous == 0) {
            if (self->buffer == 0) {
                total = first + second;
                self->tag = 0x64004000;
                self->buffer = fn_8265C940(total * count, 0x64004000);
                if (self->buffer == 0) {
                    self->f20 = 0;
                    self->f24 = 0;
                    hr = 0x82240402;
                    self->f28 = 0;
                } else {
                    self->f20 = first;
                    self->f24 = total;
                    self->f28 = count;
                    RtlInitializeCriticalSectionAndSpinCount(&self->lock, 0x1000);
                }
                self->position = 0;
                self->f18 = 0;
                self->f1c = 0;
                self->start = 0;
                self->size = 0;
                self->length = 0;
            } else {
                hr = 0x82240404;
            }
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
