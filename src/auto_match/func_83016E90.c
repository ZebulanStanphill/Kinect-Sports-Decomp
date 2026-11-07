typedef struct Key_83016E90 {
    unsigned int a;
    unsigned int b;
} Key_83016E90;

typedef struct Node_83016E90 {
    struct Node_83016E90 *next;
    Key_83016E90 key;
    int value;
} Node_83016E90;

static __forceinline unsigned char KeyEq_83016E90(const Key_83016E90 *x, const Key_83016E90 *y)
{
    return x->a == y->a && x->b == y->b;
}

int *fn_83016E90(Node_83016E90 **table, Key_83016E90 key, int index)
{
    Node_83016E90 *n;

    for (n = table[index + 1]; n != 0; n = n->next) {
        if (KeyEq_83016E90(&n->key, &key)) {
            return &n->value;
        }
    }
    return 0;
}
