extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

#define IL_SHADER_VERTEX 0
#define IL_SHADER_PIXEL 1

typedef struct CompiledProgram_82B7FAF0 {
    char pad[0x30];
    void *pCS_ps;         /* 0x30 */
    void *pCS_vs;         /* 0x34 */
} CompiledProgram_82B7FAF0;

extern void fn_82AB7CB8(void *pCS, int a, int b, int c, int d, int e, int f, int g, int h, int i);

int fn_82B7FAF0(CompiledProgram_82B7FAF0 *pCP, int eShaderType, int a, int b, int c, int d, int e, int f,
                int g, int h, int i)
{
    CP_ASSERT(pCP, 0x5e5);
    if (eShaderType == IL_SHADER_VERTEX) {
        fn_82AB7CB8(pCP->pCS_vs, a, b, c, d, e, f, g, h, i);
    } else {
        CP_ASSERT(eShaderType == IL_SHADER_PIXEL, 0x5ef);
        fn_82AB7CB8(pCP->pCS_ps, a, b, c, d, e, f, g, h, i);
    }
    return 0;
}
