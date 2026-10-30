typedef struct Node Node;
struct Node {
    Node *next;
    unsigned int len;
};

typedef struct {
    int x0;
    Node *head;
    unsigned int x8;
    int xc;
    unsigned int x10;
} Q;

unsigned int fn_82BA7120(Q *q)
{
    if (q->head) {
        Node *n;
        unsigned int t = q->head->len - q->x10 + q->x8;
        for (n = q->head->next; n; n = n->next)
            t += n->len;
        return t;
    }
    return 0;
}
