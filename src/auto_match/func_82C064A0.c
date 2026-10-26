typedef struct Node {
    int pad;
    struct Node *prev;
    struct Node *next;
} Node;

Node *fn_82C064A0(Node *n, Node **head)
{
    if (*head != 0) {
        n->prev = (*head)->prev;
        n->next = *head;
        (*head)->prev->next = n;
        (*head)->prev = n;
    } else {
        n->prev = n;
        n->next = n;
        *head = n;
    }
    return *head;
}
