typedef struct {
    char pad0[0x48];
    void *objects;
    unsigned int CurrentKey;
} SSMDevice_82AB8668;

extern void fn_82AB15D0(int level, const char *fmt, ...);
extern void *fn_82AB50D0(void *objects, unsigned int key);
extern void fn_82AB5180(void *objects, unsigned int key);
extern int fn_82AB92B8(void *hObj);

#define E_SSM_OK 0
#define ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp", line)

void fn_82AB8668(SSMDevice_82AB8668 *pSSMDev)
{
    unsigned int key;
    void *hObj;
    int hRet;

    for (key = 0; key <= pSSMDev->CurrentKey + 1; key++) {
        hObj = fn_82AB50D0(pSSMDev->objects, key);
        if (hObj != 0) {
            ASSERT(key != 0 && key <= pSSMDev->CurrentKey, 0x298);
            fn_82AB5180(pSSMDev->objects, key);
            hRet = fn_82AB92B8(hObj);
            ASSERT(hRet == E_SSM_OK, 0x29e);
        }
    }
}
