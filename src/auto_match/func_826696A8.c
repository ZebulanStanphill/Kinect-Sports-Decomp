typedef struct Node_826696A8 Node_826696A8;
typedef struct Tree_826696A8 {
    int alval;
    Node_826696A8 *head;
    unsigned int size;
} Tree_826696A8;

extern Node_826696A8 **fn_82F92000(Tree_826696A8 *);
extern Node_826696A8 **fn_82F91FA0(Tree_826696A8 *);
extern Node_826696A8 **fn_82F91FD0(Tree_826696A8 *);
extern void fn_826698D8(Tree_826696A8 *, Node_826696A8 *);

void fn_826696A8(Tree_826696A8 *tree)
{
    fn_826698D8(tree, *fn_82F92000(tree));
    *fn_82F92000(tree) = tree->head;
    *fn_82F91FA0(tree) = tree->head;
    *fn_82F91FD0(tree) = tree->head;
    tree->size = 0;
}
