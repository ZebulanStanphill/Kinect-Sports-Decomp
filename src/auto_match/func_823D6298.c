extern void fn_82359C18(void *object);
extern void fn_8265CA20(void *object);

typedef struct Pair_823D6298 {
    int first[6];
    int second[6];
} Pair_823D6298;

typedef struct Node_823D6298 {
    struct Node_823D6298 *left;
    struct Node_823D6298 *parent;
    struct Node_823D6298 *right;
    int key[3];
    Pair_823D6298 val;
    char pad[0x49 - 0x48];
    char isnil;
} Node_823D6298;

static void destroy(Pair_823D6298 *v)
{
    fn_82359C18(&v->second);
    fn_82359C18(v);
}

void fn_823D6298(void *tree, Node_823D6298 *root)
{
    Node_823D6298 *p;
    for (p = root; p->isnil == 0; root = p) {
        fn_823D6298(tree, p->right);
        p = p->left;
        destroy(&root->val);
        fn_8265CA20(root);
    }
}
