typedef struct Node_826612A8 Node_826612A8;
extern Node_826612A8 **fn_82F953B8(Node_826612A8 *node);
extern char *fn_82F953A8(Node_826612A8 *node);

Node_826612A8 *fn_826612A8(Node_826612A8 *node)
{
    while (*fn_82F953A8(*fn_82F953B8(node)) == 0) {
        node = *fn_82F953B8(node);
    }
    return node;
}
