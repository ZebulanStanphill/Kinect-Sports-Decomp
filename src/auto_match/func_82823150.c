typedef struct Node_82823150 {
    struct Node_82823150 *next;
    struct Node_82823150 *f4;
    struct Node_82823150 *f8;
} Node_82823150;

extern Node_82823150 *lbl_8320A778;
extern void fn_828230D0(Node_82823150 *n, Node_82823150 **out);
void fn_82823150(Node_82823150 *n, Node_82823150 **out)
{
    Node_82823150 *nil = lbl_8320A778;
    Node_82823150 *m = n;
    Node_82823150 *p;
    for (p = n->next; p != nil; p = p->next) m = p;
    *out = m;
    *out = m->f4;
    if (*out == nil) *out = 0;
    if (*out != 0) fn_828230D0(*out, out); else *out = m;
}
