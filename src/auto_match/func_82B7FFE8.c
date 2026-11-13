extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

#define IL_SHADER_VERTEX 0

typedef struct CompiledProgram_82B7FFE8 {
    void *ctx;
    void *(*AllocateSysMem)(void *ctx, unsigned int size);
    void (*FreeSysMem)(void *ctx, void *p);
    char padC[0x34 - 0xc];
    void *pCS_vs;
    int f38;
    void *f3c;
} CompiledProgram_82B7FFE8;

extern void fn_82AB6F30(void *pCS, int *eShaderType);
extern void fn_82AB6BC8(void *pCS);
extern void *fn_82AB74F8(void *pCS);
extern void fn_82B7FE30(CompiledProgram_82B7FFE8 *pCP, void *p);
extern void *fn_82B7F730(CompiledProgram_82B7FFE8 *pCP, void *pCS_vs, void *a);

void fn_82B7FFE8(CompiledProgram_82B7FFE8 *pCP, void *pCS_vs, void *a)
{
    int eShaderType = 1;

    CP_ASSERT(pCP, 0x3b6);
    CP_ASSERT(pCS_vs, 0x3b7);
    fn_82AB6F30(pCS_vs, &eShaderType);
    CP_ASSERT(eShaderType == IL_SHADER_VERTEX, 0x3bc);
    fn_82AB6BC8(pCP->pCS_vs);
    pCP->pCS_vs = pCS_vs;
    if (pCP->f3c != 0) {
        pCP->FreeSysMem(pCP->ctx, pCP->f3c);
    }
    fn_82B7FE30(pCP, fn_82AB74F8(pCS_vs));
    pCP->f3c = fn_82B7F730(pCP, pCS_vs, a);
}
