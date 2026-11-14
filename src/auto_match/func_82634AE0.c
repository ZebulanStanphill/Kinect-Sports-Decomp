#include <string.h>

typedef struct Device_82634AE0 {
    char pad0[0x4db4];
    unsigned int flags;
} Device_82634AE0;

typedef struct Context_82634AE0 {
    Device_82634AE0 *device;
    char pad4[0x7c - 4];
    unsigned char enabled;
} Context_82634AE0;

typedef struct Packet_82634AE0 {
    unsigned int type : 6;
    unsigned int rest0 : 26;
    unsigned int word1;
    unsigned int pad2 : 3;
    unsigned int count : 4;
    unsigned int flag : 1;
    unsigned int rest2 : 24;
} Packet_82634AE0;

extern int fn_82633918(Context_82634AE0 *ctx, Packet_82634AE0 *packet);
extern void fn_826339C8(Context_82634AE0 *ctx, int index, int flag);

void fn_82634AE0(Context_82634AE0 *ctx)
{
    if ((unsigned char)(~ctx->device->flags >> 5 & 1) != 0 && ctx->enabled != 0) {
        Packet_82634AE0 packet;
        int index;

        memset(&packet, 0, sizeof(packet));
        packet.count = 1;
        packet.flag = 0;
        packet.type = 0x32;
        index = fn_82633918(ctx, &packet);
        fn_826339C8(ctx, index, 1);
    }
}
