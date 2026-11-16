typedef struct Node_82AD20C0 {
    int reserved;                  /* 0x00 */
    struct Node_82AD20C0 *next;    /* 0x04 */
    struct Node_82AD20C0 *sibling; /* 0x08 */
    struct Node_82AD20C0 *parent;  /* 0x0c */
    unsigned int state;            /* 0x10 */
} Node_82AD20C0;

extern void fn_82ABE5F8(void *allocator, void *node, unsigned int size, unsigned int tag);

void fn_82AD20C0(Node_82AD20C0 **head, Node_82AD20C0 *node, void *allocator)
{
    Node_82AD20C0 *current;
    Node_82AD20C0 **link;
    node->state = 0;
    for (current = *head; current != node; current = current->next) {
        head = &current->next;
    }
    *head = current->next;
    link = &node->parent->next;
    for (current = *link; current != node; current = current->sibling) {
        link = &current->sibling;
    }
    *link = current->sibling;
    fn_82ABE5F8(allocator, node, 0x14, 0x1a);
}
