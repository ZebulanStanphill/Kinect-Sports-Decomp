class Val_82536FD8 {
public:
    virtual ~Val_82536FD8();
    char pad[0x20];
};
struct Node_82536FD8 {
    Node_82536FD8 *left, *parent, *right;
    Val_82536FD8 value;
    char color, isnil;
};
extern "C" void fn_8265CA20(void *p);

extern "C" void fn_82536FD8(void *tree, Node_82536FD8 *root)
{
    Node_82536FD8 *cur;
    for (cur = root; !cur->isnil; root = cur) {
        fn_82536FD8(tree, cur->right);
        cur = cur->left;
        Val_82536FD8 *v = &root->value;
        v->~Val_82536FD8();
        fn_8265CA20(root);
    }
}
