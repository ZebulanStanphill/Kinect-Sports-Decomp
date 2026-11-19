typedef struct Port_829D55E0 {
    char pad000[0x144];
    unsigned int stamp; /* 0x144 */
    int state;          /* 0x148 */
    int pad14c;
} Port_829D55E0;

typedef struct Slot_829D55E0 {
    char pad00000[0x11f20];
    unsigned int stamp;         /* 0x11f20 */
    unsigned int port;          /* 0x11f24 */
    unsigned char report[0x84]; /* 0x11f28 */
    char pad11fac[4];
} Slot_829D55E0;

typedef struct Device_829D55E0 {
    char pad000[0xc0];
    Port_829D55E0 ports[7]; /* 0x0c0 */
    char pad9f0[0x20];
    Slot_829D55E0 slots[2]; /* 0xa10 */
} Device_829D55E0;

extern void fn_829E0218(Slot_829D55E0 *slot);
extern void fn_829DFF38(Slot_829D55E0 *slot);
extern void *memset(void *dst, int value, unsigned int size);

unsigned int fn_829D55E0(Device_829D55E0 *self, unsigned int port)
{
    Slot_829D55E0 *slots = self->slots;
    Port_829D55E0 *ports = self->ports;
    Slot_829D55E0 *slot;
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (slots[i].port == port && slots[i].stamp == ports[port].stamp) {
            return i;
        }
    }
    slot = slots;
    for (i = 0; i < 2; i++, slot++) {
        if (ports[slot->port].stamp != slot->stamp || ports[slot->port].state != 2) {
            slot->stamp = ports[port].stamp;
            slot->port = port;
            fn_829E0218(slot);
            memset(slot->report, 0, sizeof(slot->report));
            fn_829DFF38(slot);
            return i;
        }
    }
    return 0;
}
