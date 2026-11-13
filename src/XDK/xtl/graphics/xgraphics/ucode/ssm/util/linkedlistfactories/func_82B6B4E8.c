extern void fn_82AB15D0(int level, const char *fmt, ...);
extern void fn_82B6B0C8(void *pool);

#define LLF_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", line)

typedef struct ILF_82B6B4E8 {
    void *context;
    void *(*AllocateSysMem)(void *context, unsigned int size);
    void (*FreeSysMem)(void *context, void *p);
    unsigned int numAcquiredLists;
    void *listPool;
    void *itemPool;
} ILF_82B6B4E8;

void fn_82B6B4E8(ILF_82B6B4E8 *pILF)
{
    LLF_ASSERT(pILF, 0x177);
    LLF_ASSERT(pILF->numAcquiredLists == 0, 0x178);
    if (pILF->itemPool != 0) {
        fn_82B6B0C8(pILF->itemPool);
    }
    if (pILF->listPool != 0) {
        fn_82B6B0C8(pILF->listPool);
    }
    pILF->FreeSysMem(pILF->context, pILF);
}
