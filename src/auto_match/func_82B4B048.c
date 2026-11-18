typedef struct Node_82B4B048 {
    unsigned int prev;      /* tagged link */
    unsigned int next;      /* tagged link; bit 0 set = end of list */
    unsigned int count;
    unsigned int capacity;
} Node_82B4B048;

extern void fn_82AA6648(void *list, void *node, unsigned int size);

static __forceinline Node_82B4B048 *First_82B4B048(Node_82B4B048 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82B4B048 *)list->next;
}

void fn_82B4B048(Node_82B4B048 *list)
{
    Node_82B4B048 *n;
    Node_82B4B048 *next;

    for (n = First_82B4B048(list); n != 0; n = next) {
        Node_82B4B048 *node = (Node_82B4B048 *)((unsigned int)n & ~1u);
        unsigned int p = node->next;
        next = (p & 1) == 0 ? (Node_82B4B048 *)p : 0;
        ((Node_82B4B048 *)(node->next & ~1u))->prev = node->prev;
        ((Node_82B4B048 *)(node->prev & ~1u))->prev = node->next;
        fn_82AA6648(list, n, (n->capacity + 4) << 2);
    }
}
