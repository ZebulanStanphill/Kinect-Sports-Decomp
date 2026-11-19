typedef struct NodeList_82ACD5F8 {
    unsigned int head;  /* 0x0 */
    unsigned int flags; /* 0x4 */
} NodeList_82ACD5F8;

typedef struct Node_82ACD5F8 {
    char pad0[0x8];
    unsigned int pad8 : 18;
    unsigned int kind : 7; /* 0x8 */
    unsigned int padKind : 7;
} Node_82ACD5F8;

typedef struct ReadyList_82ACD5F8 {
    unsigned int context; /* 0x0 */
    char body[0x24];      /* 0x4 */
} ReadyList_82ACD5F8;

typedef struct Scheduler_82ACD5F8 {
    NodeList_82ACD5F8 *nodes; /* 0x0 */
    ReadyList_82ACD5F8 ready; /* 0x4 */
    unsigned int pad2c;       /* 0x2c */
    unsigned int context;     /* 0x30 */
    unsigned int pad34;       /* 0x34 */
    void *budget;             /* 0x38 */
    Node_82ACD5F8 *current;   /* 0x3c */
    unsigned int limit;       /* 0x40 */
    unsigned int owner;       /* 0x44 */
    unsigned char failed;     /* 0x48 */
    unsigned char stopped;    /* 0x49 */
    unsigned char unlimited;  /* 0x4a */
} Scheduler_82ACD5F8;

extern void *memset(void *dst, int value, unsigned int size);
extern unsigned char fn_82ABDA10(Node_82ACD5F8 *node);
extern int fn_82ACD3D8(Scheduler_82ACD5F8 *self);
__declspec(noreturn) extern void fn_82AA66A8(unsigned int context, int code);

static __forceinline unsigned char IsSchedulable(Node_82ACD5F8 *node)
{
    return node->kind >= 0x53 && node->kind <= 0x5f;
}

static __forceinline void InitReadyList(ReadyList_82ACD5F8 *list, unsigned int context)
{
    list->context = context;
    memset(list->body, 0, 0x24);
}

Scheduler_82ACD5F8 *fn_82ACD5F8(Scheduler_82ACD5F8 *self, unsigned int owner, NodeList_82ACD5F8 *nodes,
                                void *budget, unsigned int limit, unsigned int context)
{
    Node_82ACD5F8 *first;

    self->owner = owner;
    self->nodes = nodes;
    self->budget = budget;
    self->limit = limit;
    if (nodes->flags & 1) {
        first = 0;
    } else {
        first = (Node_82ACD5F8 *)((nodes->head & ~1u) - 0x28);
    }
    self->failed = 0;
    self->current = first;
    self->stopped = 0;
    self->unlimited = 0;
    InitReadyList(&self->ready, context);
    self->context = context;
    self->pad2c = 0;
    self->pad34 = 0;
    while (self->current != 0) {
        if (!IsSchedulable(self->current) && !fn_82ABDA10(self->current)) {
            break;
        }
        if (fn_82ACD3D8(self) != 0) {
            fn_82AA66A8(context, 0x12c0);
        }
    }
    return self;
}
