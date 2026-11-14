long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Obj_8281F2F0 {
    int f0;
    long signaled;
    void *event;
} Obj_8281F2F0;

extern int fn_82A1E810(void *handle);
extern int fn_82A1E658(void *handle);

void fn_8281F2F0(Obj_8281F2F0 *self)
{
    void *event = self->event;

    if (event != 0) {
        if ((void *)_InterlockedCompareExchange((long volatile *)&self->event, 0, (long)event) != event) event = 0;
    }
    __lwsync();
    if (_InterlockedCompareExchange(&self->signaled, 1, 0) == 0) {
        if (event == 0) {
            return;
        }
        fn_82A1E810(event);
    }
    if (event != 0) {
        fn_82A1E658(event);
    }
}
