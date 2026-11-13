typedef struct Obj_82EE9B20 {
    char pad0[0x50];
    char lock[0x28];
    char queue[0x1034];
    int busy;
} Obj_82EE9B20;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82EEA198(void *queue, int a, int b, int c);
extern void fn_82EE9850(Obj_82EE9B20 *self);

int fn_82EE9B20(Obj_82EE9B20 *self, int a, int b, int c)
{
    int hr;

    RtlEnterCriticalSection(self->lock);
    hr = fn_82EEA198(self->queue, a, b, c);
    if (hr < 0) {
        RtlLeaveCriticalSection(self->lock);
        return hr;
    }
    if (self->busy == 0) {
        fn_82EE9850(self);
    }
    RtlLeaveCriticalSection(self->lock);
    return 0;
}
