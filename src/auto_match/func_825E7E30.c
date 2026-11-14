#define __sync() __emit(0x7C0004AC)

typedef struct List_825E7E30 {
    int f0;
    int f4;
    int f8;
} List_825E7E30;

typedef struct Queue_825E7E30 {
    int id;                 /* 0xc */
    List_825E7E30 list;     /* 0x10 */
} Queue_825E7E30;

typedef struct Worker_825E7E30 {
    void *event;            /* 0x0 */
    long lock;              /* 0x4 */
    void *owner;            /* 0x8 */
    Queue_825E7E30 queue;   /* 0xc */
    int pad1c;
} Worker_825E7E30;

typedef struct Self_825E7E30 {
    int pad0;
    char workers[0xc];      /* 0x4 */
} Self_825E7E30;

extern long _InterlockedExchange(long volatile *target, long value);
extern void fn_82536690(void *vec, Worker_825E7E30 **item);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);

static __forceinline void List_init(List_825E7E30 *l)
{
    l->f0 = 0;
    l->f4 = 0;
    l->f8 = 0;
}

static __forceinline void Queue_init(Queue_825E7E30 *q)
{
    q->id = -1;
    List_init(&q->list);
}

static __forceinline Worker_825E7E30 *Worker_init(Worker_825E7E30 *w, void *owner)
{
    w->owner = owner;
    w->event = fn_82A1E6A0(0, 1, 0, 0);
    _InterlockedExchange(&w->lock, 0);
    __sync();
    return w;
}

void fn_825E7E30(Self_825E7E30 *self)
{
    Worker_825E7E30 *w;
    Worker_825E7E30 *mem = (Worker_825E7E30 *)fn_8265C9E0(0x20);
    if (mem != 0) {
        Worker_init(mem, self);
        w = mem;
        Queue_init(&mem->queue);
    } else {
        w = 0;
    }
    fn_82536690(self->workers, &w);
}
