typedef struct QNode {
    struct QNode *next;
    void *data;
} QNode;

typedef struct Queue {
    QNode *head;
    QNode *tail;
    QNode *freeList;
    QNode *freeTail;
    int count;
} Queue;

typedef struct Item {
    int pad[3];
    void *a;
    void *b;
    void *c;
} Item;

typedef struct Owner {
    int pad[3];
    Queue *q;
} Owner;

extern void fn_82C563B0(void *heap, void *p);
extern void fn_82CAAC48(Queue *q);

static Item *Queue_pop(Queue *q)
{
    QNode *n;
    Item *d;

    if (q == 0 || q->count <= 0)
        return 0;
    n = q->head;
    q->head = n->next;
    if (q->head == 0)
        q->tail = 0;
    d = n->data;
    n->next = q->freeList;
    q->freeList = n;
    if (q->freeTail == 0)
        q->freeTail = n;
    q->count--;
    return d;
}

void fn_82CAADA0(void *heap, Owner *o)
{
    Item *it;

    it = Queue_pop(o->q);
    while (it != 0) {
        if (it->a) {
            fn_82C563B0(heap, it->a);
            it->a = 0;
        }
        if (it->b) {
            fn_82C563B0(heap, it->b);
            it->b = 0;
        }
        if (it->c) {
            fn_82C563B0(heap, it->c);
            it->c = 0;
        }
        fn_82C563B0(heap, it);
        it = Queue_pop(o->q);
    }
    fn_82CAAC48(o->q);
    if (o->q) {
        fn_82C563B0(heap, o->q);
        o->q = 0;
    }
}
