typedef struct Renderer_82BFFC08 Renderer_82BFFC08;
typedef struct RendererVt_82BFFC08 {
    void *pad0[0x3c / 4];
    void (*f3c)(Renderer_82BFFC08 *self);
    void *pad40[(0x58 - 0x40) / 4];
    void (*f58)(Renderer_82BFFC08 *self);
} RendererVt_82BFFC08;
struct Renderer_82BFFC08 {
    RendererVt_82BFFC08 *vt;
    char pad4[0x38 - 4];
    void *device;
    void *res3c;
    void *res40;
    void *res44;
    void *res48;
    void *res4c;
};

extern void fn_82639F78(void *dev, int a, int b, int c, int d, unsigned __int64 e);
extern void fn_82631578(void *dev, void *shader);
extern void fn_82631920(void *dev, void *shader);
extern void fn_82631AF0(void *dev, void *v);
extern void fn_8263A120(void *dev, int v);
extern void fn_8263CBB0(void *dev, unsigned int index, void *texture, unsigned __int64 mask);
extern void fn_8262FEC8(void *p);
extern void fn_82647460(void *p);

int fn_82BFFC08(Renderer_82BFFC08 *self)
{
    if (self->device != 0) {
        fn_82639F78(self->device, 0, 0, 0, 0, 1);
        fn_82631578(self->device, 0);
        fn_82631920(self->device, 0);
        fn_82631AF0(self->device, 0);
        fn_8263A120(self->device, 0);
        fn_8263CBB0(self->device, 0, 0, 0x80000000);
        fn_8263CBB0(self->device, 1, 0, 0x40000000);
        fn_8263CBB0(self->device, 2, 0, 0x20000000);
    }
    if (self->res4c != 0) {
        fn_8262FEC8(self->res4c);
        self->res4c = 0;
    }
    if (self->res48 != 0) {
        fn_8262FEC8(self->res48);
        self->res48 = 0;
    }
    if (self->res44 != 0) {
        fn_8262FEC8(self->res44);
        self->res44 = 0;
    }
    if (self->res40 != 0) {
        fn_8262FEC8(self->res40);
        self->res40 = 0;
    }
    if (self->res3c != 0) {
        fn_8262FEC8(self->res3c);
        self->res3c = 0;
    }
    if (self->device != 0) {
        fn_82647460(self->device);
        self->device = 0;
    }
    self->vt->f3c(self);
    self->vt->f58(self);
    return 0;
}
