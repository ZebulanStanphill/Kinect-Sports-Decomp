typedef struct Node_82B8F170 Node_82B8F170;
struct Node_82B8F170 {
    Node_82B8F170 *parent;
    int f4;
    Node_82B8F170 *firstChild;
    Node_82B8F170 *next;
};

void fn_82B8F170(void *self, Node_82B8F170 *node, Node_82B8F170 *newParent)
{
    Node_82B8F170 **link = &node->parent->firstChild;
    while (*link != node) {
        link = &(*link)->next;
    }
    *link = node->next;
    node->parent = newParent;
    node->next = newParent->firstChild;
    newParent->firstChild = node;
}
