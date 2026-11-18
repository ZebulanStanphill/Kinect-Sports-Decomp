typedef struct Lock_825E8140 {
    int depth;                                   /* 0x0 */
    int *target;                                 /* 0x4 */
    void (*release)(struct Lock_825E8140 *lock); /* 0x8 */
} Lock_825E8140;

typedef struct Waiter_825E8140 {
    void *event; /* 0x0 */
    int pad4[2];
    long signaled; /* 0xc */
} Waiter_825E8140;

typedef struct Queue_825E8140 {
    volatile int busy;       /* 0x00 */
    Waiter_825E8140 **begin; /* 0x04 */
    Waiter_825E8140 **end;   /* 0x08 */
    int padC[3];
    int mutex; /* 0x18 */
    int pad1C[3];
    long pending; /* 0x28 */
    int pad2C;
    __int64 counter; /* 0x30 */
    double started;  /* 0x38 */
    double elapsed;  /* 0x40 */
} Queue_825E8140;

extern long _InterlockedExchange(long volatile *target, long value);
extern const double lbl_821954B0[0x145];
extern Lock_825E8140 *fn_825E8220(Lock_825E8140 *lock, int *target);
extern void fn_82A1E7D8(void *event);
extern void fn_82A1E968(__int64 *counter);

void fn_825E8140(Queue_825E8140 *self)
{
    Lock_825E8140 lock;
    Waiter_825E8140 **waiter;
    double zero;

    fn_825E8220(&lock, &self->mutex);
    while (self->busy != 0) {
    }
    for (waiter = self->begin; waiter != self->end; waiter++) {
        fn_82A1E7D8((*waiter)->event);
        _InterlockedExchange(&(*waiter)->signaled, -1);
    }
    _InterlockedExchange(&self->pending, 0);
    zero = lbl_821954B0[13];
    self->started = zero;
    self->elapsed = zero;
    fn_82A1E968(&self->counter);
    lock.release(&lock);
}
