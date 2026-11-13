typedef struct Node_82669AC8 Node_82669AC8;
extern Node_82669AC8 **fn_8265D5A8(Node_82669AC8 *node);
extern char *fn_82F953A8(Node_82669AC8 *node);

Node_82669AC8 *fn_82669AC8(Node_82669AC8 *node)
{
    while (*fn_82F953A8(*fn_8265D5A8(node)) == 0) {
        node = *fn_8265D5A8(node);
    }
    return node;
}
