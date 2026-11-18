typedef struct Node_8305C5D8 {
    char pad00[0x20];
    struct Node_8305C5D8 *front; /* 0x20 */
    struct Node_8305C5D8 *back;  /* 0x24 */
    int id;                      /* 0x28 */
} Node_8305C5D8;

typedef struct Tree_8305C5D8 {
    char pad00[0x8];
    float epsilon; /* 0x08 */
} Tree_8305C5D8;

extern int fn_83066810(Node_8305C5D8 *node, void *poly, float epsilon, int flags);
extern void fn_8305F320(void *poly, Node_8305C5D8 *node, void *front, void *back, float epsilon);
extern void *fn_83065E50(void);
extern void fn_8305E0F8(void *poly, void *list);
extern void fn_8305EC98(void *dst, void *src);
extern void fn_830615A8(void *list, void *poly);
extern void fn_83065C40(void *poly);

static __forceinline unsigned char IsLeaf(Node_8305C5D8 *node)
{
    if (node->front == 0 && node->back == 0) {
        return 1;
    }
    return 0;
}

void fn_8305C5D8(Tree_8305C5D8 *tree, Node_8305C5D8 *node, int id, void *poly, void *list)
{
    int side;
    void *split;

    for (;;) {
        if (IsLeaf(node)) {
            if (node->id == id) {
                return;
            }
            break;
        }
        side = fn_83066810(node, poly, tree->epsilon, 0);
        if (side == 1) {
            node = node->front;
        } else if (side == 2) {
            node = node->back;
        } else {
            if (node->front != 0 && node->back != 0) {
                split = fn_83065E50();
                fn_8305E0F8(split, list);
                fn_8305EC98(split, poly);
                fn_8305F320(poly, node, split, poly, tree->epsilon);
                fn_8305C5D8(tree, node->back, id, split, list);
                node = node->front;
            } else if (node->front != 0) {
                fn_8305F320(poly, node, 0, poly, tree->epsilon);
                node = node->front;
            } else {
                fn_8305F320(poly, node, poly, 0, tree->epsilon);
                node = node->back;
            }
            continue;
        }
        if (node == 0) {
            break;
        }
    }
    fn_830615A8(list, poly);
    fn_83065C40(poly);
}
