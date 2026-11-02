typedef struct Node_82F958D8 Node_82F958D8;

extern Node_82F958D8 **fn_8265D5A8(Node_82F958D8 *n);
extern char *fn_82F953A8(Node_82F958D8 *n);
extern Node_82F958D8 **fn_82F92000(void *tree);
extern Node_82F958D8 **fn_82F92208(Node_82F958D8 *n);
extern Node_82F958D8 **fn_82F953B8(Node_82F958D8 *n);

void fn_82F958D8(void *tree, Node_82F958D8 *w)
{
    Node_82F958D8 *p;

    p = *fn_82F953B8(w);
    *fn_82F953B8(w) = *fn_8265D5A8(p);
    if (*fn_82F953A8(*fn_8265D5A8(p)) == 0) {
        *fn_82F92208(*fn_8265D5A8(p)) = w;
    }
    *fn_82F92208(p) = *fn_82F92208(w);
    if (w == *fn_82F92000(tree)) {
        *fn_82F92000(tree) = p;
    } else if (w == *fn_8265D5A8(*fn_82F92208(w))) {
        *fn_8265D5A8(*fn_82F92208(w)) = p;
    } else {
        *fn_82F953B8(*fn_82F92208(w)) = p;
    }
    *fn_8265D5A8(p) = w;
    *fn_82F92208(w) = p;
}
