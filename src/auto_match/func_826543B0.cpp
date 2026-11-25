typedef struct DebugMonitor_826543B0 {
    char pad[0x18];
    int (*command)(int code, void *data); /* 0x18 */
} DebugMonitor_826543B0;

typedef struct Device_826543B0 {
    char pad0[0x2A90];
    int *hangMarker; /* 0x2A90 */
    char pad1[0x2A9C - 0x2A94];
    int fence; /* 0x2A9C */
    char pad2[0x2ABD - 0x2AA0];
    unsigned char flags; /* 0x2ABD */
    char pad3[0x2B04 - 0x2ABE];
    int pending; /* 0x2B04 */
    char pad4[0x3548 - 0x2B08];
    void *hangInfo; /* 0x3548 */
} Device_826543B0;

extern "C" DebugMonitor_826543B0 **__imp_KeDebugMonitorData;
extern "C" int lbl_83282408;
extern "C" unsigned long DbgPrint(const char *format, ...);
extern "C" void fn_82654018(Device_826543B0 *device, void *info);
extern "C" char *strncpy(char *dst, const char *src, unsigned int count);

extern "C" int fn_826543B0(Device_826543B0 *device)
{
    DbgPrint("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    fn_82654018(device, device->hangInfo);
    if (device->hangInfo != 0) {
        if (lbl_83282408 != 0) {
            return 0;
        } else {
            device->flags |= 3;
            *device->hangMarker = device->fence - 2;
            device->pending = 0;
            char name[256] = "";
            strncpy(name, "crashdump.pix2", 0x100);
            DebugMonitor_826543B0 *monitor = *__imp_KeDebugMonitorData;
            if (monitor != 0) {
                monitor->command(0x54, name);
            }
        }
    } else {
        DbgPrint("\nERR[D3D]: Try reproducing the hang with the debug or instrumented\n"
                 "          versions of D3D (D3D9D.LIB or D3D9I.LIB) to capture a\n"
                 "          crash-dump PIX file that can be sent to Xbox developer\n"
                 "          support.\n\n");
        DbgPrint("Breaking into the debugger.  The GPU is hung and can't be recovered\n"
                 "without doing a cold boot.\n");
        __debugbreak();
    }
    return 1;
}
