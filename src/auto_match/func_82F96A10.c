typedef struct Node_82F96A10 Node_82F96A10;
typedef struct Tree_82F96A10 {
    char comp;
    char alnod;
} Tree_82F96A10;

extern char *fn_82F953A8(Node_82F96A10 *);
extern Node_82F96A10 **fn_82F953B8(Node_82F96A10 *);
extern Node_82F96A10 **fn_8265D5A8(Node_82F96A10 *);
extern void fn_82F95C50(char *al, Node_82F96A10 *p);
extern void fn_82F95C18(char *al, Node_82F96A10 *p, unsigned int n);

void fn_82F96A10(Tree_82F96A10 *t, Node_82F96A10 *root)
{
    Node_82F96A10 *p;
    for (p = root; !*fn_82F953A8(p); root = p) {
        fn_82F96A10(t, *fn_82F953B8(p));
        p = *fn_8265D5A8(p);
        fn_82F95C50(&t->alnod, root);
        fn_82F95C18(&t->alnod, root, 1);
    }
}
