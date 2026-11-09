typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Node_82D16610 {
    struct Node_82D16610 *next;
    struct Node_82D16610 *prev;
    int pad8[2];
    __vector4 v;    /* 0x10 */
    int a, b, c;    /* 0x20 */
    float d;        /* 0x2c */
    int e, f;       /* 0x30 */
} Node_82D16610;

typedef struct {
    char pad[0x800];
    Node_82D16610 *free;
    int used;
} Pool_82D16610;

typedef struct {
    Pool_82D16610 **pool;
    int ready;
    int f8;
    Node_82D16610 *head;
    int count;
} List_82D16610;

extern Pool_82D16610 *fn_82D13390(List_82D16610 *);

Node_82D16610 *fn_82D16610(List_82D16610 *l, Node_82D16610 *src)
{
    Pool_82D16610 *pool;
    Node_82D16610 *n;

    if (l->ready == 0 || (pool = *l->pool, pool->free == 0)) {
        pool = fn_82D13390(l);
    }
    n = pool->free;
    pool->free = n->next;
    pool->used++;
    n->v = src->v;
    n->a = src->a;
    n->b = src->b;
    n->c = src->c;
    n->d = src->d;
    n->e = src->e;
    n->f = src->f;
    n->prev = 0;
    n->next = l->head;
    if (l->head != 0) {
        l->head->prev = n;
    }
    l->head = n;
    l->count++;
    return n;
}
