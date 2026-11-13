typedef struct Node_82662F58 Node_82662F58;
typedef struct Tree_82662F58 {
    int alval;
    Node_82662F58 *head;
    unsigned int size;
    char alnod;
} Tree_82662F58;

extern Node_82662F58 *fn_826610C8(char *al, unsigned int count);
extern Node_82662F58 **fn_8265D5A8(Node_82662F58 *node);
extern Node_82662F58 **fn_82F92208(Node_82662F58 *node);
extern Node_82662F58 **fn_82F953B8(Node_82662F58 *node);
extern char *fn_82F95398(Node_82662F58 *node);
extern char *fn_82F953A8(Node_82662F58 *node);

Node_82662F58 *fn_82662F58(Tree_82662F58 *tree)
{
    Node_82662F58 *node = fn_826610C8(&tree->alnod, 1);
    *fn_8265D5A8(node) = tree->head;
    *fn_82F92208(node) = tree->head;
    *fn_82F953B8(node) = tree->head;
    *fn_82F95398(node) = 0;
    *fn_82F953A8(node) = 0;
    return node;
}
