typedef struct Node_828231A8 {
    struct Node_828231A8 *next;
    struct Node_828231A8 *f4;
    struct Node_828231A8 *f8;
} Node_828231A8;

extern Node_828231A8 *lbl_8320A778;
extern void fn_82823110(Node_828231A8 *n, Node_828231A8 **out);
void fn_828231A8(Node_828231A8 *n, Node_828231A8 **out)
{
    Node_828231A8 *nil = lbl_8320A778;
    Node_828231A8 *m = n;
    Node_828231A8 *p;
    for (p = n->next; p != nil; p = p->next) m = p;
    *out = m;
    *out = m->f8;
    if (*out == nil) *out = 0;
    if (*out != 0) fn_82823110(*out, out); else *out = m;
}
