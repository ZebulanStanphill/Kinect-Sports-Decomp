
typedef struct Device_82541458 {
    char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    char pad18[0x293c - 0x18];

    union {
        unsigned int all;
        unsigned char ref; /* top byte */
    } state293c;           /* 0x293c */
} Device_82541458;

typedef struct Renderer_82541458 {
    Device_82541458 *device;
} Renderer_82541458;

struct Config_82541458;

void fn_82637B30(Device_82541458 *d, int enable);
void fn_82637EC0(Device_82541458 *d, int enable);
void fn_82637BC0(Device_82541458 *d, unsigned int x);
void fn_82637FF0(Device_82541458 *d, unsigned int color);
void fn_82637C50(Device_82541458 *d, unsigned int x);
void fn_82637CE0(Device_82541458 *d, unsigned int x);
void fn_82637D70(Device_82541458 *d, unsigned int x);
void fn_82637DE0(Device_82541458 *d, unsigned int x);
void fn_82637E50(Device_82541458 *d, unsigned int x);

static __forceinline void SetDirty(unsigned __int64 *p, unsigned __int64 m)
{
    *p |= m;
}

void fn_82541458(Renderer_82541458 *self, struct Config_82541458 *cfg, int mode, int flag, float alpha)
{
    Device_82541458 *d = self->device;
    d->state293c.all |= 0x10;
    SetDirty(&d->dirty, 0x200);
    d = self->device;
    d->state293c.ref = 0xaa;
    SetDirty(&d->dirty, 0x200);
    fn_82637B30(self->device, 1);
    fn_82637EC0(self->device, 1);
    fn_82637BC0(self->device, 0);
    if (mode == 0x40) {
        unsigned int a = (unsigned int)(alpha * 255.0f);
        unsigned int color;
        if (a > 0xff)
            color = 0xffffffff;
        else
            color = (((0xffff0000 | (a << 8) | a) << 8) | a);
        fn_82637FF0(self->device, color);
        fn_82637C50(self->device, 0xc);
        fn_82637CE0(self->device, 0xd);
    } else {
        fn_82637C50(self->device, 1);
        fn_82637CE0(self->device, 0);
    }
    fn_82637D70(self->device, flag == 0 ? 4 : 0);
    fn_82637DE0(self->device, 6);
    fn_82637E50(self->device, 1);
}
