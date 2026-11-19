typedef struct Rect6_8285DA18 {
    float values[6];
} Rect6_8285DA18;

typedef struct Point_8285DA18 {
    float x;
    float y;
} Point_8285DA18;

typedef struct Camera_8285DA18 {
    float view[16];              /* 0x0 */
    float viewInverse[16];       /* 0x40 */
    float projection[16];        /* 0x80 */
    float *parent;               /* 0xc0 */
    float *parentInverse;        /* 0xc4 */
    unsigned char frustum[0xa8]; /* 0xc8 */
    Rect6_8285DA18 viewport;     /* 0x170 */
    unsigned char planes[0x60];  /* 0x188 */
    float position[3];           /* 0x1e8 */
    Rect6_8285DA18 screen;       /* 0x1f4 */
    Point_8285DA18 scale;        /* 0x20c */
    Point_8285DA18 offset;       /* 0x214 */
    Point_8285DA18 topLeft;      /* 0x21c */
    Point_8285DA18 bottomRight;  /* 0x224 */
    unsigned char pad22c[0x38];  /* 0x22c */
    unsigned char unk264;        /* 0x264 */
    unsigned char valid;         /* 0x265 */
} Camera_8285DA18;

extern Camera_8285DA18 lbl_83211340;

extern void fn_82810360(const float *src, float *dst);
extern void fn_8280D598(float *view, const float *eye, const float *at, const float *up);
extern void fn_8280C450(const float *src, float *dst);
extern void fn_8280CB70(const float *a, const float *b, float *out);
extern void fn_82861370(void *viewport, float *viewInverse, void *frustum);
extern void fn_8280B788(float *out, float left, float right, float bottom, float top, float nearPlane,
                        float farPlane);
extern void fn_8306BA08(void *frustum, void *planes);
extern void fn_8285CF40(Rect6_8285DA18 *screen, Rect6_8285DA18 *viewport, Point_8285DA18 *scale,
                        Point_8285DA18 *offset, void *extra);
extern void fn_82811898(Point_8285DA18 *out, float x, float y);

void fn_8285DA18(const float *eye, const float *at, const float *up, Rect6_8285DA18 *viewport,
                 Rect6_8285DA18 *screen)
{
    Camera_8285DA18 *camera = &lbl_83211340;
    float *parentInverse;

    if (viewport != &camera->viewport) {
        camera->viewport = *viewport;
    }
    fn_82810360(eye, camera->position);
    fn_8280D598(camera->view, eye, at, up);
    fn_8280C450(camera->view, camera->viewInverse);
    if (camera->parent != 0) {
        parentInverse = camera->parentInverse;
        fn_8280CB70(camera->view, camera->parent, camera->view);
        fn_8280CB70(parentInverse, camera->viewInverse, camera->viewInverse);
    }
    fn_82861370(viewport, camera->viewInverse, camera->frustum);
    fn_8280B788(camera->projection, viewport->values[0], viewport->values[1], viewport->values[2],
                viewport->values[3], viewport->values[4], viewport->values[5]);
    fn_8306BA08(camera->frustum, camera->planes);
    fn_8285CF40(screen, viewport, &camera->scale, &camera->offset, camera->pad22c);
    if (screen != &camera->screen) {
        camera->screen = *screen;
    }
    fn_82811898(&camera->topLeft, screen->values[0], screen->values[1]);
    fn_82811898(&camera->bottomRight, screen->values[2] + screen->values[0],
                screen->values[3] + screen->values[1]);
    camera->valid = 1;
}
