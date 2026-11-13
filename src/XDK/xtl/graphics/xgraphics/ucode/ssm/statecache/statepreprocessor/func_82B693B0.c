extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\statepreprocessor.cpp", line)

typedef void *(*AllocFn_82B693B0)(void *context, unsigned int size);
typedef void (*FreeFn_82B693B0)(void *context, void *p);

typedef struct StatePreprocessor_82B693B0 {
    void *context;
    AllocFn_82B693B0 AllocateSysMem;
    FreeFn_82B693B0 FreeSysMem;
    void *pStateCache;
    void *pRegistry;
} StatePreprocessor_82B693B0;

StatePreprocessor_82B693B0 *fn_82B693B0(void *context, AllocFn_82B693B0 AllocateSysMem,
                                        FreeFn_82B693B0 FreeSysMem, void *pStateCache,
                                        void *pRegistry)
{
    StatePreprocessor_82B693B0 *p;

    SP_ASSERT(AllocateSysMem, 0x4b);
    SP_ASSERT(FreeSysMem, 0x4c);
    SP_ASSERT(pStateCache, 0x4d);
    SP_ASSERT(pRegistry, 0x4e);
    p = (StatePreprocessor_82B693B0 *)AllocateSysMem(context, sizeof(StatePreprocessor_82B693B0));
    if (p == 0) {
        SP_ASSERT(!"Failed to allocate a new State Preprocessor", 0x54);
        return 0;
    }
    p->context = context;
    p->AllocateSysMem = AllocateSysMem;
    p->FreeSysMem = FreeSysMem;
    p->pStateCache = pStateCache;
    p->pRegistry = pRegistry;
    return p;
}
