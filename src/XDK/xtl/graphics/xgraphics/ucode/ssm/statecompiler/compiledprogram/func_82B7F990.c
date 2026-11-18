extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_FILE                                                                                              \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\"        \
    "compiledprogram.cpp"

#define CP_ASSERT(e, line)                                                                                   \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, CP_FILE, line)

#define IL_SHADER_VERTEX 0
#define IL_SHADER_PIXEL 1

typedef struct CompiledProgram_82B7F990 {
    char pad[0x30];
    void *pCS_ps;
    void *pCS_vs;
} CompiledProgram_82B7F990;

extern int fn_82AB7B80(void *pCS, void *a, void *b);

int fn_82B7F990(CompiledProgram_82B7F990 *pCP, int eShaderType, void *a, void *b)
{
    int sRet;

    CP_ASSERT(pCP, 0x504);
    if (eShaderType == IL_SHADER_VERTEX) {
        sRet = fn_82AB7B80(pCP->pCS_vs, a, b);
    } else {
        CP_ASSERT(eShaderType == IL_SHADER_PIXEL, 0x50d);
        sRet = fn_82AB7B80(pCP->pCS_ps, a, b);
    }
    return sRet;
}
