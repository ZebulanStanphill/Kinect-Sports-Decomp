extern int KeGetCurrentProcessType(void);
extern void **__imp_VdGlobalDevice;
extern void **__imp_VdGlobalXamDevice;
extern void fn_826452A8(void *device, void *p, int kind, int flags);

void fn_82645740(void *p)
{
    void *dev;

    if (KeGetCurrentProcessType() == 2) {
        dev = *__imp_VdGlobalXamDevice;
    } else {
        dev = *__imp_VdGlobalDevice;
    }
    if (p != 0) {
        fn_826452A8(dev, p, 6, 0);
    }
}
