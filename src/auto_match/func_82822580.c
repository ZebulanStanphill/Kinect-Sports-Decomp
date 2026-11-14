typedef struct Item_82822580 {
    int value;
    struct Item_82822580 *next;
} Item_82822580;

typedef struct Node_82822580 {
    struct Node_82822580 *parent;
    Item_82822580 *items;
} Node_82822580;

int fn_82822580(Node_82822580 *node)
{
    Node_82822580 *p;
    Item_82822580 *item;
    int count;

    for (p = node->parent; p != 0; p = p->parent) {
        node = p;
    }
    count = 0;
    for (item = node->items; item != 0; item = item->next) {
        count++;
    }
    return count;
}
