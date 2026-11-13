long _InterlockedDecrement(long volatile *);
#define __lwsync() __emit(0x7C2004AC)

/* Recursive spin lock: lock word, recursion count, owning thread. */
typedef struct Lock_82E663D0 {
    long lock;              /* 0x00 */
    int recursion;          /* 0x04 */
    unsigned int owner;     /* 0x08 */
} Lock_82E663D0;

extern unsigned int fn_82A1BB18(void); /* current thread id */

void fn_82E663D0(Lock_82E663D0 *self)
{
    if (self->owner == fn_82A1BB18()) {
        if (--self->recursion == 0) {
            self->owner = 0;
            __lwsync();
            _InterlockedDecrement(&self->lock);
        }
    }
}
