typedef struct Tree_82B9F808 {
    int pad0;
    void *ctx;
    int pad8;
    void (*release)(void *ctx, struct Tree_82B9F808 *tree);
    void *buffer;
} Tree_82B9F808;

extern void fn_82AB15D0(int level, const char *fmt, ...);
extern void fn_82B6B0C8(void *p);
extern void fn_82B9F6F0(Tree_82B9F808 *tree);

void fn_82B9F808(Tree_82B9F808 *pTree)
{
    if (pTree == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pTree",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\ternary.cpp",
                    0x6d);
    }
    fn_82B9F6F0(pTree);
    fn_82B6B0C8(pTree->buffer);
    pTree->release(pTree->ctx, pTree);
}
