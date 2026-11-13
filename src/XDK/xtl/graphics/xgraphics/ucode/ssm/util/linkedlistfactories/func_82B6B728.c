typedef unsigned int U32;
extern void fn_82AB15D0(int level, const char *fmt, ...);
extern void fn_82B6B0C8(void *pool);

#define LLF_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", line)

typedef struct OLF_82B6B728 {
    void *context;
    void *(*AllocateSysMem)(void *context, U32 size);
    void (*FreeSysMem)(void *context, void *p);
    U32 numAcquiredLists;
    void *listPool;
    void *itemPool;
} OLF_82B6B728;

void fn_82B6B728(OLF_82B6B728 *pOLF)
{
    LLF_ASSERT(pOLF, 0x254);
    LLF_ASSERT(pOLF->numAcquiredLists == 0, 0x255);
    if (pOLF->itemPool != 0) {
        fn_82B6B0C8(pOLF->itemPool);
    }
    if (pOLF->listPool != 0) {
        fn_82B6B0C8(pOLF->listPool);
    }
    pOLF->FreeSysMem(pOLF->context, pOLF);
}
