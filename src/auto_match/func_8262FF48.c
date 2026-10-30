// Stores the global D3D device (the XAM one when running as process type 2) to *out,
// adding a reference to it first if there is one. self is unused.
extern void **__imp_VdGlobalDevice;
extern void **__imp_VdGlobalXamDevice;
extern int KeGetCurrentProcessType(void);

void fn_8262FF48(void *self, void **out)
{
    void **p;
    void *device;

    if (KeGetCurrentProcessType() == 2)
        p = __imp_VdGlobalXamDevice;
    else
        p = __imp_VdGlobalDevice;
    device = *p;
    if (device)
        ++*(int *)((char *)device + 0x3c);
    *out = device;
}
