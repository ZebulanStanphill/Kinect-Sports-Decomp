typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    void *self;
} Sentinel;

typedef struct {
    char buf[0xc4];
    Node *nodes;
    Sentinel sentinel;
    Node *last;
    Node *head;
    Node *free;
} Pool;

void fn_827F1BE8(Pool *p)
{
    Node *n;
    Node *first;
    Node *last;
    int i;

    n = (Node *)((unsigned int)p + 3 & ~3u);
    p->nodes = n;
    p->sentinel.self = &p->sentinel;
    for (i = 0; i < 16; i++) {
        n->prev = n - 1;
        n->next = n + 1;
        n++;
    }
    first = p->nodes;
    last = first + 15;
    p->last = last;
    p->head = first;
    first->prev = p->sentinel.self;
    last->next = p->sentinel.self;
    p->free = p->nodes;
}
