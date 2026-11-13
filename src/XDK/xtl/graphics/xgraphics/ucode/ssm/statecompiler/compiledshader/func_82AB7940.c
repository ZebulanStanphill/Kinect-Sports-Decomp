extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

typedef struct CompiledShader_82AB7940 {
    unsigned char pad[0x24];
    void *f24;
    unsigned char pad28[0x10];
    void *pFCA;   /* 0x38 */
} CompiledShader_82AB7940;

extern int fn_82B6C698(void *pFCA, void *pAS, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);
extern unsigned int fn_82AB71F0(void *pAS, int k, int b);
extern void fn_82AB7608(CompiledShader_82AB7940 *pCS, int k, int b, unsigned int v);

int fn_82AB7940(CompiledShader_82AB7940 *pCS, void *pAS, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot)
{
    int eRetVal;
    CS_ASSERT(pCS, 0x6dc);
    CS_ASSERT(pCS->pFCA, 0x6dd);
    CS_ASSERT(pAS, 0x6de);
    eRetVal = fn_82B6C698(pCS->pFCA, pAS, a, b, pConstIndex, pConstSlot);
    if ((a == 1 || a == 3) && eRetVal == 0 && pCS->f24 == 0) {
        fn_82AB7608(pCS, 0x28, b, fn_82AB71F0(pAS, 0x28, b));
    }
    return eRetVal;
}
