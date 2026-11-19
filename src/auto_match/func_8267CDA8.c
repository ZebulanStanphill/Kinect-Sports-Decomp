typedef struct Waiter_8267CDA8 {
    void *event;                  /* 0x0 */
    struct Waiter_8267CDA8 *next; /* 0x4 */
    struct Waiter_8267CDA8 *prev; /* 0x8 */
} Waiter_8267CDA8;

typedef struct WaitQueue_8267CDA8 {
    char criticalSection[0x1c]; /* 0x0 */
    Waiter_8267CDA8 *freeList;  /* 0x1c */
    Waiter_8267CDA8 *head;      /* 0x20 */
    Waiter_8267CDA8 *tail;      /* 0x24 */
} WaitQueue_8267CDA8;

typedef struct MutexImpl_8267CDA8 {
    void *handle;            /* 0x0 */
    unsigned char recursive; /* 0x4 */
    unsigned int lockCount;  /* 0x8 */
} MutexImpl_8267CDA8;

typedef struct Mutex_8267CDA8 {
    char pad0[0x10];
    MutexImpl_8267CDA8 *impl; /* 0x10 */
} Mutex_8267CDA8;

extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern Waiter_8267CDA8 *fn_8267CD28(WaitQueue_8267CDA8 *queue);
extern void fn_8267C9A0(WaitQueue_8267CDA8 *queue, Waiter_8267CDA8 *waiter);
extern void fn_8267C950(WaitQueue_8267CDA8 *queue, Waiter_8267CDA8 *waiter);
extern void fn_8267C838(MutexImpl_8267CDA8 *impl);
extern void fn_8267EE78(Mutex_8267CDA8 *mutex);
extern void fn_82A2A790(void *handle);
extern void fn_82A2A618(void *handle, int count, int previous);
extern unsigned int fn_82A1E650(void *event, int timeout);

int fn_8267CDA8(WaitQueue_8267CDA8 *self, Mutex_8267CDA8 *mutex, int timeout)
{
    int result = 0;
    unsigned int lockCount = mutex->impl->lockCount;
    Waiter_8267CDA8 *waiter;
    MutexImpl_8267CDA8 *impl;
    unsigned int status;
    unsigned int i;

    if (lockCount == 0) {
        return 0;
    }
    RtlEnterCriticalSection(self);
    waiter = fn_8267CD28(self);
    if (self->tail != 0) {
        waiter->prev = self->tail;
        self->tail->next = waiter;
        waiter->next = 0;
    } else {
        waiter->prev = 0;
        waiter->next = 0;
        self->head = waiter;
    }
    self->tail = waiter;
    RtlLeaveCriticalSection(self);
    impl = mutex->impl;
    if (impl->recursive) {
        impl->lockCount = 0;
        for (i = 0; i < lockCount; i++) {
            fn_82A2A790(mutex->impl->handle);
        }
    } else {
        impl->lockCount = 0;
        fn_82A2A618(mutex->impl->handle, 1, 0);
    }
    fn_8267EE78(mutex);
    status = fn_82A1E650(waiter->event, timeout == -1 ? -1 : timeout);
    RtlEnterCriticalSection(self);
    if (status == 0 || status == 0x80) {
        result = 1;
    } else {
        fn_8267C9A0(self, waiter);
    }
    fn_8267C950(self, waiter);
    RtlLeaveCriticalSection(self);
    for (i = 0; i < lockCount; i++) {
        fn_8267C838(mutex->impl);
    }
    return result;
}
