typedef struct Job_83089070 {
    unsigned char type;
    char pad1[0xf];
    void *semaphore; /* 0x10 */
    int *remaining;  /* 0x14 */
    char pad18[4];
    long *completed; /* 0x1c */
    char pad20[0x18];
    int work; /* 0x38 */
} Job_83089070;

extern long _InterlockedExchangeAdd(long volatile *target, long amount);
extern void fn_82CFBB08(void *semaphore, int amount);

static __forceinline void Increment(long *completed)
{
    if (completed)
        _InterlockedExchangeAdd(completed, 1);
}

int fn_83089070(void *thread, void *queue, Job_83089070 *job)
{
    unsigned char type = job->type;
    int *remaining = job->remaining;
    switch (type) {
    case 3:
        if (--*remaining != 0)
            return 1;
        Increment(job->completed);
        break;
    case 4:
        if (--*remaining != 0)
            return 1;
        Increment(job->completed);
        break;
    case 0:
        if (--*remaining != 0)
            return 1;
        Increment(job->completed);
        break;
    case 1:
        if (--*remaining != 0)
            return 1;
        Increment(job->completed);
        break;
    case 2:
        *remaining += job->work - 1000000;
        if (*remaining != 0)
            return 1;
        Increment(job->completed);
        break;
    case 5:
        if (--*remaining != 0)
            return 1;
        Increment(job->completed);
        break;
    default:
        return 1;
    }
    if (job->semaphore)
        fn_82CFBB08(job->semaphore, 1);
    return 1;
}
