typedef struct Node_82EF1198 {
    unsigned int key;
    int value;
    struct Node_82EF1198 *next;
} Node_82EF1198;
typedef struct {
    Node_82EF1198 **buckets;
    unsigned int size;
} Table_82EF1198;
typedef struct {
    Node_82EF1198 *found;
    Node_82EF1198 *prev;
} Pos_82EF1198;

int fn_82EF1198(Table_82EF1198 *t, unsigned int *key, int *value, Pos_82EF1198 *pos)
{
    Node_82EF1198 *n;
    if (t->buckets == 0)
        return 0;
    n = t->buckets[*key % (t->size >> 1)];
    pos->found = 0;
    pos->prev = 0;
    while (n != 0) {
        if (n->key == *key) {
            pos->found = n;
            *value = n->value;
            break;
        }
        pos->prev = n;
        n = n->next;
    }
    return n != 0;
}
