typedef struct Node_82B208B8 {
    unsigned int prev;      /* tagged link */
    unsigned int next;      /* tagged link; bit 0 set = end of list */
    unsigned int count;
} Node_82B208B8;

static __forceinline Node_82B208B8 *First_82B208B8(Node_82B208B8 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82B208B8 *)list->next;
}

static __forceinline Node_82B208B8 *Next_82B208B8(Node_82B208B8 *n)
{
    unsigned int p = ((Node_82B208B8 *)((unsigned int)n & ~1u))->next;
    if (p & 1) {
        return 0;
    }
    return (Node_82B208B8 *)p;
}

unsigned char fn_82B208B8(Node_82B208B8 *list)
{
    Node_82B208B8 *n = First_82B208B8(list);
    int total;

    if (n == 0) {
        return 0;
    }
    total = n->count;
    n = Next_82B208B8(n);
    if (n != 0) {
        total += n->count;
        n = Next_82B208B8(n);
        if (n != 0) {
            return 0;
        }
    }
    return total == 2;
}
