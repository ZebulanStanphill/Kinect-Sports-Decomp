typedef struct Device_82A57328 {
    char pad000[0xb0];
    int mode; /* 0xb0 */
    char pad0b4[0x15];
    unsigned char kind; /* 0xc9 */
    char pad0ca[0x16e];
    void *context; /* 0x238 */
} Device_82A57328;

typedef struct State_82A57328 {
    Device_82A57328 *device; /* 0x0 */
    char pad004[0x1b4];
    int pending; /* 0x1b8 */
    char pad1bc[0x1c];
    int enabled; /* 0x1d8 */
    char pad1dc[0x18];
    unsigned short count; /* 0x1f4 */
} State_82A57328;

extern int fn_82A56BB0(State_82A57328 *self, void *data, unsigned int count);
extern int fn_82A56F10(State_82A57328 *self, int count);
extern int fn_82A72458(void *context, State_82A57328 *self, unsigned int kind, int count,
                       unsigned int value);
extern int fn_82A71F08(void *context, State_82A57328 *self, unsigned int kind, int count,
                       unsigned int value);

int fn_82A57328(State_82A57328 *self, unsigned short *out, void *data)
{
    int count = (short)self->count;
    Device_82A57328 *device;
    int value;
    int result;
    if (out == 0) {
        return 0x80070057;
    }
    device = self->device;
    value = *out;
    if (self->pending != 0) {
        result = fn_82A56BB0(self, data, value);
        if (result < 0) {
            goto done;
        }
    }
    result = fn_82A56F10(self, count);
    if (result < 0) {
        goto done;
    }
    if (self->enabled == 1 && count != 0) {
        if (device->mode == 0) {
            result = fn_82A72458(device->context, self, device->kind, count, value & 0xffff);
        } else {
            result = fn_82A71F08(device->context, self, device->kind, count, value & 0xffff);
        }
    }
done:
    *out = value;
    return result;
}
