extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HSC_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\hashstatecache.cpp", line)

typedef struct StateCache_82B6AF00 StateCache_82B6AF00;

int fn_82B6AF00(StateCache_82B6AF00 *pStateCache, void *hSCData)
{
    HSC_ASSERT(pStateCache, 0x1bf);
    HSC_ASSERT(!hSCData, 0x1c0);
    return 0;
}
