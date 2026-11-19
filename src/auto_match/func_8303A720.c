typedef struct Camera_8303A720 Camera_8303A720;

typedef struct CameraVtbl_8303A720 {
    void *slots[10];
    float (*GetZoom)(Camera_8303A720 *self); /* 0x28 */
} CameraVtbl_8303A720;

struct Camera_8303A720 {
    CameraVtbl_8303A720 *vt;
    char pad4[0x4c];
    int handle; /* 0x50 */
};

typedef struct View_8303A720 View_8303A720;

typedef struct ViewVtbl_8303A720 {
    void *slots[11];
    float (*GetFieldOfView)(View_8303A720 *self); /* 0x2c */
} ViewVtbl_8303A720;

struct View_8303A720 {
    ViewVtbl_8303A720 *vt;
    int pad4;
    Camera_8303A720 *camera; /* 0x08 */
};

extern const float lbl_8217D2F8;
extern void *lbl_83264304;

extern double fn_82F655D8(double base, double exponent);
extern void fn_82FEF868(Camera_8303A720 *camera, float value);
extern void fn_82FEF6D0(Camera_8303A720 *camera);
extern void fn_82FF4AE8(void *manager, int handle, float fieldOfView, float scaled);

void fn_8303A720(View_8303A720 *self)
{
    float fieldOfView;
    float scaled;

    fieldOfView = self->vt->GetFieldOfView(self);
    scaled = fieldOfView / (float)fn_82F655D8(2.0, self->camera->vt->GetZoom(self->camera) * lbl_8217D2F8);
    fn_82FEF868(self->camera, scaled);
    fn_82FEF6D0(self->camera);
    fn_82FF4AE8(lbl_83264304, self->camera->handle, fieldOfView, scaled);
}
