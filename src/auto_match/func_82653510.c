#define __lwsync() __emit(0x7C2004AC)
#define __sync() __emit(0x7C0004AC)

typedef struct Fence_82653510 {
    char pad0[0x220];
    unsigned __int64 value; /* 0x220 */
} Fence_82653510;

typedef struct Packet_82653510 {
    unsigned int header; /* 0x00 */
    char pad4[0x68];
    unsigned int marker; /* 0x6C */
    char pad70[0x10];
} Packet_82653510;

typedef struct Slot_82653510 {
    int pad0;
    int index; /* 0x04 */
    char pad8[0xC];
} Slot_82653510;

typedef struct Device_82653510 {
    char pad0[0x5E8C];
    int stopping;          /* 0x5E8C */
    Fence_82653510 *fence; /* 0x5E90 */
    char pad5e94[0x14];
    Packet_82653510 *packets; /* 0x5EA8 */
    int pad5eac;              /* 0x5EAC */
    Slot_82653510 *slots;     /* 0x5EB0 */
} Device_82653510;

void fn_82653510(Device_82653510 *device)
{
    int i;

    if (device->fence != 0) {
        device->stopping = 1;
        __lwsync();
        device->fence->value = 0xFFFFFFFFFFFFFFFF;
    }
    if (device->packets != 0) {
        for (i = 0; i < 63; i++) {
            device->packets[i].header = (device->slots[i].index * 0x30000 + 0x10000) | 0xC0001000;
        }
        __sync();
        for (i = 0; i < 63; i++) {
            device->packets[i].marker = 0xFFFFFFFF;
        }
        __sync();
    }
}
