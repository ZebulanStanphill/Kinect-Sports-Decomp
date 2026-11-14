extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define TT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\ternary.cpp", line)

typedef struct TNode_82B9F338 {
    unsigned int key;
    struct TNode_82B9F338 *lo;
    struct TNode_82B9F338 *hi;
    struct TNode_82B9F338 *eq;
} TNode_82B9F338;

typedef struct Tree_82B9F338 {
    TNode_82B9F338 *root;
} Tree_82B9F338;

/* look up a key string of count words; on success *out is the node after the last word */
int fn_82B9F338(Tree_82B9F338 *pTree, const unsigned int *keys, unsigned int count, TNode_82B9F338 **out)
{
    int found = 0;
    unsigned int i = 0;
    TNode_82B9F338 *node;
    const unsigned int *key;
    TT_ASSERT(pTree, 0x2ab);
    node = pTree->root;
    if (node == 0)
        return 0;
    if (count == 0)
        return 0;
    key = keys;
    do {
        if (*key == node->key) {
            i++;
            node = node->eq;
            key++;
            if (i == count) {
                found = 1;
                *out = node;
                break;
            }
        } else if (*key < node->key) {
            node = node->lo;
        } else {
            node = node->hi;
        }
    } while (node != 0);
    return found;
}
