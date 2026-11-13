extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SSM_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmcallbacks.cpp", line)

typedef void *PSSM_OBJINFO;

extern void *fn_82AB4658(void *hASObjHandle);
extern void *fn_823AA458(PSSM_OBJINFO info);
extern void fn_82AB9130(void *hSSMObject, void *hASObjHandle);
extern void fn_82B69D70(void *hASObjHandle);

#define GetDevice fn_823AA458

int fn_82AB4970(void *hASObjHandle)
{
    void *hSSMObject;

    SSM_ASSERT(hASObjHandle, 0x293);
    hSSMObject = fn_82AB4658(hASObjHandle);
    SSM_ASSERT(hSSMObject, 0x297);
    SSM_ASSERT(GetDevice((PSSM_OBJINFO) hSSMObject), 0x298);
    fn_82AB9130(hSSMObject, hASObjHandle);
    fn_82B69D70(hASObjHandle);
    return 0;
}
