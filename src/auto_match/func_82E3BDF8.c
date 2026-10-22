typedef struct {
    void **buckets;
    unsigned int size;
    void *count;
} Table;

typedef struct {
    void *node;
    int index;
} Iter;

int fn_82E3BDF8(Table *t, Iter *it)
{
    unsigned int i;
    it->node = 0;
    it->index = 0;
    if (t->buckets != 0 && t->count != 0) {
        for (i = 0; i < t->size >> 1; i++) {
            if (t->buckets[i] != 0) {
                it->index = 0;
                it->node = t->buckets[i];
                return 1;
            }
        }
    }
    return 0;
}
