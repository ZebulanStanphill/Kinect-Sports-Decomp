typedef struct Node_82F95AD0 Node_82F95AD0;

extern Node_82F95AD0 **fn_82F953B8(Node_82F95AD0 *n);
extern char *fn_82F953A8(Node_82F95AD0 *n);
extern Node_82F95AD0 **fn_82F92000(void *tree);
extern Node_82F95AD0 **fn_82F92208(Node_82F95AD0 *n);
extern Node_82F95AD0 **fn_8265D5A8(Node_82F95AD0 *n);

void fn_82F95AD0(void *tree, Node_82F95AD0 *w)
{
    Node_82F95AD0 *p;

    p = *fn_8265D5A8(w);
    *fn_8265D5A8(w) = *fn_82F953B8(p);
    if (*fn_82F953A8(*fn_82F953B8(p)) == 0) {
        *fn_82F92208(*fn_82F953B8(p)) = w;
    }
    *fn_82F92208(p) = *fn_82F92208(w);
    if (w == *fn_82F92000(tree)) {
        *fn_82F92000(tree) = p;
    } else if (w == *fn_82F953B8(*fn_82F92208(w))) {
        *fn_82F953B8(*fn_82F92208(w)) = p;
    } else {
        *fn_8265D5A8(*fn_82F92208(w)) = p;
    }
    *fn_82F953B8(p) = w;
    *fn_82F92208(w) = p;
}
