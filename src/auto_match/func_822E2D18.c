typedef struct Device_822E2D18 Device_822E2D18;

typedef struct DeviceVtbl_822E2D18 {
    void *pad[0xc8 / 4];
    int (*IsBusy)(Device_822E2D18 *self); /* 0xc8 */
} DeviceVtbl_822E2D18;

typedef struct Renderer_822E2D18 {
    unsigned char pad0[0xc];
    struct Target_822E2D18 *target; /* 0x0c */
} Renderer_822E2D18;

typedef struct Target_822E2D18 {
    unsigned char pad0[0x58];
    int pending; /* 0x58 */
} Target_822E2D18;

struct Device_822E2D18 {
    DeviceVtbl_822E2D18 *vt;
    unsigned char pad4[0xcc - 4];
    int mode; /* 0xcc */
    unsigned char padd0[0xd4 - 0xd0];
    Renderer_822E2D18 *renderer; /* 0xd4 */
    unsigned char padd8[0x204 - 0xd8];
    int locked; /* 0x204 */
    unsigned char pad208[0x344 - 0x208];
    int v344; /* 0x344 */
    unsigned char pad348[0x65c - 0x348];
    int savedMode;  /* 0x65c */
    int savedValue; /* 0x660 */
};

typedef struct Config_822E2D18 {
    unsigned char pad0[0x1c];
    int player; /* 0x1c */
    unsigned char pad20[0x28 - 0x20];
    int value; /* 0x28 */
    int mode;  /* 0x2c */
} Config_822E2D18;

typedef struct Self_822E2D18 {
    unsigned char pad0[0x10];
    Device_822E2D18 *device; /* 0x10 */
    Config_822E2D18 *config; /* 0x14 */
    unsigned char pad18[0x34 - 0x18];
    int state;     /* 0x34 */
    int prevState; /* 0x38 */
    float timer;   /* 0x3c */
    unsigned char pad40[0x60 - 0x40];
    int applied; /* 0x60 */
} Self_822E2D18;

extern void fn_8229F618(Target_822E2D18 *target);
extern void *fn_822AA770(int player);
extern void fn_82374C88(Device_822E2D18 *device, int enable);

void fn_822E2D18(Self_822E2D18 *self, int state)
{
    Config_822E2D18 *config;
    Device_822E2D18 *device;
    int value;
    int mode;

    self->prevState = self->state;
    self->state = state;
    self->timer = 0.0f;
    switch (state) {
    case 1:
    case 2:
        config = self->config;
        if (fn_822AA770(config->player) != 0 && self->applied == 0) {
            device = self->device;
            value = config->value;
            mode = config->mode;
            if (device->vt->IsBusy(device) == 0 && mode == device->mode) {
                device->savedMode = mode;
                device->savedValue = value;
            }
            self->applied = 1;
        }
        fn_82374C88(self->device, 1);
        break;
    case -1:
    case 0:
    case 3:
    case 4:
    case 5:
        if (self->applied != 0) {
            self->device->vt->IsBusy(self->device);
            self->applied = 0;
        }
        device = self->device;
        if (device->locked == 0) {
            device->v344 = 0;
            if (device->renderer->target->pending != 0) {
                fn_8229F618(device->renderer->target);
            }
        }
        break;
    }
}
