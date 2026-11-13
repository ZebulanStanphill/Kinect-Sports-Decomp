extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define XLT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\translator\\xltconvert.cpp", line)

typedef void *(*AllocFn_82B77DA0)(void *context, unsigned int size);
typedef void (*FreeFn_82B77DA0)(void *context, void *p);

typedef struct Translator_82B77DA0 {
    void *context;
    AllocFn_82B77DA0 AllocateSysMem;
    FreeFn_82B77DA0 FreeSysMem;
    void *registry;
    void *texServer;
    void *shaderStore;
} Translator_82B77DA0;

Translator_82B77DA0 *fn_82B77DA0(void *context, AllocFn_82B77DA0 AllocateSysMem,
                                 FreeFn_82B77DA0 FreeSysMem, void *shaderStore,
                                 void *texServer, void *registry)
{
    Translator_82B77DA0 *pNewTranslator;

    XLT_ASSERT(AllocateSysMem, 0x3f23);
    XLT_ASSERT(FreeSysMem, 0x3f24);
    XLT_ASSERT(shaderStore, 0x3f25);
    XLT_ASSERT(texServer, 0x3f26);
    XLT_ASSERT(registry, 0x3f27);
    pNewTranslator = (Translator_82B77DA0 *)AllocateSysMem(context, sizeof(Translator_82B77DA0));
    XLT_ASSERT(pNewTranslator, 0x3f2e);
    pNewTranslator->AllocateSysMem = AllocateSysMem;
    pNewTranslator->FreeSysMem = FreeSysMem;
    pNewTranslator->shaderStore = shaderStore;
    pNewTranslator->registry = registry;
    pNewTranslator->texServer = texServer;
    pNewTranslator->context = context;
    return pNewTranslator;
}
