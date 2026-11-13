typedef struct Node_82F92340 Node_82F92340;
typedef struct Tree_82F92340 {
    int alval;
    Node_82F92340 *head;
    unsigned int size;
} Tree_82F92340;

extern Node_82F92340 *fn_82F930E0(Tree_82F92340 *);
extern char *fn_82F919B8(Node_82F92340 *);
extern Node_82F92340 **fn_82F92000(Tree_82F92340 *);
extern Node_82F92340 **fn_82F91FA0(Tree_82F92340 *);
extern Node_82F92340 **fn_82F91FD0(Tree_82F92340 *);

void fn_82F92340(Tree_82F92340 *tree)
{
    tree->head = fn_82F930E0(tree);
    *fn_82F919B8(tree->head) = 1;
    *fn_82F92000(tree) = tree->head;
    *fn_82F91FA0(tree) = tree->head;
    *fn_82F91FD0(tree) = tree->head;
    tree->size = 0;
}
