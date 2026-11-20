typedef struct Item_823A74D8 {
    unsigned int start; /* 0x0 */
    int end;            /* 0x4 */
} Item_823A74D8;

typedef struct Node_823A74D8 Node_823A74D8;

struct Node_823A74D8 {
    Node_823A74D8 *next; /* 0x0 */
    Node_823A74D8 *prev; /* 0x4 */
    Item_823A74D8 *item; /* 0x8 */
    void *rep;           /* 0xc */
};

typedef struct List_823A74D8 {
    Node_823A74D8 *head; /* 0x0 */
    unsigned int size;   /* 0x4 */
} List_823A74D8;

typedef struct Owner_823A74D8 {
    char pad00[0x1c];
    List_823A74D8 list; /* 0x1c */
} Owner_823A74D8;

typedef struct Ref_823A74D8 {
    Item_823A74D8 *item; /* 0x0 */
    void *rep;           /* 0x4 */
} Ref_823A74D8;

extern void fn_822315A0(void *rep);
extern unsigned char fn_8223AAC0(void *rep);
extern void fn_8265CA20(void *block);

static __forceinline void Assign(Ref_823A74D8 *ref, Item_823A74D8 *item, void *rep)
{
    void **slot = &ref->rep;
    void *old = *slot;

    *slot = rep;
    ref->item = item;
    if (old != 0) {
        fn_822315A0(old);
    }
}

static __forceinline void Release(Ref_823A74D8 *ref)
{
    if (ref->rep != 0) {
        fn_822315A0(ref->rep);
    }
}

static __forceinline void Reset(Ref_823A74D8 *ref)
{
    Ref_823A74D8 old;

    old.rep = ref->rep;
    ref->rep = 0;
    old.item = ref->item;
    ref->item = 0;
    Release(&old);
}

/* Takes the first queued item when it covers exactly [start, end]; otherwise returns an empty reference. */
Ref_823A74D8 *fn_823A74D8(Ref_823A74D8 *result, Owner_823A74D8 *owner, unsigned int start, int end)
{
    List_823A74D8 *list;
    Node_823A74D8 *first;
    Node_823A74D8 *node;
    Item_823A74D8 *lockedItem;
    Item_823A74D8 *item;
    void *lockedRep;
    void *rep;

    result->item = 0;
    result->rep = 0;
    if (owner->list.size != 0) {
        list = &owner->list;
        first = list->head->next;
        lockedItem = first->item;
        lockedRep = first->rep;
        item = 0;
        rep = 0;
        if (lockedRep != 0 && fn_8223AAC0(lockedRep)) {
            rep = lockedRep;
            item = lockedItem;
        }
        Assign(result, item, rep);
        if (result->item->start == start && result->item->end == end) {
            node = list->head->next;
            if (node != list->head) {
                node->prev->next = node->next;
                node->next->prev = node->prev;
                if (node->rep != 0) {
                    fn_822315A0(node->rep);
                }
                fn_8265CA20(node);
                list->size = list->size - 1;
            }
        } else {
            Reset(result);
        }
    }
    return result;
}
