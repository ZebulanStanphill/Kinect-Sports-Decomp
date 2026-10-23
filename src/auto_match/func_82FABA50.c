typedef struct Node {
    struct Node *next;
    int f4[4];
    void *res;
    int f18;
} Node;

typedef struct Pool {
    Node *head;
    Node *tail;
    Node *freeList;
    unsigned int count;
    int f10;
    int used;
    Node *base;
    void *alloc;
} Pool;

extern void fn_82FA5190(void *a, Node *n);
extern void fn_82FA9208(void *r);

void fn_82FABA50(Pool *pool, Node *n, Node *prev)
{
    unsigned char outside;

    if (n == pool->head) {
        pool->head = n->next;
    } else {
        prev->next = n->next;
    }
    if (n == pool->tail) {
        pool->tail = prev;
    }
    outside = n < pool->base || n >= pool->base + pool->count;
    if (outside) {
        if (n->res != 0) {
            fn_82FA9208(n->res);
            n->res = 0;
        }
        fn_82FA5190(pool->alloc, n);
    } else {
        n->next = pool->freeList;
        pool->freeList = n;
    }
    pool->used--;
}
