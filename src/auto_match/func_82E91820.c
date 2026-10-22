typedef struct Node {
    struct Node *next;
    void *data;
} Node;

typedef struct Queue {
    Node *head;
    Node *tail;
    Node *freeHead;
    Node *freeTail;
    int count;
} Queue;

typedef struct Owner {
    char pad[0xc];
    Queue *q;
} Owner;

extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82E916B0(Queue *q);
extern void fn_82F17D48(void *p);



static void *Queue_pop(Queue *q)
{
    Node *n;
    void *d;
    n = q->head;
    q->head = n->next;
    if (q->head == 0)
        q->tail = 0;
    d = n->data;
    n->next = q->freeHead;
    q->freeHead = n;
    if (q->freeTail == 0)
        q->freeTail = n;
    q->count--;
    return d;
}
void fn_82E91820(Owner *o)
{
    Queue *q;
    void *d;
    q = o->q;
    if (q != 0) {
        if (q->count > 0) {
            d = Queue_pop(q);
            while (d != 0) {
                fn_82F17D48(d);
                if (d != 0)
                    fn_8265C990(d, 0x248c8000);
                q = o->q;
                if (q->count <= 0) break;
                d = Queue_pop(q);
            }
        }

        q = o->q;
        if (q != 0) {
            fn_82E916B0(q);
            fn_8265C990(q, 0x248c8000);
            o->q = 0;
        }
    }
}
