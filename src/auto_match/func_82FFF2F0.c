typedef struct Node_82FFF2F0 { struct Node_82FFF2F0 *next; unsigned int key; } Node_82FFF2F0;
typedef struct Table_82FFF2F0 { void *heap; Node_82FFF2F0 *buckets[193]; int count; } Table_82FFF2F0;
extern void fn_82FFF250(Table_82FFF2F0 *table, unsigned int index, Node_82FFF2F0 *node, Node_82FFF2F0 *prev);

void fn_82FFF2F0(Table_82FFF2F0 *table, unsigned int key)
{
    unsigned int index = key % 193;
    Node_82FFF2F0 *node = table->buckets[index];
    Node_82FFF2F0 *prev = 0;
    while (node != 0) {
        if (node->key == key) {
            fn_82FFF250(table, index, node, prev);
            return;
        }
        prev = node;
        node = node->next;
    }
}
