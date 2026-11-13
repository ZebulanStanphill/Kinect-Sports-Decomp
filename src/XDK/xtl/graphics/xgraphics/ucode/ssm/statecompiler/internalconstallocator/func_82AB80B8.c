extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define ICA_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\internalconstallocator.cpp", line)

typedef void *(*AllocFn_82AB80B8)(void *context, unsigned int size);
typedef void (*FreeFn_82AB80B8)(void *context, void *p);

typedef struct VecConst_82AB80B8 {
    unsigned char index;
    unsigned char pad[0x23];
} VecConst_82AB80B8;

typedef struct ScalarConst_82AB80B8 {
    unsigned char index;
    unsigned char pad[0xb];
} ScalarConst_82AB80B8;

typedef struct ICA_82AB80B8 {
    void *context;
    AllocFn_82AB80B8 AllocateSysMem;
    FreeFn_82AB80B8 FreeSysMem;
    void *pRegistry;
    VecConst_82AB80B8 vecConsts[32];
    ScalarConst_82AB80B8 scalarConsts[128];
} ICA_82AB80B8;

ICA_82AB80B8 *fn_82AB80B8(void *context, AllocFn_82AB80B8 AllocateSysMem, FreeFn_82AB80B8 FreeSysMem,
                          void *pRegistry)
{
    ICA_82AB80B8 *pICA;
    unsigned int i;

    ICA_ASSERT(AllocateSysMem, 0x4a);
    ICA_ASSERT(FreeSysMem, 0x4b);
    ICA_ASSERT(pRegistry, 0x4c);
    pICA = (ICA_82AB80B8 *)AllocateSysMem(context, sizeof(ICA_82AB80B8));
    if (pICA == 0) {
        ICA_ASSERT(pICA, 0x50);
    } else {
        pICA->context = context;
        pICA->AllocateSysMem = AllocateSysMem;
        pICA->FreeSysMem = FreeSysMem;
        pICA->pRegistry = pRegistry;
        for (i = 0; i < 32; i++) {
            pICA->vecConsts[i].index = (unsigned char)i;
        }
        for (i = 0; i < 128; i++) {
            pICA->scalarConsts[i].index = (unsigned char)i;
        }
    }
    return pICA;
}
