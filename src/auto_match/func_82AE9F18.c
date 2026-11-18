typedef struct Entry_82AE9F18 {
    int pad0[2];
    struct Entry_82AE9F18 *next;
} Entry_82AE9F18;

typedef struct Node_82AE9F18 {
    int pad0;
    Entry_82AE9F18 *entries;
    char pad8[0x20];
    unsigned int next;
} Node_82AE9F18;

typedef struct Owner_82AE9F18 {
    char pad0[0x14];
    unsigned int nodes;
} Owner_82AE9F18;

extern Entry_82AE9F18 lbl_83223CA8;

static __forceinline Node_82AE9F18 *First(Owner_82AE9F18 *owner)
{
    if (owner->nodes & 1) {
        return 0;
    }
    return (Node_82AE9F18 *)owner->nodes;
}

static __forceinline Node_82AE9F18 *Next(Node_82AE9F18 *node)
{
    unsigned int tagged = ((Node_82AE9F18 *)((unsigned int)node & ~1u))->next;

    if (tagged & 1) {
        return 0;
    }
    return (Node_82AE9F18 *)tagged;
}

void fn_82AE9F18(void *self, Owner_82AE9F18 *owner)
{
    Node_82AE9F18 *node;

    for (node = First(owner); node != 0; node = Next(node)) {
        Entry_82AE9F18 **link = &node->entries;
        Entry_82AE9F18 *e;

        for (e = *link; e != 0 && e != &lbl_83223CA8; e = e->next) {
            link = &e->next;
        }
        *link = 0;
    }
}
