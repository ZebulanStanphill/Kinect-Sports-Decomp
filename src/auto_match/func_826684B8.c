typedef struct Node_826684B8 Node_826684B8;
typedef struct Tree_826684B8 {
    int alval;
    Node_826684B8 *head;
    unsigned int size;
    char alnod;
} Tree_826684B8;

extern Node_826684B8 *fn_82669780(char *al, unsigned int count, void *hint);
extern Node_826684B8 **fn_8265D5A8(Node_826684B8 *node);
extern Node_826684B8 **fn_82F92208(Node_826684B8 *node);
extern Node_826684B8 **fn_82F953B8(Node_826684B8 *node);
extern char *fn_82F95398(Node_826684B8 *node);
extern char *fn_82F953A8(Node_826684B8 *node);

Node_826684B8 *fn_826684B8(Tree_826684B8 *tree)
{
    Node_826684B8 *node = fn_82669780(&tree->alnod, 1, 0);
    *fn_8265D5A8(node) = tree->head;
    *fn_82F92208(node) = tree->head;
    *fn_82F953B8(node) = tree->head;
    *fn_82F95398(node) = 0;
    *fn_82F953A8(node) = 0;
    return node;
}
