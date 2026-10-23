extern void fn_82CE4118(void *p);
extern void fn_82D81240(void *out, unsigned int id, void *item);

typedef struct Item {
    char pad[8];
    unsigned int id;
} Item;

typedef struct {
    Item **items;
    int cap;
    int head;
    int tail;
    int count;
} Queue;

typedef struct Listener Listener;
typedef struct {
    void *pad[4];
    void (*notify)(Listener *l, Item *item);
} ListenerVt;
struct Listener {
    ListenerVt *vt;
};

typedef struct {
    char pad[0x14];
    Listener **listeners;
    int nlisteners;
    char pad2[0x50 - 0x1c];
    Queue *queue;
} Ctx;

void fn_82DEF1A0(Ctx *c, unsigned int id)
{
    char buf[8];
    while (c->queue->count != 0) {
        Queue *q = c->queue;
        Item *item = q->items[q->head];
        int i;
        q->head++;
        if (q->head == q->cap) {
            q->head = 0;
        }
        q->count--;
        for (i = c->nlisteners - 1; i >= 0; i--) {
            Listener *l = c->listeners[i];
            l->vt->notify(l, item);
        }
        if (item->id == id) {
            fn_82D81240(buf, id, item);
        }
        fn_82CE4118(item);
    }
}
