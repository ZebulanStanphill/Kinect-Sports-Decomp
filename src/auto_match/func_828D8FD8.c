typedef struct Device_828D8FD8 Device_828D8FD8;

typedef struct Vtable_828D8FD8 {
    void *reserved[5];
    unsigned char (*ready)(Device_828D8FD8 *);
} Vtable_828D8FD8;

struct Device_828D8FD8 {
    Vtable_828D8FD8 *vtable;
};

typedef struct Item_828D8FD8 {
    char reserved[0x26];
    unsigned char mode;
} Item_828D8FD8;

typedef struct State_828D8FD8 {
    char reserved[0x14];
    Device_828D8FD8 *device;
    int reserved18;
    unsigned char enabled;
} State_828D8FD8;

extern unsigned char fn_828B0528(Device_828D8FD8 *);
extern unsigned char fn_828AD740(Device_828D8FD8 *);
extern int fn_828B0FE8(State_828D8FD8 *);
extern Item_828D8FD8 *fn_828B0DB8(State_828D8FD8 *);
extern void fn_828B0498(State_828D8FD8 *, Item_828D8FD8 *);
extern void fn_828B13E8(State_828D8FD8 *, int, int);
extern void fn_828B0E40(Device_828D8FD8 *, unsigned char);
extern void fn_828B1468(State_828D8FD8 *, int);

unsigned char fn_828D8FD8(State_828D8FD8 *self, unsigned char enabled)
{
    if (self->device->vtable->ready(self->device) && fn_828B0528(self->device) && fn_828B0FE8(self) == 0 &&
        !fn_828AD740(self->device)) {
        Item_828D8FD8 *item = fn_828B0DB8(self);
        self->enabled = 0;
        if (item != 0) {
            fn_828B0498(self, item);
            fn_828B13E8(self, 0, 0);
            self->enabled = enabled;
            fn_828B0E40(self->device, item->mode);
            fn_828B1468(self, 1);
            return 1;
        } else {
            fn_828B0E40(self->device, 0);
            fn_828B1468(self, 7);
            return 1;
        }
    }
    return 0;
}
