typedef struct Node_82F95DB0 Node_82F95DB0;
typedef struct Tree_82F95DB0 {
    int comp;
    Node_82F95DB0 *head;
    unsigned int size;
} Tree_82F95DB0;

extern Node_82F95DB0 **fn_82F92000(Tree_82F95DB0 *);
extern char *fn_82F953A8(Node_82F95DB0 *);
extern void *fn_82F919C8(Node_82F95DB0 *);
extern unsigned char fn_8225E7A0(Tree_82F95DB0 *, void *, void *);
extern Node_82F95DB0 **fn_82F953B8(Node_82F95DB0 *);
extern Node_82F95DB0 **fn_8265D5A8(Node_82F95DB0 *);

Node_82F95DB0 *fn_82F95DB0(Tree_82F95DB0 *tree, void *keyval)
{
    Node_82F95DB0 *pnode = *fn_82F92000(tree);
    Node_82F95DB0 *wherenode = tree->head;

    while (!*fn_82F953A8(pnode)) {
        if (fn_8225E7A0(tree, fn_82F919C8(pnode), keyval)) {
            pnode = *fn_82F953B8(pnode);
        } else {
            wherenode = pnode;
            pnode = *fn_8265D5A8(pnode);
        }
    }
    return wherenode;
}
