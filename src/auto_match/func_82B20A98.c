typedef struct Key_82B20A98 {
    unsigned int a; /* 0x0 */
    int b;          /* 0x4 */
    unsigned int c; /* 0x8 */
} Key_82B20A98;

typedef struct Node_82B20A98 {
    unsigned int prev;     /* 0x0 */
    unsigned int next;     /* 0x4 */
    unsigned int count;    /* 0x8 */
    unsigned int capacity; /* 0xc */
    Key_82B20A98 items[1]; /* 0x10 */
} Node_82B20A98;

static __forceinline Node_82B20A98 *First_82B20A98(Node_82B20A98 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82B20A98 *)list->next;
}

static __forceinline Node_82B20A98 *Next_82B20A98(Node_82B20A98 *n)
{
    unsigned int p = ((Node_82B20A98 *)((unsigned int)n & ~1u))->next;
    if (p & 1) {
        return 0;
    }
    return (Node_82B20A98 *)p;
}

static __forceinline unsigned char Equal_82B20A98(const Key_82B20A98 *x, const Key_82B20A98 *y)
{
    return x->a == y->a && x->b == y->b && (x->c & ~4u) == (y->c & ~4u);
}

extern void fn_82AA6648(void *, void *, unsigned int);
extern void *memmove(void *, const void *, unsigned int);

void fn_82B20A98(Node_82B20A98 *list, Key_82B20A98 key)
{
    Node_82B20A98 *n;
    unsigned int i;

    for (n = First_82B20A98(list); n != 0; n = Next_82B20A98(n)) {
        for (i = 0; i < n->count; i++) {
            if (Equal_82B20A98(&n->items[i], &key)) {
                unsigned int count = --n->count;
                if (count == 0) {
                    Node_82B20A98 *node = (Node_82B20A98 *)((unsigned int)n & ~1u);
                    ((Node_82B20A98 *)(node->next & ~1u))->prev = node->prev;
                    ((Node_82B20A98 *)(node->prev & ~1u))->prev = node->next;
                    fn_82AA6648(list, n, n->capacity * 12 + 16);
                } else if (i < count) {
                    memmove(&n->items[i], &n->items[i + 1], (count - i) * 12);
                }
                return;
            }
        }
    }
    return;
}
