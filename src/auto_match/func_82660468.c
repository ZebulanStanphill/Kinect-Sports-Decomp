typedef struct Node_82660468 Node_82660468;
typedef struct Tree_82660468 {
    int alval;
    Node_82660468 *head;
    unsigned int size;
    char alnod;
} Tree_82660468;

extern void *fn_82F93778(char *al, void *src);
extern void fn_82661068(Tree_82660468 *tree, void *comp, void *al);
extern Node_82660468 *fn_826610C8(char *al, unsigned int count);
extern Node_82660468 **fn_8265D5A8(Node_82660468 *node);
extern Node_82660468 **fn_82F92208(Node_82660468 *node);
extern Node_82660468 **fn_82F953B8(Node_82660468 *node);
extern char *fn_82F95398(Node_82660468 *node);
extern char *fn_82F953A8(Node_82660468 *node);

Tree_82660468 *fn_82660468(Tree_82660468 *tree, void *comp, void *al)
{
    char tmp;
    char *ptmp = &tmp;

    fn_82661068(tree, comp, fn_82F93778(ptmp, al));
    tree->size = 0;
    tree->head = fn_826610C8(&tree->alnod, 1);
    *fn_8265D5A8(tree->head) = tree->head;
    *fn_82F92208(tree->head) = tree->head;
    *fn_82F953B8(tree->head) = tree->head;
    *fn_82F95398(tree->head) = 1;
    *fn_82F953A8(tree->head) = 1;
    return tree;
}
