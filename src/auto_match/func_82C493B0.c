typedef struct Params_82C493B0 {
    int format;      /* 0x00 */
    void *owner;     /* 0x04 */
    int handle;      /* 0x08 */
    int version;     /* 0x0c */
    int rate;        /* 0x10 */
    int value14;     /* 0x14 */
    int value18;     /* 0x18 */
    int value1c;     /* 0x1c */
    int value20;     /* 0x20 */
    int argument;    /* 0x24 */
    int argument2;   /* 0x28 */
    int value2c;     /* 0x2c */
    int width;       /* 0x30 */
    int height;      /* 0x34 */
    int value38;     /* 0x38 */
    int value3c;     /* 0x3c */
    int value40;     /* 0x40 */
    int reserved[8]; /* 0x44, not set here; sized by the frame */
} Params_82C493B0;

typedef struct Driver_82C493B0 {
    char pad0[0xc0];
    int (*create)(Params_82C493B0 *params); /* 0xc0 */
    char padc4[0x2c8 - 0xc4];
    int busy; /* 0x2c8 */
} Driver_82C493B0;

typedef struct Device_82C493B0 {
    char pad0[0x120];
    int defaultRate; /* 0x120 */
    char pad124[0xd9c - 0x124];
    int width;  /* 0xd9c */
    int height; /* 0xda0 */
    char padda4[0x50c8 - 0xda4];
    int hasMode;    /* 0x50c8 */
    int hasQuality; /* 0x50cc */
    char pad50d0[0x5424 - 0x50d0];
    int value5424; /* 0x5424 */
    int value5428; /* 0x5428 */
    char pad542c[0x5444 - 0x542c];
    int value5444; /* 0x5444 */
    int value5448; /* 0x5448 */
    char pad544c[0x54b0 - 0x544c];
    int value54b0; /* 0x54b0 */
    char pad54b4[0x5510 - 0x54b4];
    int quality; /* 0x5510 */
    int mode;    /* 0x5514 */
    char pad5518[0x5568 - 0x5518];
    int value5568; /* 0x5568 */
    int value556c; /* 0x556c */
    char pad5570[0x5610 - 0x5570];
    int format;         /* 0x5610 */
    unsigned int flags; /* 0x5614 */
    char pad5618[0x567c - 0x5618];
    int value567c; /* 0x567c */
    char pad5680[0x6070 - 0x5680];
    Driver_82C493B0 *driver; /* 0x6070 */
    char pad6074[0xb148 - 0x6074];
    int handle; /* 0xb148 */
} Device_82C493B0;

extern int lbl_820FBA20[][6];

int fn_82C493B0(Device_82C493B0 *device, int argument, int argument2)
{
    Params_82C493B0 params;

    if (device == 0) {
        return -3;
    }
    if (device->driver->busy != 0) {
        return 0;
    }
    if ((device->flags & 8) == 0) {
        return 0;
    }
    params.format = device->format;
    params.owner = device;
    params.handle = device->handle;
    params.version = 3;
    if (device->hasMode != 0 && device->hasQuality != 0) {
        params.rate = lbl_820FBA20[device->mode][device->quality];
    } else {
        params.rate = device->defaultRate;
    }
    params.value14 = device->value5568;
    params.value18 = device->value5424;
    params.value1c = device->value5428;
    params.value20 = device->value556c;
    params.argument = argument;
    params.argument2 = argument2;
    params.value2c = device->value54b0;
    params.width = device->width;
    params.height = device->height;
    params.value38 = device->value5444;
    params.value3c = device->value5448;
    params.value40 = device->value567c;
    return device->driver->create(&params);
}
