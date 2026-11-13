extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define FCA_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp", line)

#define E_SSM_OK 0

typedef struct FCA_82B6C698 FCA_82B6C698;

extern void *fn_82B6C530(FCA_82B6C698 *pFCA, void *pAS, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);
extern int fn_82B6BFA0(FCA_82B6C698 *pFCA, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);

int fn_82B6C698(FCA_82B6C698 *pFCA, void *pAS, int a, int b, unsigned int *pConstIndex, unsigned int *pConstSlot)
{
    int eRetVal = E_SSM_OK;

    FCA_ASSERT(pFCA, 0x372);
    FCA_ASSERT(pAS, 0x373);
    FCA_ASSERT(pConstIndex, 0x374);
    FCA_ASSERT(pConstSlot, 0x375);

    if (fn_82B6C530(pFCA, pAS, a, b, pConstIndex, pConstSlot) == 0) {
        eRetVal = fn_82B6BFA0(pFCA, a, b, pConstIndex, pConstSlot);
        FCA_ASSERT(eRetVal == E_SSM_OK, 0x37d);
    }
    return eRetVal;
}
