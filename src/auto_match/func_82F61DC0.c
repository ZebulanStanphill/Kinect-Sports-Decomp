long _InterlockedCompareExchange(long volatile *target, long exchange, long compare);
void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock_82F61DC0 {
    long busy;          /* 0x00 */
    long owner;         /* 0x04 */
    long position;      /* 0x08 */
    long length;        /* 0x0c */
    unsigned int start; /* 0x10 */
    unsigned int size;  /* 0x14 */
    unsigned int f18;   /* 0x18 */
    unsigned int f1c;   /* 0x1c */
    unsigned int f20;   /* 0x20 */
    unsigned int f24;   /* 0x24 */
    unsigned int f28;   /* 0x28 */
    unsigned int tag;   /* 0x2c */
    unsigned char pad30[0x20];
    void *buffer; /* 0x50 */
} Lock_82F61DC0;

extern unsigned int fn_82A1BB18(void);
extern void fn_8265C990(void *p, unsigned int tag);

int fn_82F61DC0(Lock_82F61DC0 *self)
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
            if (self->buffer != 0) {
                fn_8265C990(self->buffer, self->tag);
                self->buffer = 0;
            }
            self->position = 0;
            self->f20 = 0;
            self->f24 = 0;
            self->f28 = 0;
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
