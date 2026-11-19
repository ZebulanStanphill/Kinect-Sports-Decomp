typedef struct Recycler_82B6CFD8 {
    void *ctx;         /* 0x00 */
    void *alloc;       /* 0x04 */
    void *freeMem;     /* 0x08 */
    void *shaderStore; /* 0x0c */
    void *registry;    /* 0x10 */
    void *tree;        /* 0x14 */
} Recycler_82B6CFD8;

typedef struct Pair_82B6CFD8 {
    void *pCS_ps; /* 0x0 */
    void *pCS_vs; /* 0x4 */
} Pair_82B6CFD8;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern unsigned int fn_82B69A00(void *registry, int kind);
extern unsigned int fn_82AB6EC0(void *program, int pixel);
extern unsigned int fn_82B9F338(void *tree, unsigned int *keys, int count, void **value);
extern void *fn_82B9F3F8(void *value);
extern unsigned int fn_82AB60F0(void *list);
extern void *fn_82AB63F8(void *list);
extern void *fn_82AB66F8(void *list, void *item);
extern Pair_82B6CFD8 *fn_82AB67A8(void *item);
extern unsigned int fn_82AB7718(void *shader, void *program);
extern unsigned int fn_82B6CD48(void *pCS_ps, void *pCS_vs);
extern void fn_82AB6DA0(void *shader);
extern void fn_82B7FEE0(void *target, void *shader, void *program);
extern void fn_82B7FFE8(void *target, void *shader, void *program);
extern void *fn_82AB6648(void *list, void *item);
extern void fn_82AB6148(void *list, void *item);

#define OBJLIST_GetNumItems(list) fn_82AB60F0(list)
#define LinkableShaderPair(ps, vs) fn_82B6CD48(ps, vs)

#define SR_ASSERT(e, line)                                                                                   \
    if (!(e))                                                                                                \
    fn_82AB15D0(                                                                                             \
        0, "Assertion failed: %s (%s:%u)", #e,                                                               \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler"      \
        "\\shaderrecycler.cpp",                                                                              \
        line)

int fn_82B6CFD8(Recycler_82B6CFD8 *pSR, void *pProgram, void *pTarget)
{
    void *found;
    unsigned int keys[2];
    void *pShaderPairList;
    void *item;
    Pair_82B6CFD8 *pShaderPair;

    found = 0;
    if (fn_82B69A00(pSR->registry, 10) != 0) {
        keys[0] = fn_82AB6EC0(pProgram, 1);
        keys[1] = fn_82AB6EC0(pProgram, 0);
        if (fn_82B9F338(pSR->tree, keys, 2, &found) != 0) {
            pShaderPairList = fn_82B9F3F8(found);
            SR_ASSERT(OBJLIST_GetNumItems(pShaderPairList) > 0, 0x2ad);
            for (item = fn_82AB63F8(pShaderPairList); item != 0; item = fn_82AB66F8(pShaderPairList, item)) {
                pShaderPair = fn_82AB67A8(item);
                if (fn_82AB7718(pShaderPair->pCS_ps, pProgram) != 0 &&
                    fn_82AB7718(pShaderPair->pCS_vs, pProgram) != 0) {
                    SR_ASSERT(LinkableShaderPair(pShaderPair->pCS_ps, pShaderPair->pCS_vs), 0x2bb);
                    fn_82AB6DA0(pShaderPair->pCS_ps);
                    fn_82AB6DA0(pShaderPair->pCS_vs);
                    fn_82B7FEE0(pTarget, pShaderPair->pCS_ps, pProgram);
                    fn_82B7FFE8(pTarget, pShaderPair->pCS_vs, pProgram);
                    fn_82AB6148(pShaderPairList, fn_82AB6648(pShaderPairList, item));
                    return 1;
                }
            }
        }
    }
    return 0;
}
