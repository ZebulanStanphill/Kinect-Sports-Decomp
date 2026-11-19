/* Adds up the (block-compressed and uncompressed) sizes of every leaf image of a node tree. */
typedef struct Format_82917810 {
    int f0;
    unsigned short compressed; /* 0x4 */
} Format_82917810;

typedef struct Node_82917810 {
    unsigned short type; /* 0x0 */
    unsigned short f2;
    unsigned short width;      /* 0x4 */
    unsigned short height;     /* 0x6 */
    unsigned short count;      /* 0x8 */
    unsigned short childCount; /* 0xa */
    unsigned int children;     /* 0xc */
} Node_82917810;

typedef struct Child_82917810 {
    int f0;
    unsigned int node; /* 0x4 */
} Child_82917810;

typedef struct Context_82917810 {
    int f0;
    int f4;
    char *base; /* 0x8 */
} Context_82917810;

void fn_82917810(Context_82917810 *ctx, Format_82917810 *format, Node_82917810 *node, int count, int *stored,
                 int *total)
{
    unsigned int i;
    Child_82917810 *children;
    Node_82917810 *child;

    if (node->childCount != 0) {
        children = (Child_82917810 *)(ctx->base + node->children);
        for (i = 0; i < node->childCount; i++) {
            if (children[i].node != 0) {
                child = (Node_82917810 *)(ctx->base + children[i].node);
                fn_82917810(ctx, format, child, child->count * count, stored, total);
            }
        }
    } else {
        if (format->compressed == 0) {
            *stored += node->height * node->width * count;
        } else if (node->type != 3) {
            *stored += ((node->height + 3) >> 2) * node->width * count;
        } else {
            *stored += ((node->width + 3) >> 2) * node->height * count;
        }
        *total += node->height * node->width * count;
    }
}
