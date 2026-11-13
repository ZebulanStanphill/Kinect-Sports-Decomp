typedef struct Node_82F964B0 Node_82F964B0;
typedef struct Tree_82F964B0 {
    int alval;
    Node_82F964B0 *head;
    unsigned int size;
} Tree_82F964B0;

extern Node_82F964B0 *fn_82F96550(Tree_82F964B0 *);
extern char *fn_82F953A8(Node_82F964B0 *);
extern Node_82F964B0 **fn_82F92000(Tree_82F964B0 *);
extern Node_82F964B0 **fn_82F91FA0(Tree_82F964B0 *);
extern Node_82F964B0 **fn_82F91FD0(Tree_82F964B0 *);

void fn_82F964B0(Tree_82F964B0 *tree)
{
    tree->head = fn_82F96550(tree);
    *fn_82F953A8(tree->head) = 1;
    *fn_82F92000(tree) = tree->head;
    *fn_82F91FA0(tree) = tree->head;
    *fn_82F91FD0(tree) = tree->head;
    tree->size = 0;
}
