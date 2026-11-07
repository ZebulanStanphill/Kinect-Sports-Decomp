typedef struct Node_824A1628 {
    struct Node_824A1628 *left;
    struct Node_824A1628 *parent;
    struct Node_824A1628 *right;
    int key;
    int value;
    int value2;
    unsigned char color;
    unsigned char isnil;
} Node_824A1628;

typedef struct Tree_824A1628 {
    int comp;
    Node_824A1628 *head;
    unsigned int size;
} Tree_824A1628;

extern Tree_824A1628 lbl_83292C80;

extern void fn_824A1B50(Tree_824A1628 *tree, Node_824A1628 *node);
extern void fn_8265CA20(void *p);
extern void fn_824A1758(Node_824A1628 **ret, Node_824A1628 *where);

Node_824A1628 **fn_824A1628(Node_824A1628 **ret, Node_824A1628 *first, Node_824A1628 *last)
{
    Node_824A1628 *tmp;

    if (first == lbl_83292C80.head->left && last == lbl_83292C80.head) {
        first = lbl_83292C80.head->parent;
        while (!first->isnil) {
            Node_824A1628 *q;
            fn_824A1B50(&lbl_83292C80, first->right);
            q = first;
            first = first->left;
            fn_8265CA20(q);
        }
        lbl_83292C80.head->parent = lbl_83292C80.head;
        lbl_83292C80.head->left = lbl_83292C80.head;
        lbl_83292C80.head->right = lbl_83292C80.head;
        lbl_83292C80.size = 0;
        *ret = lbl_83292C80.head->left;
    } else {
        while (first != last) {
            Node_824A1628 *where = first;
            if (!first->isnil) {
                if (!first->right->isnil) {
                    Node_824A1628 *p = first->right;
                    Node_824A1628 *l;
                    while (!(l = p->left)->isnil)
                        p = l;
                    first = p;
                } else {
                    Node_824A1628 *q;
                    while (!(q = first->parent)->isnil && first == q->right)
                        first = q;
                    first = q;
                }
            }
            fn_824A1758(&tmp, where);
        }
        *ret = first;
    }
    return ret;
}
