typedef struct Camera_828618B0 {
    char pad0[0x18];
    unsigned char flags; /* 0x18 */
    char pad19[0x47];
    float view[16];       /* 0x60 */
    float projection[16]; /* 0xa0 */
    char pade0[0x1c];
    float left;        /* 0xfc */
    float right;       /* 0x100 */
    float bottom;      /* 0x104 */
    float top;         /* 0x108 */
    float nearPlane;   /* 0x10c */
    float farPlane;    /* 0x110 */
    float fov;         /* 0x114 */
    float aspect;      /* 0x118 */
    float perspNear;   /* 0x11c */
    float perspFar;    /* 0x120 */
    float frustum[16]; /* 0x124 */
} Camera_828618B0;

extern void fn_8280B788(float *out, float left, float right, float bottom, float top, float nearPlane,
                        float farPlane);
extern void fn_8280B900(float *out, float left, float right, float bottom, float top, float nearPlane,
                        float farPlane);
extern void fn_8280B828(float *out, float fov, float aspect, float nearPlane, float farPlane);
extern void fn_828611B8(float *params, float *view, int first, int second, float *out);
extern void fn_828616F0(float *params, float *view, float *out);

void fn_828618B0(Camera_828618B0 *self)
{
    if (self->flags & 1) {
        fn_8280B788(self->projection, self->left, self->right, self->bottom, self->top, self->nearPlane,
                    self->farPlane);
        fn_828611B8(&self->left, self->view, 0xfc, 0xfc, self->frustum);
    } else if (self->flags & 2) {
        fn_8280B900(self->projection, self->left, self->right, self->bottom, self->top, self->nearPlane,
                    self->farPlane);
    } else {
        fn_8280B828(self->projection, self->fov, self->aspect, self->perspNear, self->perspFar);
        fn_828616F0(&self->fov, self->view, self->frustum);
    }
}
