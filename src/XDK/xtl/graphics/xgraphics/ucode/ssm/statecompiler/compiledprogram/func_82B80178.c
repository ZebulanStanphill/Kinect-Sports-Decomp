extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

typedef struct CompiledProgram_82B7FE30 {
    unsigned int unk0[12];
    void *pCS_ps;   /* 0x30 */
    void *pCS_vs;   /* 0x34 */
} CompiledProgram_82B7FE30;

extern void *fn_82AB74F8(void *pCS);
extern void fn_82B7FE30(CompiledProgram_82B7FE30 *pCP, void *p);

void fn_82B80178(CompiledProgram_82B7FE30 *pCP)
{
    CP_ASSERT(pCP, 0x408);
    CP_ASSERT(pCP->pCS_vs, 1033);
    fn_82B7FE30(pCP, fn_82AB74F8(pCP->pCS_vs));
}
