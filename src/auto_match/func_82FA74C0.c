typedef struct Node {
    struct Node *next;
    unsigned int key;
    int pad;
    unsigned int flags;
} Node;

void fn_82FA74C0(Node **head, unsigned int key)
{
    while (*head != 0) {
        Node *n = *head;
        if (n->key == key) {
            n->flags |= 0x80000000;
        }
        *head = (*head)->next;
    }
}
