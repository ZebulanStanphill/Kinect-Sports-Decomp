typedef unsigned int uint;
extern int fn_82AB15D0();

#define FCA_ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\fetchconstallocator.cpp", line)
#define E_FA_DECREMENTAL 1

typedef void *(*AllocFn_82B6BE30)(void *context, uint size);
typedef void (*FreeFn_82B6BE30)(void *context, void *p);

typedef struct FetchBlock_82B6BE30 {
    uint bIsUsed;
    int kind;
    uint count;
    int eType[3];
    uint value[3];
} FetchBlock_82B6BE30;

typedef struct FCA_82B6BE30 {
    void *context;
    AllocFn_82B6BE30 AllocateSysMem;
    FreeFn_82B6BE30 FreeSysMem;
    void *pRegistry;
    int eMode;
    int f14;
    FetchBlock_82B6BE30 blocks[32];
    int f498;
    int f49c;
    int f4a0;
    uint nUsed;
} FCA_82B6BE30;

FCA_82B6BE30 *fn_82B6BE30(void *context, AllocFn_82B6BE30 AllocateSysMem, FreeFn_82B6BE30 FreeSysMem,
                          void *pRegistry, int eMode, int f14)
{
    FCA_82B6BE30 *pFCA;

    FCA_ASSERT(AllocateSysMem, 0x9a);
    FCA_ASSERT(FreeSysMem, 0x9b);
    FCA_ASSERT(pRegistry, 0x9c);
    pFCA = (FCA_82B6BE30 *)AllocateSysMem(context, sizeof(FCA_82B6BE30));
    if (pFCA == 0) {
        FCA_ASSERT(pFCA, 0xa2);
        return 0;
    }
    pFCA->context = context;
    pFCA->AllocateSysMem = AllocateSysMem;
    pFCA->FreeSysMem = FreeSysMem;
    pFCA->pRegistry = pRegistry;
    pFCA->eMode = eMode;
    pFCA->f14 = f14;
    if (eMode == 0) {
        pFCA->f498 = -1;
    }
    else {
        FCA_ASSERT(eMode == E_FA_DECREMENTAL, 0xba);
        pFCA->f498 = 0x20;
    }
    pFCA->f49c = -1;
    pFCA->f4a0 = 0;
    pFCA->nUsed = 0;
    return pFCA;
}
