extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CB_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmcallbacks.cpp", line)

extern void *fn_823AAD80(void *hSSMDevice);
extern int fn_82AB9C00(void *ctx, void *pILShadeCode, unsigned int u32CodeSizeInBytes, void **phShader);
void *fn_82AB4508(void *hSSMDevice, void *pILShadeCode, unsigned int u32CodeSizeInBytes)
{
    void *hShader = 0;
    void *ctx;
    CB_ASSERT(hSSMDevice, 0x109);
    CB_ASSERT(pILShadeCode, 0x10a);
    CB_ASSERT(u32CodeSizeInBytes, 0x10b);
    if (u32CodeSizeInBytes == 0 || pILShadeCode == 0 || hSSMDevice == 0)
        return 0;
    ctx = fn_823AAD80(hSSMDevice);
    if (fn_82AB9C00(ctx, pILShadeCode, u32CodeSizeInBytes, &hShader) != 0)
        return 0;
    return hShader;
}
