extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

typedef struct CompiledShader_82AB7C30 {
    unsigned int unk0[12];
    void *pICA;      /* 0x30 */
    unsigned int unk34;
} CompiledShader_82AB7C30;

extern void fn_82AB8340(void *pICA, void *p);

void fn_82AB7C30(CompiledShader_82AB7C30 *pCS)
{
    CS_ASSERT(pCS, 0x7de);
    CS_ASSERT(pCS->pICA, 0x7e2);
    fn_82AB8340(pCS->pICA, &pCS->unk34);
    pCS->pICA = 0;
}
