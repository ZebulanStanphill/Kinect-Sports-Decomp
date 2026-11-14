typedef struct Node_82822300 Node_82822300;
struct Node_82822300 {
    Node_82822300 *prev;
    Node_82822300 *next;
};

void fn_82822300(Node_82822300 *self, Node_82822300 *node)
{
    Node_82822300 **link = &self->next;
    Node_82822300 *last = self;
    while (*link != 0) {
        last = *link;
        link = &last->next;
    }
    *link = node;
    node->prev = last;
    node->next = 0;
}
