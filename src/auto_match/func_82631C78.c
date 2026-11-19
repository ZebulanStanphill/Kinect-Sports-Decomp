typedef struct Range_82631C78 {
    unsigned int size;    /* 0x0 */
    unsigned int address; /* 0x4 */
} Range_82631C78;

typedef struct Bits_82631C78 {
    unsigned int high : 13;
    unsigned int first : 7;
    unsigned int middle : 1;
    unsigned int second : 7;
    unsigned int low : 4;
} Bits_82631C78;

typedef union Control_82631C78 {
    unsigned int value;
    Bits_82631C78 bits;
} Control_82631C78;

typedef struct Device_82631C78 {
    char pad0[0x30];
    unsigned int *cursor; /* 0x30 */
    char pad34[0x38 - 0x34];
    unsigned int *limit; /* 0x38 */
    char pad3C[0x2aa8 - 0x3c];
    Control_82631C78 control; /* 0x2aa8 */
    char pad2AAC[0x325c - 0x2aac];
    unsigned int mask; /* 0x325c */
    char pad3260[0x36ac - 0x3260];
    Range_82631C78 base;        /* 0x36ac */
    Range_82631C78 ranges[128]; /* 0x36b4 */
    Range_82631C78 last;        /* 0x3ab4 */
} Device_82631C78;

extern unsigned int *fn_82645110(Device_82631C78 *device);
extern void fn_82630E38(Device_82631C78 *device);

void fn_82631C78(Device_82631C78 *device, unsigned int flags, unsigned int first, unsigned int second)
{
    unsigned int *p;
    unsigned int header;
    unsigned int mask;

    if (first == 0 && second == 0) {
        first = 0x40;
        second = 0x40;
    }
    if (flags & 1) {
        device->control.value = 0;
    } else {
        device->control.bits.first = first;
        device->control.bits.second = second;
    }
    mask = device->mask & flags;
    p = device->cursor;
    if (p > device->limit) {
        p = fn_82645110(device);
    }
    header = mask | 0xc0013f00;
    *++p = header;
    *++p = device->base.address;
    *++p = device->base.size & 0xffffff;
    *++p = header;
    *++p = device->ranges[first].address;
    *++p = device->ranges[first].size & 0xffffff;
    *++p = header;
    *++p = device->last.address;
    *++p = device->last.size & 0xffffff;
    device->cursor = p;
    fn_82630E38(device);
}
