/* Message handler: message 0 copies a view description into the active
 * camera and enables it; message 1 disables it. */
typedef struct View_8260E818 {
    char pad00[0x10];
    int mode;  /* 0x10 */
    float x;   /* 0x14 */
    float y;   /* 0x18 */
    float z;   /* 0x1C */
    float fov; /* 0x20 */
} View_8260E818;

typedef struct Camera_8260E818 {
    char pad00[0x18];
    int mode;    /* 0x18 */
    float x;     /* 0x1C */
    float z;     /* 0x20 */
    float y;     /* 0x24 */
    float fov;   /* 0x28 */
    float blend; /* 0x2C */
    char pad30[0x8];
    int enabled; /* 0x38 */
} Camera_8260E818;

typedef struct Scene_8260E818 {
    char pad000[0x1AC];
    Camera_8260E818 *camera; /* 0x1AC */
} Scene_8260E818;

typedef struct Owner_8260E818 {
    char pad00[0x60];
    Scene_8260E818 **scene; /* 0x60 */
} Owner_8260E818;

extern const float lbl_82191EA0[0xd0];

void fn_8260E818(Owner_8260E818 *self, int unused, View_8260E818 *view, int unused2, int message)
{
    int mode;
    float z;
    float x;
    float fov;
    Camera_8260E818 *camera;
    float blend;

    if (message == 0) {
        blend = lbl_82191EA0[0x4b];
        mode = view->mode;
        z = view->z;
        x = view->x;
        fov = view->fov;
        camera = (*self->scene)->camera;
        camera->y = view->y;
        camera->mode = mode;
        camera->fov = fov;
        camera->enabled = 1;
        camera->x = x;
        camera->z = z;
        camera->blend = blend;
    } else if (message == 1) {
        (*self->scene)->camera->enabled = 0;
    }
}
