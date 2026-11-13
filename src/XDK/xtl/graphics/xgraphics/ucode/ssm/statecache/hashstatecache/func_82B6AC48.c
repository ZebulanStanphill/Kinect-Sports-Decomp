extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *fn_82B6E5C0(void *context, void *AllocateSysMem, void *FreeSysMem, void *pOLF, int count);

#define SC_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\hashstatecache.cpp", line)

typedef void *(*AllocFn_82B6AC48)(void *context, unsigned int size);
typedef void (*FreeFn_82B6AC48)(void *context, void *p);

typedef struct StateCache_82B6AC48 {
    void *context;
    AllocFn_82B6AC48 AllocateSysMem;
    FreeFn_82B6AC48 FreeSysMem;
    void *pCompiler;
    void *pProgramStore;
    void *pPostProcessor;
    void *hashTable;
} StateCache_82B6AC48;

StateCache_82B6AC48 *fn_82B6AC48(void *context, AllocFn_82B6AC48 AllocateSysMem,
                                 FreeFn_82B6AC48 FreeSysMem, void *pCompiler,
                                 void *pProgramStore, void *pPostProcessor,
                                 void *pILF, void *pOLF)
{
    StateCache_82B6AC48 *pNewStateCache;

    SC_ASSERT(AllocateSysMem, 0x7f);
    SC_ASSERT(FreeSysMem, 0x80);
    SC_ASSERT(pOLF, 0x81);
    SC_ASSERT(pCompiler, 0x87);
    SC_ASSERT(pProgramStore, 0x88);
    SC_ASSERT(pPostProcessor, 0x89);
    SC_ASSERT(pILF, 0x8a);
    pNewStateCache = (StateCache_82B6AC48 *)AllocateSysMem(context, sizeof(StateCache_82B6AC48));
    SC_ASSERT(pNewStateCache, 0x91);
    pNewStateCache->context = context;
    pNewStateCache->AllocateSysMem = AllocateSysMem;
    pNewStateCache->FreeSysMem = FreeSysMem;
    pNewStateCache->pCompiler = pCompiler;
    pNewStateCache->pProgramStore = pProgramStore;
    pNewStateCache->pPostProcessor = pPostProcessor;
    pNewStateCache->hashTable = fn_82B6E5C0(context, AllocateSysMem, FreeSysMem, pOLF, 100);
    return pNewStateCache;
}
