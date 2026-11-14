long _InterlockedIncrement(long volatile *p);

typedef struct Task_82521A10 {
    char pad0[0xd8];
    unsigned char started;
    char pad_d9[0x11c - 0xd9];
    int queued;
} Task_82521A10;

typedef struct Job_82521A10 {
    Task_82521A10 *task;
    int state;
    int arg;
    int refs;
    int next;
} Job_82521A10;

typedef struct Sched_82521A10 {
    char pad0[0xa0];
    long pending;
} Sched_82521A10;

extern unsigned char fn_828EA610(Task_82521A10 *task);
extern void fn_82521AB0(Task_82521A10 *task);
extern void *fn_82522D98(unsigned int size);
extern void fn_8259C2A0(Task_82521A10 *task, int flags, Job_82521A10 *job);

void fn_82521A10(Sched_82521A10 *self, Task_82521A10 *task, int arg)
{
    if (task->started == 0 && fn_828EA610(task) == 0) {
        Job_82521A10 *job;
        task->queued = 1;
        _InterlockedIncrement(&self->pending);
        fn_82521AB0(task);
        job = (Job_82521A10 *)fn_82522D98(sizeof(Job_82521A10));
        job->task = task;
        job->state = 0;
        job->arg = arg;
        job->refs = 1;
        fn_8259C2A0(task, 0, job);
    }
}
