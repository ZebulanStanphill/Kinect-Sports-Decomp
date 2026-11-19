typedef struct Node_82B83718 {
    char pad0[0x8];
    unsigned int flags; /* 0x08 */
    char padc[0x8];
    unsigned int order : 29; /* 0x14 */
    unsigned int low : 3;
    char pad18[0x10];
    unsigned int next; /* 0x28, bit 0 tags the list end */
} Node_82B83718;

typedef struct List_82B83718 {
    unsigned int f0;
    unsigned int first; /* bit 0 tags an empty list */
} List_82B83718;

typedef struct Owner_82B83718 {
    char pad0[0x10];
    List_82B83718 lists[3]; /* 0x10 */
} Owner_82B83718;

static __forceinline unsigned int Untag(unsigned int link)
{
    if ((link & 1) == 0) {
        return link;
    } else {
        return 0;
    }
}

void fn_82B83718(void *self, Owner_82B83718 *owner)
{
    unsigned int order = 1;
    List_82B83718 *list;
    unsigned int node;

    if ((owner->lists[0].first & 1) != 0) {
        if ((owner->lists[1].first & 1) != 0) {
            list = &owner->lists[2];
            node = list->first;
        } else {
            list = &owner->lists[1];
            node = list->first;
        }
    } else {
        list = &owner->lists[0];
        node = list->first;
    }
    node = Untag(node);
    while (node != 0) {
        Node_82B83718 *n = (Node_82B83718 *)node;

        n->order = order;
        n->flags |= 0x40000000;
        if (order < 0x1fffffff) {
            order++;
        }
        node = ((Node_82B83718 *)(node & ~1))->next;
        if ((node & 1) != 0 || node == 0) {
            if (list == &owner->lists[2]) {
                return;
            }
            if (list != &owner->lists[1] && (owner->lists[1].first & 1) == 0) {
                list = &owner->lists[1];
                node = list->first;
            } else {
                list = &owner->lists[2];
                node = list->first;
            }
            if ((node & 1) != 0) {
                return;
            }
        }
    }
}
