typedef struct Node_82E3E660 {
    unsigned int hash;
    char pad[12];
    unsigned short key;
    char gap[6];
    struct Node_82E3E660 *next;
} Node_82E3E660;

typedef struct Iter_82E3E660 {
    Node_82E3E660 *node, *prev;
} Iter_82E3E660;

typedef struct Table_82E3E660 {
    Node_82E3E660 **buckets;
    unsigned int capacity, count;
    int pad;
    Node_82E3E660 *free;
} Table_82E3E660;

extern void fn_82E3C690(Table_82E3E660 *, Iter_82E3E660 *, void *, void *);

int fn_82E3E660(Table_82E3E660 *self, Iter_82E3E660 *it, void *key, void *value)
{
    if (self->buckets && it->node) {
        unsigned int bucket = (it->node->key ^ it->node->hash) % (self->capacity >> 1);
        Iter_82E3E660 old = *it;
        fn_82E3C690(self, it, key, value);
        if (it->prev)
            it->prev = old.prev;
        if (old.prev)
            old.prev->next = old.node->next;
        else
            self->buckets[bucket] = old.node->next;
        {
            unsigned int *pCount = &self->count;
            (*pCount)--;
        }
        old.node->next = self->free;
        self->free = old.node;
        return 1;
    }
    return 0;
}
