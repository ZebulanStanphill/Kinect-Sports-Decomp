extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HSC_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\hashstatecache.cpp", line)

typedef struct StateCache_82B6AF78 {
    char pad[0x10];
    void *f10;
} StateCache_82B6AF78;

typedef struct AS_82B6AF78 {
    char pad[0x118];
    void *f118;
} AS_82B6AF78;

extern void fn_82B6D6E8(void *a, void *b);

int fn_82B6AF78(StateCache_82B6AF78 *pStateCache, AS_82B6AF78 *pAS)
{
    HSC_ASSERT(pStateCache, 0x1e2);
    HSC_ASSERT(pAS, 0x1e3);
    if (pAS->f118 != 0) {
        fn_82B6D6E8(pStateCache->f10, pAS->f118);
    }
    return 0;
}
