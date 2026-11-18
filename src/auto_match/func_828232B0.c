typedef struct Node_828232B0 {
    struct Node_828232B0 *parent; /* 0x0 */
    struct Node_828232B0 *left;   /* 0x4 */
    struct Node_828232B0 *right;  /* 0x8 */
} Node_828232B0;

extern Node_828232B0 *lbl_8320A778;
extern void fn_82823110(Node_828232B0 *n, Node_828232B0 **out);

/* Stores the in-order predecessor of n in *out (0 when n is the first node). */
void fn_828232B0(Node_828232B0 *n, Node_828232B0 **out)
{
    Node_828232B0 *nil = lbl_8320A778;
    Node_828232B0 *m;
    Node_828232B0 *p;

    *out = n->left;
    if (*out == nil) {
        *out = 0;
    }
    if (*out != 0) {
        m = *out;
        *out = m->right;
        if (*out == nil) {
            *out = 0;
        }
        if (*out != 0) {
            fn_82823110(*out, out);
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
        if ((p->left != nil ? p->left : 0) != n) {
            return;
        }
        n = p;
        *out = p->parent;
        if (*out == nil) {
            *out = 0;
        }
    }
}
