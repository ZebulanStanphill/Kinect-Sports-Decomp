extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *memset(void *, int, unsigned int);

#define TX_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\txserver.cpp", line)

#define E_FETCH_TEX_INTERNAL_NUMTYPES 4

typedef struct DevClientInterface_82B6E010 {
    char pad0[0x10];
    void *context;                                         /* 0x10 */
    void *(*AllocateSysMem)(void *context, unsigned int size);
    int (*FreeSysMem)(void *context, void *p);             /* 0x18 */
    void *(*AllocateVidMem)(void *context, unsigned int size);
    int (*FreeVidMem)(void *context, void *mem);           /* 0x20 */
    char pad24[0x24];
} DevClientInterface_82B6E010;

typedef struct TxInternal_82B6E010 {
    char pad0[0x14];
    char vidMem[0x10];   /* 0x14 */
    void *vidMemBase;    /* 0x24 */
    void *sysMem;        /* 0x28 */
} TxInternal_82B6E010;

typedef struct TxServer_82B6E010 {
    char pad0[0x128];
    TxInternal_82B6E010 internal[E_FETCH_TEX_INTERNAL_NUMTYPES];   /* 0x128 */
    DevClientInterface_82B6E010 devClientInterface;                /* 0x1d8 */
} TxServer_82B6E010;

int fn_82B6E010(TxServer_82B6E010 *pTS, unsigned int TxHandle)
{
    TX_ASSERT(pTS, 0x11d);
    if (!(TxHandle < E_FETCH_TEX_INTERNAL_NUMTYPES)) {
        TX_ASSERT(TxHandle < E_FETCH_TEX_INTERNAL_NUMTYPES, 0x11e);
        return 0x19;
    }
    if (pTS->internal[TxHandle].vidMemBase != 0) {
        if (pTS->devClientInterface.FreeVidMem(pTS->devClientInterface.context, pTS->internal[TxHandle].vidMem) != 0)
            TX_ASSERT(0, 0x12b);
    }
    if (pTS->internal[TxHandle].sysMem != 0) {
        if (pTS->devClientInterface.FreeSysMem(pTS->devClientInterface.context, pTS->internal[TxHandle].sysMem) != 0)
            TX_ASSERT(0, 0x134);
    }
    memset(&pTS->internal[TxHandle], 0, sizeof(TxInternal_82B6E010));
    return 0;
}
