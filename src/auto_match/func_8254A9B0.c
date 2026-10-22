typedef struct Node Node;
struct Node {
    int pad[4];
    Node *child[4];
};

extern void fn_8265CA20(Node *n);

void fn_8254A9B0(Node *param_1)
{
    Node *c;

    c = param_1->child[0];
    if (c != 0) {
        fn_8254A9B0(c);
        fn_8265CA20(c);
    }
    c = param_1->child[1];
    if (c != 0) {
        fn_8254A9B0(c);
        fn_8265CA20(c);
    }
    c = param_1->child[2];
    if (c != 0) {
        fn_8254A9B0(c);
        fn_8265CA20(c);
    }
    c = param_1->child[3];
    if (c != 0) {
        fn_8254A9B0(c);
        fn_8265CA20(c);
    }
}
