typedef struct Node_82FF52D8 {
    struct Node_82FF52D8 *next;
    int value;
    unsigned int key;
} Node_82FF52D8;

typedef struct Table_82FF52D8 {
    void *allocator;
    Node_82FF52D8 *buckets[31];  /* 0x4 */
    int count;                   /* 0x80 */
} Table_82FF52D8;

extern void fn_82FA5190(void *allocator, void *p);

void fn_82FF52D8(Table_82FF52D8 *t, unsigned int key)
{
    unsigned int i = key % 31;
    Node_82FF52D8 *n = t->buckets[i];
    Node_82FF52D8 *prev = 0;
    while (n != 0) {
        if (n->key == key) {
            if (prev != 0)
                prev->next = n->next;
            else
                t->buckets[i] = n->next;
            fn_82FA5190(t->allocator, n);
            t->count--;
            return;
        }
        prev = n;
        n = n->next;
    }
}
