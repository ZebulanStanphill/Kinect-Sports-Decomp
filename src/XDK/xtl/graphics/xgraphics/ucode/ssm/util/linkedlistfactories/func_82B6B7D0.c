extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LLF_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", line)

typedef struct LF_82B6B7D0 {
    void *f0;
    void *f4;
    void *f8;
    unsigned int numAcquiredLists;
    void *pool;
    void *f14;
} LF_82B6B7D0;

extern void *fn_82B6B128(void *pool);
extern void fn_82AB5EC0(void *list, void *a);

void *fn_82B6B7D0(LF_82B6B7D0 *pOLF)
{
    void *pNewList;

    LLF_ASSERT(pOLF, 0x278);
    pNewList = fn_82B6B128(pOLF->pool);
    LLF_ASSERT(pNewList, 0x27e);
    if (pNewList != 0) {
        pOLF->numAcquiredLists++;
        fn_82AB5EC0(pNewList, pOLF->f14);
    }
    return pNewList;
}
