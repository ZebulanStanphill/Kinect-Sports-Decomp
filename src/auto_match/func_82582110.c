typedef struct RenderState_82582110 {
    unsigned int pad0 : 25;
    unsigned int mode : 3; /* bits 4-6 */
    unsigned int pad1 : 4;
} RenderState_82582110;

typedef struct Device_82582110 {
    unsigned char pad0[0x10];
    unsigned __int64 dirty; /* 0x10 */
    unsigned char pad18[0x2934 - 0x18];
    RenderState_82582110 state; /* 0x2934 */
} Device_82582110;

typedef struct Node_82582110 {
    void *target; /* 0x00 */
    int pad4[2];
    unsigned char hidden;  /* 0x0c */
    unsigned char culled;  /* 0x0d */
    unsigned char special; /* 0x0e */
    unsigned char padf;
    struct Node_82582110 *next; /* 0x10 */
} Node_82582110;

typedef struct Owner_82582110 {
    char pad0[0xe0];
    Node_82582110 *head; /* 0xe0 */
} Owner_82582110;

extern Device_82582110 *lbl_8320A898;

extern int fn_82544528(void);
extern void fn_8263CBB0(Device_82582110 *device, int a, int b, int c);
extern void fn_82631C78(Device_82582110 *device, int a, int b, int c);
extern void fn_825D8490(void *target, float time, int index, int flag);

static __forceinline void MarkDirty_82582110(unsigned __int64 *dirty, unsigned __int64 flags)
{
    *dirty |= flags;
}

static __forceinline void SetMode_82582110(Device_82582110 *device, unsigned int mode)
{
    device->state.mode = mode;
    MarkDirty_82582110(&device->dirty, 0x800);
    MarkDirty_82582110(&device->dirty, 0x20000);
}

void fn_82582110(Owner_82582110 *self, float time, int index)
{
    Node_82582110 *node = self->head;
    unsigned int savedMode;
    int shader;

    if (node != 0) {
        shader = fn_82544528();
        fn_8263CBB0(lbl_8320A898, 1, shader, 0x40000000);
        fn_82631C78(lbl_8320A898, 0, 0x2c, 0x54);
        savedMode = lbl_8320A898->state.mode;
        SetMode_82582110(lbl_8320A898, 6);
        for (; node != 0; node = node->next) {
            if (node->hidden == 0 && node->culled == 0 && node->special == 0) {
                fn_825D8490(node->target, time, index, 1);
            }
        }
        SetMode_82582110(lbl_8320A898, savedMode);
        fn_82631C78(lbl_8320A898, 0, 0x20, 0x60);
    }
}
