typedef struct Node_82594FD0 { struct Node_82594FD0 *left, *parent, *right; char pad[9]; unsigned char nil; } Node_82594FD0;
typedef struct Tree_82594FD0 { int allocator; Node_82594FD0 *head; unsigned count; int pad; } Tree_82594FD0;
extern Tree_82594FD0 lbl_83297004;
extern void fn_8243DD58(Tree_82594FD0 *, Node_82594FD0 *);
extern void fn_8265CA20(void *);
extern void fn_82381BC0(Node_82594FD0 **);
extern void fn_825950A0(void *, Node_82594FD0 *);
Node_82594FD0 **fn_82594FD0(Node_82594FD0 **out, Node_82594FD0 *first, Node_82594FD0 *last) {
    char tmp[4];
    if (first == lbl_83297004.head->left && last == lbl_83297004.head) {
        Node_82594FD0 *p = lbl_83297004.head->parent;
        while (!p->nil) {
            Node_82594FD0 *q;
            fn_8243DD58(&lbl_83297004,p->right);
            q=p->left;
            fn_8265CA20(p);
            p=q;
        }
        lbl_83297004.head->parent=lbl_83297004.head;
        lbl_83297004.head->left=lbl_83297004.head;
        lbl_83297004.head->right=lbl_83297004.head;
        lbl_83297004.count=0;
        *out=lbl_83297004.head->left;
    } else {
        while (first!=last) {
            Node_82594FD0 *p=first;
            fn_82381BC0(&first);
            fn_825950A0(tmp,p);
        }
        *out=first;
    }
    return out;
}
