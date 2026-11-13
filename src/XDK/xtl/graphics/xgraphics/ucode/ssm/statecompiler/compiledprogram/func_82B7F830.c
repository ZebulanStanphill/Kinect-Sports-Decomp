extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

#define IL_SHADER_VERTEX 0
#define IL_SHADER_PIXEL 1

typedef struct CompiledProgram_82B7F830 {
    void *ctx;
    void *(*AllocateSysMem)(void *ctx, unsigned int size);
    void (*FreeSysMem)(void *ctx, void *p);
    char padC[0x30 - 0xc];
    void *pCS_ps;
    void *pCS_vs;
} CompiledProgram_82B7F830;

extern int fn_82AB78A0(void *pCS, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);

int fn_82B7F830(CompiledProgram_82B7F830 *pCP, int eShaderType, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot)
{
    CP_ASSERT(pCP, 0x443);
    if (eShaderType == IL_SHADER_VERTEX)
        return fn_82AB78A0(pCP->pCS_vs, a, b, pConstIndex, pConstSlot);
    CP_ASSERT(eShaderType == IL_SHADER_PIXEL, 0x44d);
    return fn_82AB78A0(pCP->pCS_ps, a, b, pConstIndex, pConstSlot);
}
