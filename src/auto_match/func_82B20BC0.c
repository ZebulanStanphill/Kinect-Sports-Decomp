typedef struct Node_82B20BC0 {
    unsigned int prev;      /* tagged link */
    unsigned int next;      /* tagged link; bit 0 set = end of list */
    unsigned int count;
    unsigned int capacity;
} Node_82B20BC0;

extern void fn_82AA6648(void *list, void *node, unsigned int size);

static __forceinline Node_82B20BC0 *First_82B20BC0(Node_82B20BC0 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82B20BC0 *)list->next;
}

void fn_82B20BC0(Node_82B20BC0 *list)
{
    Node_82B20BC0 *n;
    Node_82B20BC0 *next;

    for (n = First_82B20BC0(list); n != 0; n = next) {
        Node_82B20BC0 *node = (Node_82B20BC0 *)((unsigned int)n & ~1u);
        unsigned int p = node->next;
        next = (p & 1) == 0 ? (Node_82B20BC0 *)p : 0;
        ((Node_82B20BC0 *)(node->next & ~1u))->prev = node->prev;
        ((Node_82B20BC0 *)(node->prev & ~1u))->prev = node->next;
        fn_82AA6648(list, n, (n->capacity + 2) << 3);
    }
}
