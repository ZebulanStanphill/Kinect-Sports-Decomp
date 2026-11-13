extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *memcpy(void *, const void *, unsigned int);

#define SSM_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmobject.cpp", line)

typedef struct ClientInterface_82AB8F70 {
    void *context;
    int unk4;
    void *GetCmdBuffSpace;
    int unkC;
    int unk10;
    void *UpdateCmdBuffSpace;
    void *CheckTSRetired;
    void *ConvertToUASValues;
} ClientInterface_82AB8F70;

typedef struct Device_82AB8F70 {
    int pad[4];
    void *context;
    void *(*AllocateSysMem)(void *context, unsigned int size);
    void (*FreeSysMem)(void *context, void *p);
} Device_82AB8F70;

typedef struct SSMObject_82AB8F70 {
    ClientInterface_82AB8F70 clientInterface;
    void *hSSMDevice;
    void *list;
    int unk28;
    int unk2C;
} SSMObject_82AB8F70;

extern Device_82AB8F70 *fn_82BA02A8(void *hSSMDevice);
extern void *fn_82AB4D18(void *context, void *AllocateSysMem, void *FreeSysMem, int count);
extern void fn_82AB85A8(void *hSSMDevice, SSMObject_82AB8F70 *obj);

SSMObject_82AB8F70 *fn_82AB8F70(void *hSSMDevice, ClientInterface_82AB8F70 *pClientInterface)
{
    Device_82AB8F70 *pDevice;
    SSMObject_82AB8F70 *pObj;

    SSM_ASSERT(hSSMDevice, 0x84);
    SSM_ASSERT(pClientInterface, 0x85);
    if (hSSMDevice == 0 || pClientInterface == 0)
        return 0;
    pDevice = fn_82BA02A8(hSSMDevice);
    pObj = (SSMObject_82AB8F70 *)pDevice->AllocateSysMem(pDevice->context, sizeof(SSMObject_82AB8F70));
    if (pObj == 0)
        return 0;
    pObj->hSSMDevice = hSSMDevice;
    pObj->unk28 = 0;
    pObj->unk2C = 0;
    SSM_ASSERT(pClientInterface->GetCmdBuffSpace, 0xa9);
    SSM_ASSERT(pClientInterface->UpdateCmdBuffSpace, 0xaa);
    SSM_ASSERT(pClientInterface->CheckTSRetired, 0xab);
    SSM_ASSERT(pClientInterface->ConvertToUASValues, 0xac);
    memcpy(&pObj->clientInterface, pClientInterface, sizeof(ClientInterface_82AB8F70));
    pObj->list = fn_82AB4D18(pDevice->context, pDevice->AllocateSysMem, pDevice->FreeSysMem, 10);
    fn_82AB85A8(hSSMDevice, pObj);
    return pObj;
}
