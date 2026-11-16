typedef struct Node_82ACB930 {
    unsigned int prev;     /* 0x0 */
    unsigned int next;     /* 0x4 */
    unsigned int count;    /* 0x8 */
    unsigned int capacity; /* 0xc */
    unsigned int items[1]; /* 0x10 */
} Node_82ACB930;

static __forceinline Node_82ACB930 *First_82ACB930(Node_82ACB930 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82ACB930 *)list->next;
}

static __forceinline Node_82ACB930 *Next_82ACB930(Node_82ACB930 *n)
{
    unsigned int p = ((Node_82ACB930 *)((unsigned int)n & ~1u))->next;
    if (p & 1) {
        return 0;
    }
    return (Node_82ACB930 *)p;
}

extern void fn_82AA6648(void *, void *, unsigned int);
extern void *memmove(void *, const void *, unsigned int);

void fn_82ACB930(Node_82ACB930 *list, unsigned int key)
{
    Node_82ACB930 *n;
    unsigned int i;

    for (n = First_82ACB930(list); n != 0; n = Next_82ACB930(n)) {
        for (i = 0; i < n->count; i++) {
            if (n->items[i] == key) {
                unsigned int count = --n->count;
                if (count == 0) {
                    Node_82ACB930 *node = (Node_82ACB930 *)((unsigned int)n & ~1u);
                    ((Node_82ACB930 *)(node->next & ~1u))->prev = node->prev;
                    ((Node_82ACB930 *)(node->prev & ~1u))->prev = node->next;
                    fn_82AA6648(list, n, (n->capacity + 4) * 4);
                } else if (i < count) {
                    memmove(&n->items[i], &n->items[i + 1], (count - i) * 4);
                }
                return;
            }
        }
    }
    return;
}
