typedef struct Key_82E3C690 {
    unsigned int id;      /* 0x00 */
    unsigned int data[3]; /* 0x04 */
    unsigned short salt;  /* 0x10 */
    unsigned short pad12; /* 0x12 */
} Key_82E3C690;

typedef struct Node_82E3C690 Node_82E3C690;

struct Node_82E3C690 {
    Key_82E3C690 key;    /* 0x00 */
    unsigned int value;  /* 0x14 */
    Node_82E3C690 *next; /* 0x18 */
};

typedef struct Table_82E3C690 {
    Node_82E3C690 **buckets; /* 0x00 */
    unsigned int capacity;   /* 0x04 */
} Table_82E3C690;

typedef struct Iterator_82E3C690 {
    Node_82E3C690 *node; /* 0x00 */
    Node_82E3C690 *prev; /* 0x04 */
} Iterator_82E3C690;

/* Returns the entry at the iterator and advances it to the next entry of the table. */
int fn_82E3C690(Table_82E3C690 *table, Iterator_82E3C690 *it, Key_82E3C690 *key, unsigned int *value)
{
    unsigned int count;
    unsigned int i;

    if (table->buckets == 0 || it->node == 0) {
        return 0;
    }
    *key = it->node->key;
    *value = it->node->value;
    it->prev = it->node;
    it->node = it->node->next;
    if (it->node == 0) {
        count = table->capacity >> 1;
        for (i = (key->salt ^ key->id) % count + 1; i < count; i++) {
            if (table->buckets[i] != 0) {
                it->prev = 0;
                it->node = table->buckets[i];
                break;
            }
        }
    }
    return 1;
}
