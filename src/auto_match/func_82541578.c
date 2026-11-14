typedef struct Device_82541578 {
    char pad0[0x10];
    unsigned __int64 dirty;     /* 0x0010 */
    char pad18[0x293c - 0x18];
    unsigned int state293C;     /* 0x293c */
} Device_82541578;

typedef struct Renderer_82541578 {
    Device_82541578 *device;    /* 0x00 */
} Renderer_82541578;

extern void fn_82637B30(Device_82541578 *device, int enable);
extern void fn_82637EC0(Device_82541578 *device, int lock);
extern void fn_82637FF0(Device_82541578 *device, int value);
extern void fn_82637C50(Device_82541578 *device, int value);
extern void fn_82637CE0(Device_82541578 *device, int value);

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82541578(Renderer_82541578 *self, int mode)
{
    Device_82541578 *device = self->device;

    device->state293C &= ~0x10;
    SetDirty(&device->dirty, 0x200);
    fn_82637B30(self->device, 0);
    fn_82637EC0(self->device, 0);
    if (mode == 0x40) {
        fn_82637FF0(self->device, -1);
        fn_82637C50(self->device, 1);
        fn_82637CE0(self->device, 0);
    }
}
