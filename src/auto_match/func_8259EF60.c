typedef struct Device_8259EF60 Device_8259EF60;

typedef struct Renderer_8259EF60 {
    char pad0[0x1ac];
    void *settings; /* 0x1ac */
} Renderer_8259EF60;

typedef __declspec(align(16)) struct Pass_8259EF60 {
    char data[0x40];
} Pass_8259EF60;

typedef struct Vec2_8259EF60 {
    float x;
    float y;
} Vec2_8259EF60;

typedef struct Options_8259EF60 {
    int pad0;
    int enabled; /* 0x4 */
} Options_8259EF60;

typedef struct Shaders_8259EF60 {
    char pad0[0x2c];
    void *pixelShader; /* 0x2c */
} Shaders_8259EF60;

extern Device_8259EF60 *lbl_8320A898;
extern Options_8259EF60 lbl_831C1DE0;
extern Shaders_8259EF60 lbl_8327F940;

extern void fn_826312F0(Device_8259EF60 *device, unsigned int index, unsigned int *values, int count);
extern int fn_825B2010(void *settings);
extern void fn_825A06B8(Renderer_8259EF60 *renderer, void *scene, void *view, void *target,
                        Device_8259EF60 *device);
extern void fn_82631C78(Device_8259EF60 *device, unsigned int flags, unsigned int first, unsigned int second);
extern void fn_8259F6D8(Pass_8259EF60 *pass, Device_8259EF60 *device, void *view, Vec2_8259EF60 *saveA,
                        Vec2_8259EF60 *saveB);
extern void fn_8259FF68(void *scene, Device_8259EF60 *device, void *view, void *target, Pass_8259EF60 *pass,
                        int flags);
extern void fn_825A0B48(Renderer_8259EF60 *renderer, void *scene, void *view, Pass_8259EF60 *pass,
                        Device_8259EF60 *device);
extern void fn_82631578(Device_8259EF60 *device, void *shader);
extern void fn_82637C50(Device_8259EF60 *device, unsigned int value);
extern void fn_82637CE0(Device_8259EF60 *device, unsigned int value);
extern void fn_82637BC0(Device_8259EF60 *device, unsigned int value);
extern void fn_82637B30(Device_8259EF60 *device, int enable);
extern void fn_825A0430(Vec2_8259EF60 *saveA, Vec2_8259EF60 *saveB, Device_8259EF60 *device);
extern void fn_825A05B8(Device_8259EF60 *device);

void fn_8259EF60(Renderer_8259EF60 *renderer, void *scene, void *view, void *target)
{
    Device_8259EF60 *device;
    unsigned int zero;
    int stencil;
    Vec2_8259EF60 saveB;
    Vec2_8259EF60 saveA;
    Pass_8259EF60 pass;

    zero = 0;
    device = lbl_8320A898;
    fn_826312F0(device, 0, &zero, 1);
    stencil = fn_825B2010(renderer->settings);
    if (stencil) {
        fn_825A06B8(renderer, scene, view, target, device);
    }
    fn_82631C78(lbl_8320A898, 0, 0x10, 0x70);
    fn_8259F6D8(&pass, device, view, &saveA, &saveB);
    fn_8259FF68(scene, device, view, target, &pass, 0);
    if (lbl_831C1DE0.enabled != 0) {
        fn_825A0B48(renderer, scene, view, &pass, device);
    }
    fn_82631578(device, lbl_8327F940.pixelShader);
    if (stencil) {
        fn_82637C50(lbl_8320A898, 1);
        fn_82637CE0(lbl_8320A898, 1);
        fn_82637BC0(lbl_8320A898, 0);
        fn_82637B30(lbl_8320A898, 1);
    }
    fn_825A0430(&saveA, &saveB, device);
    if (stencil) {
        fn_82637C50(lbl_8320A898, 6);
        fn_82637CE0(lbl_8320A898, 7);
        fn_82637B30(lbl_8320A898, 0);
    }
    fn_825A05B8(device);
    fn_82631C78(lbl_8320A898, 0, 0x20, 0x60);
}
