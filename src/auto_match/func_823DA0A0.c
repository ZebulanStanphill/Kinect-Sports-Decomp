typedef struct FuncImpl_823DA0A0 FuncImpl_823DA0A0;

typedef struct FuncImplVtbl_823DA0A0 {
    void *slot0;
    void (*call)(FuncImpl_823DA0A0 *self);
} FuncImplVtbl_823DA0A0;

struct FuncImpl_823DA0A0 {
    FuncImplVtbl_823DA0A0 *vt;
};

/* tr1::function<void ()> */
typedef struct Function_823DA0A0 {
    char space[0x10];
    FuncImpl_823DA0A0 *impl;
    int pad14;
} Function_823DA0A0;

typedef struct Event_823DA0A0 {
    int id;
    int arg;
    float time;
} Event_823DA0A0;

typedef struct Queue_823DA0A0 {
    Event_823DA0A0 *data;
    unsigned int count;
    unsigned int pos;
} Queue_823DA0A0;

typedef struct Player_823DA0A0 Player_823DA0A0;

typedef struct PlayerVtbl_823DA0A0 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*fire)(Player_823DA0A0 *self, int id, int arg);
} PlayerVtbl_823DA0A0;

struct Player_823DA0A0 {
    PlayerVtbl_823DA0A0 *vt;
    Queue_823DA0A0 queue;           /* 0x04 */
    char pad10[4];
    Function_823DA0A0 *handlers;    /* 0x14 */
    float time;                     /* 0x18 */
};

extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline Event_823DA0A0 *Peek(Queue_823DA0A0 *q)
{
    if (q->pos < q->count)
        return &q->data[q->pos];
    return 0;
}

static __forceinline void Advance(Queue_823DA0A0 *q)
{
    unsigned int next = q->pos + 1;
    q->pos = next < q->count ? next : q->count;
}

static __forceinline void Call(Function_823DA0A0 *f)
{
    if (f->impl == 0)
        fn_82F63108();
    f->impl->vt->call(f->impl);
}

void fn_823DA0A0(Player_823DA0A0 *self, float dt)
{
    Queue_823DA0A0 *queue;
    Event_823DA0A0 *e;

    self->time = dt + self->time;
    queue = &self->queue;
    for (;;) {
        e = Peek(queue);
        if (e == 0 || !(self->time > e->time))
            break;
        self->vt->fire(self, e->id, e->arg);
        if (self->handlers[e->id].impl != 0)
            Call(&self->handlers[e->id]);
        Advance(queue);
    }
}
