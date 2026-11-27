typedef struct Lock_82A4BEF8 Lock_82A4BEF8;

typedef struct LockVtbl_82A4BEF8 {
    void *slots00[2];
    void (*Lock)(Lock_82A4BEF8 *self); /* 0x08 */
    void *slots0c[2];
    void (*Unlock)(Lock_82A4BEF8 *self); /* 0x14 */
} LockVtbl_82A4BEF8;

struct Lock_82A4BEF8 {
    LockVtbl_82A4BEF8 *vt;
};

typedef struct Pool_82A4BEF8 {
    unsigned char data[0xdc];
} Pool_82A4BEF8;

typedef struct Queue_82A4BEF8 {
    int head;           /* 0x0 */
    int tail;           /* 0x4 */
    Pool_82A4BEF8 pool; /* 0x8 */
} Queue_82A4BEF8;

typedef struct Owner_82A4BEF8 {
    void *vt;
    char pad04[8];
    char request[0xc];  /* 0x0c */
    int ready;          /* 0x18 */
    Lock_82A4BEF8 lock; /* 0x1c */
    char pad20[0x24];
    void *reader;          /* 0x44 */
    void *writer;          /* 0x48 */
    Queue_82A4BEF8 *queue; /* 0x4c */
    int context;           /* 0x50 */
} Owner_82A4BEF8;

extern char lbl_83219D50[];
extern void *fn_82A3FF60(void *heap, unsigned int size, unsigned int tag, int flags);
extern void *fn_82A59970(void *self, int a, int b);
extern void fn_82A5A1A8(Pool_82A4BEF8 *pool);
extern int fn_82A4B9B0(Queue_82A4BEF8 *self, int count);
extern void *fn_82A5AA58(void *self, int a, int b, void *request, void *reader, Queue_82A4BEF8 *queue);
extern int fn_82A5A720(void *self);
extern void fn_82A4BB80(Owner_82A4BEF8 *self);

static __forceinline Queue_82A4BEF8 *Queue_Construct(Queue_82A4BEF8 *self)
{
    self->head = 0;
    self->tail = 0;
    fn_82A5A1A8(&self->pool);
    return self;
}

int fn_82A4BEF8(Owner_82A4BEF8 *self, int a, int b, int context)
{
    Lock_82A4BEF8 *lock = &self->lock;
    int hr;
    void *memory;

    lock->vt->Lock(lock);
    self->context = context;
    memory = fn_82A3FF60(lbl_83219D50, 0x22c, 0x20970006, 0);
    self->reader = memory ? fn_82A59970(memory, a, b) : 0;
    if (self->reader == 0) {
        goto oom;
    }
    memory = fn_82A3FF60(lbl_83219D50, 0xe4, 0x20970006, 0);
    self->queue = memory ? Queue_Construct((Queue_82A4BEF8 *)memory) : 0;
    if (self->queue == 0) {
        goto oom;
    }
    hr = fn_82A4B9B0(self->queue, 4);
    if (hr < 0) {
        goto fail;
    }
    memory = fn_82A3FF60(lbl_83219D50, 0x2b0, 0x20970006, 0);
    self->writer = memory ? fn_82A5AA58(memory, a, b, self->request, self->reader, self->queue) : 0;
    if (self->writer == 0) {
    oom:
        hr = 0x8007000E;
    } else {
        hr = fn_82A5A720(self->writer);
        if (hr >= 0) {
            self->ready = 1;
            goto done;
        }
    }
fail:
    fn_82A4BB80(self);
done:
    lock->vt->Unlock(lock);
    return hr;
}
