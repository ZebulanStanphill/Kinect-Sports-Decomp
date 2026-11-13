extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

typedef void *(*AllocFn_82B7FBF8)(void *context, unsigned int size);
typedef void (*FreeFn_82B7FBF8)(void *context, void *p);

typedef struct CompiledProgram_82B7FBF8 {
    void *context;
    AllocFn_82B7FBF8 AllocateSysMem;
    FreeFn_82B7FBF8 FreeSysMem;
    void *pRegistry;
    void *f10;
    int type;
    void *rs[6];
    void *pCS1;
    void *pCS0;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
} CompiledProgram_82B7FBF8;

extern void *fn_82AB69F0(void *context, AllocFn_82B7FBF8 AllocateSysMem, FreeFn_82B7FBF8 FreeSysMem,
                         void *pRegistry, void *pOListFactory, void *pIntListFactory,
                         void *pObjListFactory, int f24);
extern void fn_82AB6E00(void *pCS, int kind);
extern void fn_82B7DE00(CompiledProgram_82B7FBF8 *pCP);
extern void fn_82B7F170(CompiledProgram_82B7FBF8 *pCP);

CompiledProgram_82B7FBF8 *fn_82B7FBF8(void *context, AllocFn_82B7FBF8 AllocateSysMem,
                                      FreeFn_82B7FBF8 FreeSysMem, void *f10, void *pRegistry,
                                      void *pOListFactory, void *pIntListFactory,
                                      void *pObjListFactory, int type)
{
    CompiledProgram_82B7FBF8 *pCP;
    unsigned int i;

    CP_ASSERT(AllocateSysMem, 0x4e);
    CP_ASSERT(FreeSysMem, 0x4f);
    CP_ASSERT(pRegistry, 0x50);
    CP_ASSERT(pOListFactory, 0x51);
    pCP = (CompiledProgram_82B7FBF8 *)AllocateSysMem(context, sizeof(CompiledProgram_82B7FBF8));
    if (pCP == 0) {
        CP_ASSERT(pCP, 0x57);
        return 0;
    }
    pCP->context = context;
    pCP->AllocateSysMem = AllocateSysMem;
    pCP->FreeSysMem = FreeSysMem;
    pCP->pRegistry = pRegistry;
    pCP->f10 = f10;
    pCP->type = type;
    pCP->f40 = 0;
    pCP->f44 = 0;
    pCP->f48 = 1;
    for (i = 0; i < 6; i++) {
        pCP->rs[i] = AllocateSysMem(context, 0xa0);
        CP_ASSERT(pCP->rs[i], 0x77);
        if (pCP->rs[i] == 0) {
            fn_82B7F170(pCP);
            return 0;
        }
    }
    fn_82B7DE00(pCP);
    if (type != 2) {
        pCP->pCS0 = fn_82AB69F0(context, AllocateSysMem, FreeSysMem, pRegistry, pOListFactory,
                                pIntListFactory, pObjListFactory, 0);
        if (pCP->pCS0 == 0) {
            fn_82B7F170(pCP);
            return 0;
        }
        fn_82AB6E00(pCP->pCS0, 0);
    }
    pCP->pCS1 = fn_82AB69F0(context, AllocateSysMem, FreeSysMem, pRegistry, pOListFactory,
                            pIntListFactory, pObjListFactory, 0);
    if (pCP->pCS1 == 0) {
            fn_82B7F170(pCP);
            return 0;
        }
    fn_82AB6E00(pCP->pCS1, 1);
    pCP->f38 = 0;
    pCP->f3c = 0;
    return pCP;
}
