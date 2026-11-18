typedef struct Node_82B20868 {
    unsigned int prev;      /* tagged link */
    unsigned int next;      /* tagged link; bit 0 set = end of list */
    unsigned int count;
} Node_82B20868;

static __forceinline Node_82B20868 *First_82B20868(Node_82B20868 *list)
{
    if (list->next & 1) {
        return 0;
    }
    return (Node_82B20868 *)list->next;
}

static __forceinline Node_82B20868 *Next_82B20868(Node_82B20868 *n)
{
    unsigned int p = ((Node_82B20868 *)((unsigned int)n & ~1u))->next;
    if (p & 1) {
        return 0;
    }
    return (Node_82B20868 *)p;
}

int fn_82B20868(Node_82B20868 *list)
{
    Node_82B20868 *n = First_82B20868(list);

    if (n == 0) {
        return 0;
    }
    if (n->count > 1) {
        return 0;
    }
    if (Next_82B20868(n) != 0) {
        return 0;
    }
    return 1;
}
