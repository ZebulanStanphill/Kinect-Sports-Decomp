struct Viewport_825315E0 {
    int x;      /* 0x00 */
    int y;      /* 0x04 */
    int width;  /* 0x08 */
    int height; /* 0x0c */
    float minZ; /* 0x10 */
    float maxZ; /* 0x14 */
};

struct Camera_825315E0 {
    char padding[0xac];
    float aspect; /* 0xac */
    char paddingB0[0xb4 - 0xb0];
    struct Viewport_825315E0 viewport; /* 0xb4 */
};

struct State_825315E0 {
    char padding[0x250];
    struct Camera_825315E0 *camera; /* 0x250 */
    char padding254[0x2fc - 0x254];
    struct Viewport_825315E0 viewport; /* 0x2fc */
    char padding314[0x32c - 0x314];
    int dirty; /* 0x32c */
};

extern struct State_825315E0 lbl_83296890;
extern float fn_82530740(void);
extern float fn_82530800(void);
extern void fn_82639EA8(void *device, struct Viewport_825315E0 *viewport);

void fn_825315E0(void *device)
{
    float width;
    float height;

    if (lbl_83296890.dirty != 0) {
        struct Camera_825315E0 *camera = lbl_83296890.camera;
        lbl_83296890.viewport.x = camera->viewport.x;
        lbl_83296890.viewport.y = camera->viewport.y;
        lbl_83296890.viewport.width = camera->viewport.width;
        lbl_83296890.viewport.height = camera->viewport.height;
        lbl_83296890.viewport.minZ = camera->viewport.minZ;
        lbl_83296890.viewport.maxZ = camera->viewport.maxZ;
        width = fn_82530740();
        height = fn_82530800();
        if (device != 0) {
            fn_82639EA8(device, &lbl_83296890.viewport);
            camera = lbl_83296890.camera;
        }
        camera->aspect = width / height;
        lbl_83296890.dirty = 0;
    }
}
