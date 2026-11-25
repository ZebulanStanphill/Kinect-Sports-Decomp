typedef struct Device_82652640 {
    char pad0[0x30];
    unsigned int used; /* 0x30 */
    char pad34[4];
    unsigned int limit; /* 0x38 */
    unsigned int ready; /* 0x3c */
    char pad40[0x2a40];
    unsigned __int64 context; /* 0x2a80 */
    unsigned int frame;       /* 0x2a88 */
    char pad2a8c[0x2a68];
    unsigned int pending; /* 0x54f4 */
    char pad54f8[0x28];
    unsigned int ticks; /* 0x5520 */
    char pad5524[0xc];
    float tickScale; /* 0x5530 */
    char pad5534[0x1c];
    int timerStart; /* 0x5550 */
    int timerEnd;   /* 0x5554 */
    int timing;     /* 0x5558 */
    char pad555c[0x6bc];
    unsigned int mode; /* 0x5c18 */
} Device_82652640;

typedef struct Counter_82652640 {
    unsigned int mask; /* 0x0 */
    unsigned int id;   /* 0x4 */
    int index;         /* 0x8 */
} Counter_82652640;

extern Device_82652640 **__imp_VdGlobalDevice;
extern unsigned int lbl_83282404;
extern Counter_82652640 lbl_831BEA70[17];

extern unsigned int fn_82645110(Device_82652640 *device);
extern void fn_82650EC8(Device_82652640 *device);
extern float fn_82651F48(Device_82652640 *device, int index);
extern unsigned int fn_82A1BB18(void);
extern void fn_82A2AB78(unsigned int id, float value);

static __forceinline void SyncUsed(Device_82652640 *device)
{
    unsigned int used;

    if (device->pending != 0 && device->frame == fn_82A1BB18()) {
        used = device->used;
        if (used > device->limit) {
            used = fn_82645110(device);
        }
        device->used = used;
    }
}

void fn_82652640(unsigned int event, unsigned int arg)
{
    Device_82652640 *device = *__imp_VdGlobalDevice;
    int i;
    unsigned int id;
    Counter_82652640 *counter;

    if (device == 0 || device->ready == 0 || device->context == 0) {
        return;
    }
    switch (event) {
    case 0x22:
        device->mode = arg;
        break;
    case 0x11:
        lbl_83282404 |= 1 << arg;
        if (arg == 6) {
            device->timing = 1;
            device->timerStart = 0;
            device->timerEnd = 0;
        }
        break;
    case 0x10:
        lbl_83282404 &= ~(1 << arg);
        if (arg == 6) {
            device->timing = 0;
        }
        break;
    case 0:
        device->timing = 0;
        lbl_83282404 = 0;
        break;
    case 1:
        device->timing = 0;
        lbl_83282404 = 0;
        break;
    case 0xff:
        if (lbl_83282404 & 1) {
            fn_82A2AB78(0x20000, (float)device->ticks * device->tickScale * 1000.0f);
        }
        counter = lbl_831BEA70;
        for (i = 17; i != 0; i--) {
            if (counter->mask & lbl_83282404) {
                id = counter->id;
                fn_82A2AB78(id, fn_82651F48(device, counter->index));
            }
            counter++;
        }
        break;
    case 0xe3:
        fn_82650EC8(device);
        break;
    case 0xe0:
        SyncUsed(device);
        break;
    case 0xe1:
        SyncUsed(device);
        break;
    case 0xe2:
        SyncUsed(device);
        break;
    }
}
