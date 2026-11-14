typedef struct {
    char pad0[0x48];
    void *objects;
    unsigned int CurrentKey;
} SSMDevice_82AB85C8;

extern void fn_82AB15D0(int level, const char *fmt, ...);
extern void *fn_82AB50D0(void *objects, unsigned int key);
extern void fn_82AB5180(void *objects, unsigned int key);

#define SSM_NULL 0
#define ASSERT(e, line) if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\interface\\ssmdevice.cpp", line)

void fn_82AB85C8(SSMDevice_82AB85C8 *pSSMDev, void *handle)
{
    unsigned int key = 0;
    void *hObj = SSM_NULL;
    if (handle != SSM_NULL) {
        do {
            if (key > pSSMDev->CurrentKey)
                break;
            key++;
            hObj = fn_82AB50D0(pSSMDev->objects, key);
        } while (hObj != handle);
    }
    ASSERT(hObj != SSM_NULL && key > 0 && key <= pSSMDev->CurrentKey, 0x282);
    fn_82AB5180(pSSMDev->objects, key);
}
