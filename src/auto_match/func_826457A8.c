extern int KeGetCurrentProcessType(void);
extern void **__imp_VdGlobalDevice;
extern void **__imp_VdGlobalXamDevice;
extern void fn_82645110(void *device);

typedef struct Device_826457A8 {
    char pad0[0x2a90];
    unsigned int *begin;
    char pad1[0x2a9c - 0x2a94];
    unsigned int end;
} Device_826457A8;

/* Returns whether p lies inside the device's range [*begin, end); p equal to end flushes first. */
int fn_826457A8(unsigned int p)
{
    Device_826457A8 *dev;

    if (p == 0)
        return 0;
    if (KeGetCurrentProcessType() == 2)
        dev = *__imp_VdGlobalXamDevice;
    else
        dev = *__imp_VdGlobalDevice;
    if (p == dev->end)
        fn_82645110(dev);
    return dev->end - p < dev->end - *dev->begin;
}
