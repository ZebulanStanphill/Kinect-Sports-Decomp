long _InterlockedCompareExchange(long volatile *target, long exchange, long compare);
long _InterlockedExchange(long volatile *target, long value);
void __emit(unsigned int instruction);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Lock_82F62180 {
    unsigned char pad0[4];
    long owner;         /* 0x04 */
    long position;      /* 0x08 */
    long length;        /* 0x0c */
    unsigned int start; /* 0x10 */
    unsigned int size;  /* 0x14 */
    unsigned char pad18[8];
    unsigned int limit; /* 0x20 */
    unsigned char pad24[0x28];
    unsigned int handle; /* 0x4c */
} Lock_82F62180;

extern unsigned int fn_82A1BB18(void);

int fn_82F62180(Lock_82F62180 *self, unsigned int handle)
{
    int hr;
    long thread;
    unsigned int length;
    unsigned int position;

    if (handle == 0) {
        return 0x82240403;
    }
    hr = 0;
    thread = fn_82A1BB18();
    if (_InterlockedCompareExchange(&self->owner, 0, 0) == thread) {
        if (handle == self->handle) {
            __lwsync();
            position = self->start;
            length = self->size;
            if (length > self->limit) {
                length = self->limit;
            }
            _InterlockedExchange(&self->position, position);
            _InterlockedExchange(&self->length, length);
            self->handle = 0;
        } else {
            hr = 0x82240403;
        }
        __lwsync();
        _InterlockedCompareExchange(&self->owner, 0, thread);
    } else {
        hr = 0x82240401;
    }
    return hr;
}
