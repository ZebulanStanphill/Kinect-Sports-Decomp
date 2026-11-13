typedef struct Node_82661160 Node_82661160;
typedef struct Tree_8265F918 {
    int alval;
    Node_82661160 *head;
    unsigned int size;
} Tree_8265F918;

extern Node_82661160 **fn_82F92000(Tree_8265F918 *);
extern Node_82661160 **fn_82F91FA0(Tree_8265F918 *);
extern Node_82661160 **fn_82F91FD0(Tree_8265F918 *);
extern void fn_8265FF78(Tree_8265F918 *, Node_82661160 *);

void fn_8265F918(Tree_8265F918 *tree)
{
    fn_8265FF78(tree, *fn_82F92000(tree));
    *fn_82F92000(tree) = tree->head;
    *fn_82F91FA0(tree) = tree->head;
    *fn_82F91FD0(tree) = tree->head;
    tree->size = 0;
}
