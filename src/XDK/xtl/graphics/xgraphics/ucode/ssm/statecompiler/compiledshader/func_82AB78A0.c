extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

typedef struct CompiledShader_82AB78A0 {
    unsigned char pad[0x38];
    void *pFCA;   /* 0x38 */
} CompiledShader_82AB78A0;

extern int fn_82B6BFA0(void *pFCA, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);

int fn_82AB78A0(CompiledShader_82AB78A0 *pCS, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot)
{
    CS_ASSERT(pCS, 0x66f);
    CS_ASSERT(pCS->pFCA, 0x670);
    return fn_82B6BFA0(pCS->pFCA, a, b, pConstIndex, pConstSlot);
}
