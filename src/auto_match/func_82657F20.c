typedef struct Device_82657F20 {
    char pad0[0x5e88];
    unsigned int flags;
} Device_82657F20;

extern Device_82657F20 **__imp_VdGlobalDevice;

long fn_82657F20(Device_82657F20 **out)
{
    Device_82657F20 *device = *__imp_VdGlobalDevice;
    *out = device;
    if (device == 0)
        return 0x80004005;
    return (device->flags & 0x100) ? 0x80004005 : 0;
}
