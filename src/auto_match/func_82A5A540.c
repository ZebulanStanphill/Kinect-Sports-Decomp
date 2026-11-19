typedef struct Event_82A5A540 {
    int reserved00;
    int signaled; /* 0x04 */
} Event_82A5A540;

typedef struct Worker_82A5A540 {
    char reserved00[0xc];
    void *thread; /* 0x0c */
    int reserved10;
    void *started;         /* 0x14 */
    Event_82A5A540 *state; /* 0x18 */
    char reserved1c[8];
    char lock[0x1c]; /* 0x24 */
} Worker_82A5A540;

extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern int KeWaitForSingleObject(void *object, int reason, int mode, int alertable, void *timeout);
extern void *fn_82A1E0C0(void *attributes, unsigned int stackSize, void *start, void *param,
                         unsigned int flags, void *threadId);
extern int fn_82A1E508(void *thread, unsigned int processor);
extern int fn_82A1E338(void *thread, int priority);
extern int fn_82A1E2C0(void *thread);
extern int fn_82A1F470(void);
extern void fn_82A4AE20(Worker_82A5A540 *self);
extern int fn_82A59D40(void *param);

int fn_82A5A540(Worker_82A5A540 *self, int keepRunning, int priority, unsigned int processorMask, int unused,
                unsigned int stackSize)
{
    int hr;
    void *lock = self->lock;
    unsigned int processor;
    void *thread;
    int error;

    RtlEnterCriticalSection(lock);
    hr = 0;
    self->state->signaled = 0;
    thread = fn_82A1E0C0(0, stackSize, fn_82A59D40, self, 4, 0);
    self->thread = thread;
    if (thread != 0) {
        switch (processorMask) {
        case 1:
            processor = 0;
            break;
        case 2:
            processor = 1;
            break;
        case 4:
            processor = 2;
            break;
        case 8:
            processor = 3;
            break;
        default:
            processor = ((processorMask == 0x10) ^ 1) + 4;
            break;
        }
        fn_82A1E508(thread, processor);
        fn_82A1E338(self->thread, priority);
        fn_82A1E2C0(self->thread);
        KeWaitForSingleObject(self->started, 3, 1, 0, 0);
        if (keepRunning == 0) {
            fn_82A4AE20(self);
        }
    } else {
        error = fn_82A1F470();
        hr = error <= 0 ? error : (error & 0xffff) | 0x80070000;
    }
    RtlLeaveCriticalSection(lock);
    return hr;
}
