typedef struct Node_83014FE0 {
    struct Node_83014FE0 *next;
    unsigned int key;
} Node_83014FE0;

typedef struct Table_83014FE0 {
    int unk0;
    Node_83014FE0 *buckets[31];
} Table_83014FE0;

typedef struct Iter_83014FE0 {
    Node_83014FE0 **buckets;
    unsigned int index;
    Node_83014FE0 *node;
    Node_83014FE0 *prev;
} Iter_83014FE0;

void fn_83014FE0(Iter_83014FE0 *it, Table_83014FE0 *table, unsigned int key)
{
    unsigned int index;

    it->buckets = table->buckets;
    it->prev = 0;
    index = key % 31;
    it->index = index;
    it->node = table->buckets[index];
    while (it->node != 0) {
        Node_83014FE0 *n = it->node;
        if (n->key == key) {
            return;
        }
        {
            Node_83014FE0 *next = n->next;
            it->prev = n;
            it->node = next;
        }
    }
}
