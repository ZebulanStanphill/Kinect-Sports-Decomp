typedef struct Device_8272DC58 {
    char pad000[0x68];
    unsigned short flags; /* 0x68 */
} Device_8272DC58;

typedef struct Holder_8272DC58 {
    char pad000[0x114];
    Device_8272DC58 *device; /* 0x114 */
} Holder_8272DC58;

typedef struct Owner_8272DC58 Owner_8272DC58;

typedef struct OwnerVt_8272DC58 {
    char pad000[0x164];
    void (*SetEnabled)(Owner_8272DC58 *self, int enabled); /* 0x164 */
} OwnerVt_8272DC58;

struct Owner_8272DC58 {
    OwnerVt_8272DC58 *vt; /* 0x0 */
    char pad004[0x9c];
    Holder_8272DC58 *holder; /* 0xa0 */
};

typedef struct Call_8272DC58 {
    char pad000[0x8];
    char *target; /* 0x8 */
    char pad00c[0xc];
    void *context; /* 0x18 */
} Call_8272DC58;

extern void *fn_826957D0(Call_8272DC58 *call, int index);
extern int fn_82697610(void *value, void *context);
extern void fn_827A4850(Device_8272DC58 *device, int code, unsigned char *data);
extern void fn_827A2738(Device_8272DC58 *device, int code, unsigned char *data);
extern void fn_827A4240(Device_8272DC58 *device, unsigned short code);

static __forceinline unsigned char IsLocked_8272DC58(Device_8272DC58 *device)
{
    return (int)device != 0 ? (device->flags >> 7) & 1 : 0;
}

void fn_8272DC58(Call_8272DC58 *call)
{
    Owner_8272DC58 *owner;
    Device_8272DC58 *device;
    int value;
    int code;
    unsigned int flags;
    unsigned char extra;
    unsigned char data;

    owner = call->target != 0 ? (Owner_8272DC58 *)(call->target - 0x68) : 0;
    device = owner->holder->device;
    if ((int)device == 0) {
        return;
    }
    flags = device->flags;
    if ((flags & 1) == 0 || (unsigned char)(flags >> 1) & 1) {
        switch (fn_82697610(fn_826957D0(call, 0), call->context)) {
        case 0:
            value = fn_82697610(fn_826957D0(call, 1), call->context);
            code = value & 0xffff;
            data = (unsigned char)(value >> 16) | 0x80;
            fn_827A4850(owner->holder->device, code, &data);
            if (code == 0x2d) {
                owner->vt->SetEnabled(owner, IsLocked_8272DC58(owner->holder->device) == 0);
            }
            break;
        case 1:
            value = fn_82697610(fn_826957D0(call, 1), call->context);
            extra = (unsigned char)(value >> 16) | 0x80;
            fn_827A2738(owner->holder->device, value & 0xffff, &extra);
            break;
        case 2:
            device = owner->holder->device;
            fn_827A4240(device, (unsigned short)fn_82697610(fn_826957D0(call, 1), call->context));
            break;
        }
    }
}
