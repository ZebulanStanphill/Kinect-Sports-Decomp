extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define TT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\ternary.cpp", line)

typedef struct Node_82B9F6F0 {
    int key;
    struct Node_82B9F6F0 *lo;
    struct Node_82B9F6F0 *eq;
    struct Node_82B9F6F0 *hi;
    struct Node_82B9F6F0 *parent;
} Node_82B9F6F0;

typedef struct Tree_82B9F6F0 {
    Node_82B9F6F0 *root;
    void *ctx;
    void *AllocateSysMem;
    void *FreeSysMem;
    void *pMemoryMgr;
    unsigned int count;
    unsigned int f18;
} Tree_82B9F6F0;

extern void fn_82B6B230(void *mgr, void *p);

void fn_82B9F6F0(Tree_82B9F6F0 *pTree)
{
    Node_82B9F6F0 *pCurrNode;
    Node_82B9F6F0 *pPrevNode;

    TT_ASSERT(pTree, 0x23c);
    pCurrNode = pTree->root;
    if (pTree->count >= 1) {
        for (;;) {
            if (pCurrNode->lo != 0) {
                pCurrNode = pCurrNode->lo;
            } else if (pCurrNode->hi != 0) {
                pCurrNode = pCurrNode->hi;
            } else if (pCurrNode->eq != 0) {
                pCurrNode = pCurrNode->eq;
            } else {
                fn_82B6B230(pTree->pMemoryMgr, pCurrNode);
                if (--pTree->count == 0)
                    break;
                pPrevNode = pCurrNode;
                pCurrNode = pCurrNode->parent;
                TT_ASSERT(pCurrNode, 0x268);
                if (pPrevNode == pCurrNode->lo)
                    pCurrNode->lo = 0;
                else if (pPrevNode == pCurrNode->hi)
                    pCurrNode->hi = 0;
                else
                    pCurrNode->eq = 0;
            }
        }
        pTree->root = 0;
    }
    pTree->f18 = 0;
    pTree->count = 0;
}
