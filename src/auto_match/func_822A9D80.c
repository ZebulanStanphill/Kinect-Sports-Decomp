typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    int key[9];
    unsigned char color;
    unsigned char isnil;
} Node;

typedef struct Tree {
    int f0;
    Node *head;
} Tree;

extern unsigned char fn_828647A8(void *a, void *b);

Node **fn_822A9D80(Node **out, Tree *t, void *key)
{
    Node *where;
    Node *node;
    Node *it;
    Node *e;
    Node **pp;

    where = t->head;
    node = where->parent;
    while (!node->isnil) {
        if (fn_828647A8(node->key, key)) {
            node = node->right;
        } else {
            where = node;
            node = node->left;
        }
    }
    it = where;
    if (where == t->head || fn_828647A8(key, where->key)) {
        e = t->head;
        pp = &e;
    } else {
        pp = &it;
    }
    *out = *pp;
    return out;
}
