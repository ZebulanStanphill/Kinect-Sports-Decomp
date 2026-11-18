typedef struct Device_82647620 {
    char pad0000[0x10];
    unsigned __int64 dirtyFlags; /* 0x0010 */
    char pad0018[0x2ed8 - 0x18];
    int pendingResolve; /* 0x2ed8 */
    char pad2edc[0x3148 - 0x2edc];
    void *textures[4];  /* 0x3148 */
    void *depthStencil; /* 0x3158 */
    char pad315c[0x3abc - 0x315c];
    void *defaultDepthStencil; /* 0x3abc */
    int pad3ac0;
    void *nullTexture; /* 0x3ac4 */
} Device_82647620;

extern void fn_8263A1B8(Device_82647620 *device, unsigned int index, void *texture);
extern void fn_8263A508(Device_82647620 *device, void *surface);
extern void fn_82631920(Device_82647620 *device, void *shader);
extern void fn_82631578(Device_82647620 *device, void *shader);
extern void fn_8263A120(Device_82647620 *device, void *buffer);
extern void fn_82639F78(Device_82647620 *device, unsigned int index, int a, int b, int c,
                        unsigned __int64 mask);
extern void fn_8263CBB0(Device_82647620 *device, unsigned int index, void *buffer, unsigned __int64 mask);

void fn_82647620(Device_82647620 *self)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (self->textures[i] != self->nullTexture)
            fn_8263A1B8(self, i, 0);
    }
    if (self->depthStencil != self->defaultDepthStencil)
        fn_8263A508(self, 0);
    fn_82631920(self, 0);
    fn_82631578(self, 0);
    self->pendingResolve = 0;
    self->dirtyFlags |= 0x80000;
    fn_8263A120(self, 0);
    /* (0x5f - i) * 0x5556 >> 16 is (0x5f - i) / 3 for these small values */
    for (i = 0; i < 16; i++)
        fn_82639F78(self, i, 0, 0, 4, 0x8000000000000000ULL >> ((((0x5f - i) * 0x5556) >> 16) + 32));
    for (i = 0; i < 26; i++)
        fn_8263CBB0(self, i, 0, 0x8000000000000000ULL >> (i + 32));
}
