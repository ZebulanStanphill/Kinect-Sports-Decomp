extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

#define TX_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\txserver.cpp", line)

typedef struct DevClientInterface_82B6DE98 {
    char pad0[0x10];
    void *context;
    void *(*AllocateSysMem)(void *context, unsigned int size);
    void (*FreeSysMem)(void *context, void *p);
    void *(*AllocateVidMem)(void *context, unsigned int size);
    void (*FreeVidMem)(void *context, void *p);
    char pad24[0x24];
} DevClientInterface_82B6DE98;

typedef struct TxCreateInfo_82B6DE98 {
    unsigned char data[0x20];
} TxCreateInfo_82B6DE98;

typedef struct TxServer_82B6DE98 {
    int f0;
    char pad4[0x94];
    TxCreateInfo_82B6DE98 createInfo;       /* 0x98 */
    char padb8[0x120];
    DevClientInterface_82B6DE98 devClientInterface; /* 0x1d8 */
} TxServer_82B6DE98;

TxServer_82B6DE98 *fn_82B6DE98(TxCreateInfo_82B6DE98 *pTxCreateInfo, DevClientInterface_82B6DE98 *pDevClientInterface)
{
    TxServer_82B6DE98 *pServer;

    TX_ASSERT(pTxCreateInfo, 0x9d);
    TX_ASSERT(pDevClientInterface, 0x9e);
    TX_ASSERT(pDevClientInterface->AllocateSysMem, 0x9f);
    TX_ASSERT(pDevClientInterface->FreeSysMem, 0xa0);
    TX_ASSERT(pDevClientInterface->AllocateVidMem, 0xa1);
    TX_ASSERT(pDevClientInterface->FreeVidMem, 0xa2);

    pServer = (TxServer_82B6DE98 *)pDevClientInterface->AllocateSysMem(pDevClientInterface->context, sizeof(TxServer_82B6DE98));
    if (pServer == 0)
        return 0;
    memset(pServer, 0, sizeof(TxServer_82B6DE98));
    pServer->f0 = 0;
    pServer->createInfo = *pTxCreateInfo;
    pServer->devClientInterface = *pDevClientInterface;
    return pServer;
}
