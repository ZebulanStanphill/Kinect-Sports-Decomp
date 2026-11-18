typedef struct Params_82C49288 {
    int format;      /* 0x00 */
    void *owner;     /* 0x04 */
    int handle;      /* 0x08 */
    int version;     /* 0x0c */
    int size;        /* 0x10 */
    int argument;    /* 0x14 */
    int enabled;     /* 0x18 */
    int width;       /* 0x1c */
    int height;      /* 0x20 */
    int value24;     /* 0x24 */
    int value28;     /* 0x28 */
    int value2c;     /* 0x2c */
    int value30;     /* 0x30 */
    int positive;    /* 0x34 */
    int value38;     /* 0x38 */
    int value3c;     /* 0x3c */
    int value40;     /* 0x40 */
    int value44;     /* 0x44 */
    int reserved[8]; /* 0x48, not set here; sized by the frame */
} Params_82C49288;

typedef struct Driver_82C49288 {
    char pad0[0xc0];
    int (*create)(Params_82C49288 *params); /* 0xc0 */
    char padc4[0x2c8 - 0xc4];
    int busy; /* 0x2c8 */
} Driver_82C49288;

typedef struct Device_82C49288 {
    char pad0[0x10];
    int ready; /* 0x10 */
    char pad14[0x9c - 0x14];
    int width;  /* 0x9c */
    int height; /* 0xa0 */
    char pada4[0x39f4 - 0xa4];
    int pending; /* 0x39f4 */
    char pad39f8[0x5580 - 0x39f8];
    int enabled; /* 0x5580 */
    char pad5584[0x5598 - 0x5584];
    int size;      /* 0x5598 */
    int value559c; /* 0x559c */
    int value55a0; /* 0x55a0 */
    int value55a4; /* 0x55a4 */
    int value55a8; /* 0x55a8 */
    char pad55ac[0x5610 - 0x55ac];
    int format;         /* 0x5610 */
    unsigned int flags; /* 0x5614 */
    char pad5618[0x5634 - 0x5618];
    int value5634; /* 0x5634 */
    int value5638; /* 0x5638 */
    int value563c; /* 0x563c */
    int value5640; /* 0x5640 */
    char pad5644[0x6070 - 0x5644];
    Driver_82C49288 *driver; /* 0x6070 */
    char pad6074[0xb148 - 0x6074];
    int handle; /* 0xb148 */
} Device_82C49288;

int fn_82C49288(Device_82C49288 *device, int argument)
{
    Params_82C49288 params;

    if (device == 0) {
        return -3;
    }
    if (device->driver->busy != 0) {
        return 0;
    }
    if ((device->flags & 4) == 0) {
        return device->ready == 0 ? -7 : 0;
    }
    params.format = device->format;
    params.owner = device;
    params.handle = device->handle;
    params.version = 2;
    params.size = device->size;
    params.argument = argument;
    params.enabled = device->enabled != 0;
    params.width = device->width;
    params.height = device->height;
    params.value24 = device->value5634;
    params.value28 = device->value5638;
    params.value2c = device->value563c;
    params.value30 = device->value5640;
    params.positive = device->pending > 0;
    params.value38 = device->value559c;
    params.value3c = device->value55a4;
    params.value40 = device->value55a0;
    params.value44 = device->value55a8;
    return device->driver->create(&params);
}
