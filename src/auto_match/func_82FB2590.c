struct Entry_82FB2590 { unsigned int key; unsigned int value; };
struct Table_82FB2590 { char pad[0xb8]; struct Entry_82FB2590 *first; struct Entry_82FB2590 *last; int pad2[2]; unsigned int defaultKey; };

static __forceinline unsigned int *Find(struct Table_82FB2590 *self, unsigned int key)
{
    struct Entry_82FB2590 *e = self->first;
    struct Entry_82FB2590 *end = self->last;
    for (; e != end && e->key != key; e++) {
    }
    return (e != end) != 0 ? &e->value : 0;
}

int fn_82FB2590(struct Table_82FB2590 *self, unsigned int key, unsigned int *out)
{
    unsigned int *value = Find(self, key);
    unsigned int fallback;
    if (value != 0) {
        *out = *value;
        return 1;
    }
    fallback = self->defaultKey;
    value = Find(self, fallback);
    if (value != 0) {
        *out = *value;
        return 1;
    }
    *out = 0;
    return 0x39;
}
