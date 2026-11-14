#define __lwsync() __emit(0x7C2004AC)

typedef struct Manager_8256A938 Manager_8256A938;
typedef struct ManagerVtbl_8256A938 {
    void *slots[9];
    unsigned char (*isReady)(Manager_8256A938 *self);
} ManagerVtbl_8256A938;
struct Manager_8256A938 {
    ManagerVtbl_8256A938 *vt;
};

typedef struct Device_8256A938 {
    char pad[0x78];
    long pending;   /* 0x78 */
} Device_8256A938;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern Manager_8256A938 *lbl_8327F84C;
extern Device_8256A938 *fn_82569B10(void);
extern int fn_82A1BB18(void);
extern void fn_82558B08(void);
extern void fn_8259C5D8(Device_8256A938 *device, int a, int b);
extern void fn_8259C738(Device_8256A938 *device);

static __forceinline void Start_8256A938(Device_8256A938 *device)
{
    fn_8259C5D8(device, 0, fn_82A1BB18() + 1);
}

void fn_8256A938(void)
{
    Device_8256A938 *device;

    for (;;) {
        long *pending = &fn_82569B10()->pending;
        if (_InterlockedExchangeAdd(pending, 0) == 0 && lbl_8327F84C->vt->isReady(lbl_8327F84C) == 1)
            break;
        fn_82558B08();
    }
    __lwsync();
    Start_8256A938(fn_82569B10());
    fn_82558B08();
    device = fn_82569B10();
    fn_82A1BB18();
    fn_8259C738(device);
}
