extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_FILE                                                                                              \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\"        \
    "compiledprogram.cpp"

#define CP_ASSERT(e, line)                                                                                   \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, CP_FILE, line)

#define IL_SHADER_VERTEX 0
#define IL_SHADER_PIXEL 1

typedef struct CompiledProgram_82B7F8E0 {
    unsigned char pad[0x30];
    void *pPixelShader;  /* 0x30 */
    void *pVertexShader; /* 0x34 */
} CompiledProgram_82B7F8E0;

extern int fn_82AB7AB0(void *pCS, int a, int b, float f);

int fn_82B7F8E0(CompiledProgram_82B7F8E0 *pCP, int eShaderType, int a, int b, float f)
{
    int sRet;

    CP_ASSERT(pCP, 0x482);
    if (eShaderType == IL_SHADER_VERTEX) {
        sRet = fn_82AB7AB0(pCP->pVertexShader, a, b, f);
    } else {
        CP_ASSERT(eShaderType == IL_SHADER_PIXEL, 0x48c);
        sRet = fn_82AB7AB0(pCP->pPixelShader, a, b, f);
    }
    return sRet;
}
