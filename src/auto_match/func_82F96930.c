typedef struct Node_82F96930 Node_82F96930;
typedef struct Tree_82F96930 {
    int alval;
    Node_82F96930 *head;
    unsigned int size;
} Tree_82F96930;

extern Node_82F96930 **fn_82F92000(Tree_82F96930 *);
extern Node_82F96930 **fn_82F91FA0(Tree_82F96930 *);
extern Node_82F96930 **fn_82F91FD0(Tree_82F96930 *);
extern void fn_82F96A10(Tree_82F96930 *, Node_82F96930 *);

void fn_82F96930(Tree_82F96930 *tree)
{
    fn_82F96A10(tree, *fn_82F92000(tree));
    *fn_82F92000(tree) = tree->head;
    tree->size = 0;
    *fn_82F91FA0(tree) = tree->head;
    *fn_82F91FD0(tree) = tree->head;
}
