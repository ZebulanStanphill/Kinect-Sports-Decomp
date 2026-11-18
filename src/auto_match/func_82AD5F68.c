typedef struct Node_82AD5F68 {
    unsigned int prev;      /* tagged link */
    unsigned int next;      /* tagged link; bit 0 set = end of list */
    unsigned int count;
    unsigned int capacity;
} Node_82AD5F68;

extern void fn_82AA6648(void *list, void *node, unsigned int size);

static __forceinline Node_82AD5F68 *First_82AD5F68(Node_82AD5F68 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82AD5F68 *)list->next;
}

void fn_82AD5F68(Node_82AD5F68 *list)
{
    Node_82AD5F68 *n;
    Node_82AD5F68 *next;

    for (n = First_82AD5F68(list); n != 0; n = next) {
        Node_82AD5F68 *node = (Node_82AD5F68 *)((unsigned int)n & ~1u);
        unsigned int p = node->next;
        next = (p & 1) == 0 ? (Node_82AD5F68 *)p : 0;
        ((Node_82AD5F68 *)(node->next & ~1u))->prev = node->prev;
        ((Node_82AD5F68 *)(node->prev & ~1u))->prev = node->next;
        fn_82AA6648(list, n, n->capacity * 0x24 + 0x10);
    }
}
