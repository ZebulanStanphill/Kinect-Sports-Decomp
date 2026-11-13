extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SSM_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmcallbacks.cpp", line)

extern void *fn_82B69EC0(void *pSSMObj, void *arg);
extern void fn_82B69AF8(void *pAS);
extern void fn_82AB9110(void *pSSMObj, void *pAS);

void *fn_82AB48D8(void *pSSMObj, void *arg)
{
    void *pAS;

    SSM_ASSERT(pSSMObj, 0x26b);
    pAS = fn_82B69EC0(pSSMObj, arg);
    SSM_ASSERT(pAS, 0x26f);
    fn_82B69AF8(pAS);
    fn_82AB9110(pSSMObj, pAS);
    return pAS;
}
