typedef struct Node {
    struct Node *next;
} Node;

extern Node *lbl_8320A778;

void fn_828229A0(Node *n, Node **out)
{
    Node *nil = lbl_8320A778;
    Node *p = n->next;
    while (p != nil) {
        n = p;
        p = p->next;
    }
    *out = n;
}
