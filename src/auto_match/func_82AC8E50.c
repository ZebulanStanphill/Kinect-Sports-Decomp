typedef struct Device_82AC8E50 {
    char pad[0x318];
    unsigned int reserved;      /* 0x318 */
} Device_82AC8E50;

typedef struct Alloc_82AC8E50 {
    Device_82AC8E50 *device;    /* 0x00 */
    int pad4;
    unsigned __int64 a[4];      /* 0x08 */
    unsigned __int64 b[4];      /* 0x28 */
    unsigned int count;         /* 0x48 */
} Alloc_82AC8E50;

extern void fn_82AE5AC8(Alloc_82AC8E50 *self, unsigned int start, unsigned int count);

void fn_82AC8E50(Alloc_82AC8E50 *self, Device_82AC8E50 *device)
{
    unsigned int start;

    self->device = device;
    self->a[0] = 0;
    self->a[1] = 0;
    self->a[2] = 0;
    self->a[3] = 0;
    start = device->reserved;
    if (start == 0)
        start = 0x20;
    if (start < 0x40)
        fn_82AE5AC8(self, start, 0x40 - start);
    self->b[0] = 0;
    self->b[1] = 0;
    self->b[2] = 0;
    self->b[3] = 0;
    self->count = 0;
}
