typedef struct FunctionImpl_8238EBF8 FunctionImpl_8238EBF8;

typedef struct FunctionImplVtbl_8238EBF8 {
    void *slots[3];
    void (*DeleteThis)(FunctionImpl_8238EBF8 *self, unsigned char deallocate); /* 0x0c */
} FunctionImplVtbl_8238EBF8;

struct FunctionImpl_8238EBF8 {
    FunctionImplVtbl_8238EBF8 *vtbl;
};

typedef struct Function_8238EBF8 {
    char space[0x10];            /* 0x00 */
    FunctionImpl_8238EBF8 *impl; /* 0x10 */
    int pad14;                   /* 0x14 */
} Function_8238EBF8;

typedef struct Queue_8238EBF8 {
    int allocator;           /* 0x00 */
    Function_8238EBF8 **map; /* 0x04 */
    unsigned int mapSize;    /* 0x08 */
    unsigned int offset;     /* 0x0c */
    unsigned int size;       /* 0x10 */
} Queue_8238EBF8;

typedef struct Events_8238EBF8 {
    char pad0[0x28];
    Function_8238EBF8 onStart; /* 0x28 */
    char pad40[0xc0 - 0x40];
    Function_8238EBF8 onStop; /* 0xc0 */
    char padD8[0x168 - 0xd8];
    Function_8238EBF8 onPause; /* 0x168 */
    char pad180[0x1d8 - 0x180];
    Function_8238EBF8 onResume; /* 0x1d8 */
    char pad1F0[0x268 - 0x1f0];
    Function_8238EBF8 onFinish; /* 0x268 */
} Events_8238EBF8;

typedef struct Listener_8238EBF8 {
    Function_8238EBF8 handlers[5]; /* 0x00 */
    Events_8238EBF8 *events;       /* 0x78 */
    Queue_8238EBF8 pending;        /* 0x7c */
} Listener_8238EBF8;

extern void fn_82329730(Function_8238EBF8 *self, Function_8238EBF8 *other);
extern void fn_82359C18(Function_8238EBF8 *self);

static __forceinline int QueueEmpty(Queue_8238EBF8 *queue)
{
    return queue->size == 0;
}

static __forceinline void QueuePopFront(Queue_8238EBF8 *queue)
{
    if (!QueueEmpty(queue)) {
        fn_82359C18(queue->map[queue->offset]);
        if (queue->mapSize <= ++queue->offset) {
            queue->offset = 0;
        }
        if (--queue->size == 0) {
            queue->offset = 0;
        }
    }
}

static __forceinline void ResetFunction(Function_8238EBF8 *function)
{
    Function_8238EBF8 empty;

    empty.impl = 0;
    fn_82329730(function, &empty);
    fn_82359C18(&empty);
}

static __forceinline void ClearFunction(Function_8238EBF8 *function)
{
    if (function->impl != 0) {
        function->impl->vtbl->DeleteThis(function->impl, function->impl != (FunctionImpl_8238EBF8 *)function);
        function->impl = 0;
    }
    function->impl = 0;
}

void fn_8238EBF8(Listener_8238EBF8 *self)
{
    if (!QueueEmpty(&self->pending)) {
        QueuePopFront(&self->pending);
    }
    ResetFunction(&self->events->onStart);
    ResetFunction(&self->events->onStop);
    ResetFunction(&self->events->onPause);
    ResetFunction(&self->events->onResume);
    ResetFunction(&self->events->onFinish);
    ClearFunction(&self->handlers[0]);
    ClearFunction(&self->handlers[1]);
    ClearFunction(&self->handlers[2]);
    ClearFunction(&self->handlers[3]);
    ClearFunction(&self->handlers[4]);
}
