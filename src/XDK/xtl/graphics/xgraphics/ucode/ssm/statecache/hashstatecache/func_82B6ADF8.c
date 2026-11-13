typedef unsigned int U32;
extern void fn_82AB15D0(int level, const char *fmt, ...);
extern void *fn_82B6E9E0(void *hashTable);
extern void fn_82B6D6E8(void *factory, void *pProgramKey);
extern void fn_82B6E6D0(void *hashTable);

#define HSC_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\hashstatecache.cpp", line)

typedef struct StateCache_82B6ADF8 {
    void *context;
    void *(*AllocateSysMem)(void *context, U32 size);
    void (*FreeSysMem)(void *context, void *p);
    U32 pad0c;
    void *factory;    /* 0x10 */
    U32 pad14;
    void *hashTable;  /* 0x18 */
} StateCache_82B6ADF8;

int fn_82B6ADF8(StateCache_82B6ADF8 *pStateCache)
{
    void *pProgramKey;

    HSC_ASSERT(pStateCache, 0xbf);
    while ((pProgramKey = fn_82B6E9E0(pStateCache->hashTable)) != 0) {
        HSC_ASSERT(pProgramKey, 0xc4);
        fn_82B6D6E8(pStateCache->factory, pProgramKey);
    }
    fn_82B6E6D0(pStateCache->hashTable);
    pStateCache->FreeSysMem(pStateCache->context, pStateCache);
    return 0;
}
