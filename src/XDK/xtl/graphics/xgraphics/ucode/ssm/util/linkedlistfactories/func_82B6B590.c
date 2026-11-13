extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LLF_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", line)

typedef struct LF_82B6B590 {
    void *f0;
    void *f4;
    void *f8;
    unsigned int numAcquiredLists;
    void *pool;
    void *f14;
} LF_82B6B590;

extern void *fn_82B6B128(void *pool);
extern void fn_82AB5B20(void *list, void *a);

void *fn_82B6B590(LF_82B6B590 *pILF)
{
    void *pNewList;

    LLF_ASSERT(pILF, 0x19b);
    pNewList = fn_82B6B128(pILF->pool);
    LLF_ASSERT(pNewList, 0x1a1);
    if (pNewList != 0) {
        pILF->numAcquiredLists++;
        fn_82AB5B20(pNewList, pILF->f14);
    }
    return pNewList;
}
