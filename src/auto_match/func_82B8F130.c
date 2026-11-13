typedef struct Node_82B8F130 Node_82B8F130;
struct Node_82B8F130 {
    int f0;
    Node_82B8F130 *parent;
    Node_82B8F130 *next;
    Node_82B8F130 *firstChild;
};

void fn_82B8F130(void *self, Node_82B8F130 *node, Node_82B8F130 *newParent)
{
    Node_82B8F130 **link = &node->parent->firstChild;
    while (*link != node) {
        link = &(*link)->next;
    }
    *link = node->next;
    node->parent = newParent;
    node->next = newParent->firstChild;
    newParent->firstChild = node;
}
