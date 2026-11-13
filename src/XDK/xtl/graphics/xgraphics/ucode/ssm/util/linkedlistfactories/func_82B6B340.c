extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LLF_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", line)

typedef struct LF_82B6B340 {
    void *f0;
    void *f4;
    void *f8;
    unsigned int numAcquiredLists;
    void *pool;
    void *f14;
} LF_82B6B340;

extern void *fn_82B6B128(void *pool);
extern void fn_82AB5278(void *list, void *a, void *b, void *c, void *d);

void *fn_82B6B340(LF_82B6B340 *pOLF)
{
    void *pNewList;

    LLF_ASSERT(pOLF, 0xba);
    pNewList = fn_82B6B128(pOLF->pool);
    LLF_ASSERT(pNewList, 0xc0);
    if (pNewList != 0) {
        pOLF->numAcquiredLists++;
        fn_82AB5278(pNewList, pOLF->f14, pOLF->f0, pOLF->f4, pOLF->f8);
    }
    return pNewList;
}
