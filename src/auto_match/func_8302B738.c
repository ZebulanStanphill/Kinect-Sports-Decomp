typedef struct Node_8302B738 {
    int value;
    unsigned int key;
    struct Node_8302B738 *next;
} Node_8302B738;

typedef struct Table_8302B738 {
    Node_8302B738 *buckets[31];
    int count;                   /* 0x7c */
} Table_8302B738;

Node_8302B738 *fn_8302B738(Table_8302B738 *t, unsigned int key)
{
    unsigned int i = key % 31;
    Node_8302B738 *n = t->buckets[i];
    Node_8302B738 *prev = 0;
    while (n != 0) {
        if (n->key == key) {
            if (prev != 0)
                prev->next = n->next;
            else
                t->buckets[i] = n->next;
            t->count--;
            return n;
        }
        prev = n;
        n = n->next;
    }
    return n;
}
