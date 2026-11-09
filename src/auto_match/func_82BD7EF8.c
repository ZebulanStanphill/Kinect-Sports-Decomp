typedef struct Node {
    int data;
    struct Node *next;
} Node;

int fn_82BD7EF8(Node **head)
{
    int n = 0;
    Node *p;
    for (p = *head; p != 0; p = p->next)
        n++;
    return n;
}
