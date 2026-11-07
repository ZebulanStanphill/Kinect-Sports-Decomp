typedef struct Owner_82D21DA0 {
    int pad[5];
    unsigned int refs[4];
} Owner_82D21DA0;

typedef struct Node_82D21DA0 {
    struct Node_82D21DA0 *next;
    struct Node_82D21DA0 *prev;
    int pad[3];
    unsigned int refs[3];
} Node_82D21DA0;

typedef struct List_82D21DA0 {
    int pad[3];
    Node_82D21DA0 *head;
    int count;
} List_82D21DA0;

typedef struct Mgr_82D21DA0 {
    char pad[0x20];
    List_82D21DA0 list;
} Mgr_82D21DA0;

extern void fn_82D2B688(List_82D21DA0 *list, Node_82D21DA0 *node);

static __forceinline Owner_82D21DA0 *refPtr(unsigned int v)
{
    return (Owner_82D21DA0 *)(v & ~3u);
}

static __forceinline void clearRef(unsigned int *slot)
{
    unsigned int v = *slot;
    if (refPtr(v) != 0) {
        refPtr(v)->refs[v & 3] = 0;
    }
    *slot = 0;
}

void fn_82D21DA0(Mgr_82D21DA0 *mgr, Node_82D21DA0 *node)
{
    List_82D21DA0 *list;
    Node_82D21DA0 *next;
    Node_82D21DA0 *prev;

    clearRef(&node->refs[0]);
    clearRef(&node->refs[1]);
    clearRef(&node->refs[2]);

    list = &mgr->list;
    next = node->next;
    prev = node->prev;
    if (next != 0) {
        next->prev = prev;
    }
    if (prev != 0) {
        prev->next = next;
    } else {
        list->head = next;
    }
    list->count--;
    fn_82D2B688(list, node);
}
