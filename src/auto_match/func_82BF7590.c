typedef struct Node_82BF7590 {
    char pad000[8];
    unsigned int key; /* 0x08 */
    int pad00c;
    struct Node_82BF7590 *next; /* 0x10 */
    unsigned int hash;          /* 0x14 */
} Node_82BF7590;

typedef struct Table_82BF7590 {
    char pad000[8];
    Node_82BF7590 **buckets; /* 0x08 */
    unsigned int count;      /* 0x0c */
} Table_82BF7590;

extern void fn_82BF7468(Table_82BF7590 *, Node_82BF7590 *);

int fn_82BF7590(Table_82BF7590 *self, const unsigned int *key)
{
    if (self != 0 && self->buckets != 0) {
        unsigned int value = *key;
        unsigned int hash = value >> 4;
        Node_82BF7590 **link = &self->buckets[hash % self->count];
        Node_82BF7590 *node;
        for (node = *link; node != 0; node = node->next) {
            if (node->hash == hash && node->key == value) {
                *link = node->next;
                fn_82BF7468(self, node);
                return 1;
            }
            link = &node->next;
        }
    }
    return 0;
}
