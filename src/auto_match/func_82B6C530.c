extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define FCA_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp", line)

#define E_FETCH_TYPE_TEXTURE 0
#define E_FETCH_TYPE_TEXTURE_INTERNAL 2

typedef struct FCA_82B6C530 {
    char pad0[0x14];
    void *f14;
} FCA_82B6C530;

extern void *fn_82B6C280(FCA_82B6C530 *pFCA, int eType, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);
extern void *fn_82B6C150(FCA_82B6C530 *pFCA, int eType, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);
extern void *fn_82B6C390(FCA_82B6C530 *pFCA, void *pAS, int eType, int b, unsigned int *pConstIndex, unsigned int *pConstSlot);

void *fn_82B6C530(FCA_82B6C530 *pFCA, void *pAS, int eType, int b, unsigned int *pConstIndex, unsigned int *pConstSlot)
{
    FCA_ASSERT(pFCA, 0x32b);
    FCA_ASSERT(pAS, 0x32c);
    FCA_ASSERT(pConstIndex, 0x32d);
    FCA_ASSERT(pConstSlot, 0x32e);

    if (eType == 1 || eType == 3) {
        if (pFCA->f14 != 0) {
            return fn_82B6C390(pFCA, pAS, eType, b, pConstIndex, pConstSlot);
        }
        return fn_82B6C150(pFCA, eType, b, pConstIndex, pConstSlot);
    }
    FCA_ASSERT(eType == E_FETCH_TYPE_TEXTURE_INTERNAL || eType == E_FETCH_TYPE_TEXTURE, 0x341);
    return fn_82B6C280(pFCA, eType, b, pConstIndex, pConstSlot);
}
