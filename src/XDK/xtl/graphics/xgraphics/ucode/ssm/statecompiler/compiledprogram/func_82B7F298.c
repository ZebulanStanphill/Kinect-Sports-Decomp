extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *memset(void *, int, unsigned int);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

typedef struct DeviceCI_82B7F298 {
    char pad[0x10];
    void *ctx;
    void *(*AllocateSysMem)(void *ctx, unsigned int size);
    void (*FreeSysMem)(void *ctx, void *p);
} DeviceCI_82B7F298;

typedef struct CP_TRANSLATION_BUFFERS_82B7F298 {
    void *ctx;
    void (*FreeSysMem)(void *ctx, void *p);
    char rest[0x684 - 8];
} CP_TRANSLATION_BUFFERS_82B7F298;

CP_TRANSLATION_BUFFERS_82B7F298 *fn_82B7F298(DeviceCI_82B7F298 *pDeviceCI)
{
    CP_TRANSLATION_BUFFERS_82B7F298 *pTB;

    CP_ASSERT(pDeviceCI, 0x145);
    CP_ASSERT(pDeviceCI->AllocateSysMem, 0x146);
    pTB = (CP_TRANSLATION_BUFFERS_82B7F298 *)pDeviceCI->AllocateSysMem(pDeviceCI->ctx, sizeof(CP_TRANSLATION_BUFFERS_82B7F298));
    if (pTB != 0) {
        memset(pTB, 0, sizeof(CP_TRANSLATION_BUFFERS_82B7F298));
        pTB->ctx = pDeviceCI->ctx;
        pTB->FreeSysMem = pDeviceCI->FreeSysMem;
        return pTB;
    }
    CP_ASSERT(!"Could not allocate the CP_TRANSLATION_BUFFERS structure", 0x15c);
    return 0;
}
