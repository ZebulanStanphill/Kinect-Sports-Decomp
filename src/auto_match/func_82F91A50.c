typedef struct Node_82F91A50 Node_82F91A50;
typedef struct Tree_82F91A50 {
    char comp;
    char alnod;
} Tree_82F91A50;

extern char *fn_82F919B8(Node_82F91A50 *);
extern Node_82F91A50 **fn_82F953B8(Node_82F91A50 *);
extern Node_82F91A50 **fn_8265D5A8(Node_82F91A50 *);
extern void fn_82F95C50(char *al, Node_82F91A50 *p);
extern void fn_82F92810(char *al, Node_82F91A50 *p, unsigned int n);

void fn_82F91A50(Tree_82F91A50 *t, Node_82F91A50 *root)
{
    Node_82F91A50 *p;
    for (p = root; !*fn_82F919B8(p); root = p) {
        fn_82F91A50(t, *fn_82F953B8(p));
        p = *fn_8265D5A8(p);
        fn_82F95C50(&t->alnod, root);
        fn_82F92810(&t->alnod, root, 1);
    }
}
