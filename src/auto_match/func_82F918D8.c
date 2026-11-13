typedef struct Node_82F918D8 Node_82F918D8;
typedef struct Tree_82F918D8 {
    int alval;
    Node_82F918D8 *head;
    unsigned int size;
} Tree_82F918D8;

extern Node_82F918D8 **fn_82F92000(Tree_82F918D8 *);
extern Node_82F918D8 **fn_82F91FA0(Tree_82F918D8 *);
extern Node_82F918D8 **fn_82F91FD0(Tree_82F918D8 *);
extern void fn_82F91A50(Tree_82F918D8 *, Node_82F918D8 *);

void fn_82F918D8(Tree_82F918D8 *tree)
{
    fn_82F91A50(tree, *fn_82F92000(tree));
    *fn_82F92000(tree) = tree->head;
    tree->size = 0;
    *fn_82F91FA0(tree) = tree->head;
    *fn_82F91FD0(tree) = tree->head;
}
