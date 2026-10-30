typedef struct Node Node;
struct Node {
    int pad;
    Node *a4;
    Node *a8;
};

typedef struct {
    Node *cur;
    unsigned char dir;
    int pad8;
    void *xc;
} Iter;

Node *fn_830683D0(Iter *it)
{
    Node *n = it->cur;
    if (n != 0 && it->xc != 0) {
        if (it->dir)
            n = n->a4;
        else
            n = n->a8;
        it->cur = n;
        return n;
    }
    return 0;
}
