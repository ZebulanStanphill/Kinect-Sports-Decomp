extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *memcpy(void *, const void *, unsigned int);

#define CS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledshader.cpp", line)

#define R400_NUM_INTERP 16

typedef struct InterpUsage_82AB72A0 {
    unsigned char data[0x94];
} InterpUsage_82AB72A0;

typedef struct CompiledShader_82AB72A0 {
    unsigned char pad[0x3c];
    InterpUsage_82AB72A0 interp[R400_NUM_INTERP];
} CompiledShader_82AB72A0;

int fn_82AB72A0(CompiledShader_82AB72A0 *pCS, unsigned int interpIndex, InterpUsage_82AB72A0 *pReturnUsage)
{
    CS_ASSERT(pCS, 0x397);
    CS_ASSERT(interpIndex < R400_NUM_INTERP, 0x398);
    CS_ASSERT(pReturnUsage, 0x399);
    memcpy(pReturnUsage, &pCS->interp[interpIndex], sizeof(InterpUsage_82AB72A0));
    return 0;
}
