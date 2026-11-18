typedef struct Node_828232B0 {
    struct Node_828232B0 *parent; /* 0x0 */
    struct Node_828232B0 *left;   /* 0x4 */
    struct Node_828232B0 *right;  /* 0x8 */
} Node_828232B0;

extern Node_828232B0 *lbl_8320A778;
extern void fn_828230D0(Node_828232B0 *n, Node_828232B0 **out);

/* Stores the in-order successor of n in *out (0 when n is the last node). */
void fn_82823200(Node_828232B0 *n, Node_828232B0 **out)
{
    Node_828232B0 *nil = lbl_8320A778;
    Node_828232B0 *m;
    Node_828232B0 *p;

    *out = n->right;
    if (*out == nil) {
        *out = 0;
    }
    if (*out != 0) {
        m = *out;
        *out = m->left;
        if (*out == nil) {
            *out = 0;
        }
        if (*out != 0) {
            fn_828230D0(*out, out);
        } else {
            *out = m;
        }
        return;
    }
    *out = n->parent;
    if (*out == nil) {
        *out = 0;
    }
    while (*out != 0) {
        p = *out;
        if ((p->right != nil ? p->right : 0) != n) {
            return;
        }
        n = p;
        *out = p->parent;
        if (*out == nil) {
            *out = 0;
        }
    }
}
