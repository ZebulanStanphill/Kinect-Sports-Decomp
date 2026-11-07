typedef struct Key_82832E40 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
} Key_82832E40;

typedef struct Node_82832E40 {
    struct Node_82832E40 *left;
    struct Node_82832E40 *parent;
    struct Node_82832E40 *right;
    Key_82832E40 key;
    unsigned int value;
    char color;
    char isnil;
} Node_82832E40;

typedef struct Tree_82832E40 {
    int alloc;
    Node_82832E40 *head;
} Tree_82832E40;

static __forceinline unsigned char KeyLess_82832E40(const Key_82832E40 *x, const Key_82832E40 *y)
{
    if (x->b != y->b)
        return x->b < y->b;
    if (x->c != y->c)
        return x->c < y->c;
    return x->a < y->a;
}

Node_82832E40 *fn_82832E40(Tree_82832E40 *tree, const Key_82832E40 *key)
{
    Node_82832E40 *result = tree->head;
    Node_82832E40 *node = result->parent;

    while (!node->isnil) {
        if (KeyLess_82832E40(&node->key, key)) {
            node = node->right;
        } else {
            result = node;
            node = node->left;
        }
    }
    return result;
}
