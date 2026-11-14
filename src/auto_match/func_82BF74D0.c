typedef struct Node_82BF74D0 {
    int pad0[2];
    unsigned int key;
    int padc;
    struct Node_82BF74D0 *next;
    unsigned int hash;
} Node_82BF74D0;
typedef struct Table_82BF74D0 {
    int pad0[2];
    Node_82BF74D0 **buckets;
    unsigned int bucketCount;
} Table_82BF74D0;

/* find the node for key; also returns its hash and bucket index */
Node_82BF74D0 *fn_82BF74D0(Table_82BF74D0 *table, unsigned int *key, unsigned int *bucket, unsigned int *hash)
{
    Node_82BF74D0 *node;
    *hash = *key >> 4;
    *bucket = *hash % table->bucketCount;
    if (table->buckets == 0)
        return 0;
    for (node = table->buckets[*bucket]; node != 0; node = node->next) {
        if (node->hash == *hash && node->key == *key)
            return node;
    }
    return 0;
}
