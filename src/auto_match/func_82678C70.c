typedef struct SurfaceDesc_82678C70 {
    unsigned int format;    /* 0x0 */
    unsigned int fields[6]; /* 0x4 */
    unsigned int height;    /* 0x1C */
} SurfaceDesc_82678C70;

typedef struct Pass_82678C70 {
    char pad0[0x8];
    int begun;             /* 0x8 */
    int unkC;              /* 0xC */
    unsigned char enabled; /* 0x10 */
    char pad11[0x18 - 0x11];
    int unk18; /* 0x18 */
    char pad1C[0xD8 - 0x1C];
    void *device;             /* 0xD8 */
    unsigned char checked;    /* 0xDC */
    unsigned char hasStencil; /* 0xDD */
    char padDE[0xE0 - 0xDE];
    unsigned int stencilRef; /* 0xE0 */
    char padE4[0x184 - 0xE4];
    int passCount; /* 0x184 */
    char pad188[0x1B8 - 0x188];
    int drawCount; /* 0x1B8 */
} Pass_82678C70;

extern void *fn_8263A820(void *device);
extern void fn_8263CA78(void *surface, SurfaceDesc_82678C70 *desc);
extern void fn_8262FEC8(void *p);
extern void fn_8263DE70(void *device, unsigned int count, const void *rects, unsigned int flags,
                        unsigned int color, float depth, unsigned int stencil, int edramClear);
extern int fn_82638790();
extern int fn_82638288();
extern int fn_826384C0();
extern int fn_82638330();
extern int fn_82638368();
extern int fn_82638300();
extern int fn_826383A0();
extern int fn_826384A0();

static __forceinline void Increment(int *count)
{
    (*count)++;
}

void fn_82678C70(Pass_82678C70 *self, unsigned int mode)
{
    void *surface;
    SurfaceDesc_82678C70 desc;

    if (self->enabled == 0) {
        return;
    }
    if (self->hasStencil == 0) {
        if (self->checked == 0) {
            surface = fn_8263A820(self->device);
            if (surface != 0) {
                fn_8263CA78(surface, &desc);
                switch (desc.format) {
                case 0x1A220097:
                case 0x1A220197:
                case 0x2D200096:
                case 0x2D200196:
                    self->hasStencil = 1;
                    break;
                }
                fn_8262FEC8(surface);
            } else {
                self->hasStencil = 0;
            }
            self->checked = 1;
        }
        if (self->hasStencil == 0) {
            return;
        }
    }
    self->begun = 1;
    fn_82638790(self->device, 0);
    fn_82638288(self->device, 1);
    fn_826384C0(self->device, 0xFF);
    fn_82638330(self->device, 0);
    fn_82638368(self->device, 0);
    switch (mode) {
    case 0:
        if (self->unk18 != 0) {
            self->unkC = 0;
            self->unk18 = 0;
        }
        fn_8263DE70(self->device, 0, 0, 0x20, 0, 0.0f, 0, 0);
        fn_82638300(self->device, 7);
        fn_826383A0(self->device, 2);
        fn_826384A0(self->device, 1);
        self->stencilRef = 1;
        break;
    case 1:
        fn_826384A0(self->device, self->stencilRef);
        fn_82638300(self->device, 2);
        fn_826383A0(self->device, 6);
        self->stencilRef = self->stencilRef + 1;
        break;
    case 2:
        fn_826384A0(self->device, self->stencilRef);
        fn_82638300(self->device, 2);
        fn_826383A0(self->device, 7);
        self->stencilRef = self->stencilRef - 1;
        break;
    }
    Increment(&self->passCount);
    Increment(&self->drawCount);
}
