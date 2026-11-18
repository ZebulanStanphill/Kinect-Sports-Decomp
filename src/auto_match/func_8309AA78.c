typedef struct Node_8309AA78 Node_8309AA78;

struct Node_8309AA78 {
    int field0; /* 0x0 */
    int id;     /* 0x4 */
    int field8; /* 0x8 */
    int parent; /* 0xc: Node_8309AA78 *, compared as a signed int */
};

int fn_8309AA78(int *path, int maxCount, Node_8309AA78 *node)
{
    Node_8309AA78 *stack[10];
    int depth;
    int count;

    depth = 0;
    while (node->parent != 0) {
        stack[depth] = node;
        node = (Node_8309AA78 *)node->parent;
        depth++;
    }
    for (count = 0; depth > 0 && count < maxCount - 1; count++) {
        depth--;
        path[count] = stack[depth]->id;
    }
    path[count] = -1;
    return count + 1;
}
