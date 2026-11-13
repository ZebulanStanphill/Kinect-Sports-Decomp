extern void fn_82AB15D0(int level, const char *fmt, ...);

typedef struct Entry_82B69998 Entry_82B69998;
struct Entry_82B69998 {
    void *ctx;
    void (*callback)(void *ctx, Entry_82B69998 *e);
};

void fn_82B69998(Entry_82B69998 *pSt)
{
    if (pSt == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pSt",
                    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmregistry.cpp",
                    0xae);
    }
    pSt->callback(pSt->ctx, pSt);
}
