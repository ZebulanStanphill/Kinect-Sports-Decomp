typedef void *(*Alloc_82B6C978)(void *, int);

typedef struct Recycler_82B6C978 {
    void *ctx;            /* 0x00 */
    Alloc_82B6C978 alloc; /* 0x04 */
    void *freeMem;        /* 0x08 */
    void *shaderStore;    /* 0x0c */
    void *registry;       /* 0x10 */
    void *tree;           /* 0x14 */
    void *lists;          /* 0x18 */
    void *pairs;          /* 0x1c */
} Recycler_82B6C978;

typedef struct Pair_82B6C978 {
    void *pixelShader;  /* 0x0 */
    void *vertexShader; /* 0x4 */
} Pair_82B6C978;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82B69A00(void *registry, int kind);
extern void fn_82AB6DA0(void *shader);
extern void fn_82AB6BC8(void *shader);
extern Pair_82B6C978 *fn_82B6B128(void *pairs);
extern void fn_82B6B230(void *pairs, Pair_82B6C978 *pair);
extern unsigned int fn_82AB6FB8(void *shader);
extern unsigned int fn_82B9F338(void *tree, unsigned int *keys, int count, void **value);
extern void *fn_82B9F3F8(void *value);
extern void fn_82B9F578(void *tree, unsigned int *keys, int count, void *value);
extern void *fn_82AB68E0(void *ctx, Alloc_82B6C978 alloc, void *freeMem, int n);
extern void fn_82AB6368(void *lists, void *list);
extern void fn_82AB6210(void *list, Pair_82B6C978 *pair);
extern unsigned int fn_82AB60F0(void *list);
extern void *fn_82AB6570(void *list);
extern Pair_82B6C978 *fn_82AB67A8(void *item);
extern void fn_82AB6770(void *item);

#define SR_ASSERT(e, line)                                                                                   \
    if (!(e))                                                                                                \
    fn_82AB15D0(                                                                                             \
        0, "Assertion failed: %s (%s:%u)", #e,                                                               \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler"      \
        "\\shaderrecycler.cpp",                                                                              \
        line)

int fn_82B6C978(Recycler_82B6C978 *pSR, void *pCS_ps, void *pCS_vs)
{
    void *found;
    Pair_82B6C978 *pair;
    void *pSpecificPairList;
    unsigned int keys[2];

    found = 0;
    SR_ASSERT(pSR, 0x173);
    SR_ASSERT(pCS_ps, 0x174);
    SR_ASSERT(pCS_vs, 0x175);
    if (fn_82B69A00(pSR->registry, 10) != 0) {
        fn_82AB6DA0(pCS_ps);
        fn_82AB6DA0(pCS_vs);
        pair = fn_82B6B128(pSR->pairs);
        if (pair == 0) {
            SR_ASSERT(!"SR_StoreShaderPair: Unable to allocate a new Shader Pair Structure", 0x185);
            fn_82AB6BC8(pCS_ps);
            fn_82AB6BC8(pCS_vs);
            return 0x10;
        }
        pair->pixelShader = pCS_ps;
        pair->vertexShader = pCS_vs;
        keys[0] = fn_82AB6FB8(pCS_ps);
        keys[1] = fn_82AB6FB8(pCS_vs);
        if (fn_82B9F338(pSR->tree, keys, 2, &found) != 0) {
            pSpecificPairList = fn_82B9F3F8(found);
        } else {
            pSpecificPairList = fn_82AB68E0(pSR->ctx, pSR->alloc, pSR->freeMem, 10);
            SR_ASSERT(pSpecificPairList, 0x1a6);
            fn_82AB6368(pSR->lists, pSpecificPairList);
            fn_82B9F578(pSR->tree, keys, 2, pSpecificPairList);
        }
        fn_82AB6210(pSpecificPairList, pair);
        if (fn_82AB60F0(pSpecificPairList) > 10) {
            void *item = fn_82AB6570(pSpecificPairList);
            pair = fn_82AB67A8(item);
            fn_82AB6BC8(pair->pixelShader);
            fn_82AB6BC8(pair->vertexShader);
            fn_82B6B230(pSR->pairs, pair);
            fn_82AB6770(item);
        }
    }
    return 0;
}
