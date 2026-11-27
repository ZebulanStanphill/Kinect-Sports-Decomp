/* Projects a world point to screen pixels: transforms it by the view and projection matrices,
   rejects points behind the camera, optionally reports whether the projected point is inside the
   given half extents, and maps the result from [-1, 1] to the viewport. */

#include "xdk/vectorintrinsics.h"

typedef struct Vec3_82531F18 {
    float x;
    float y;
    float z;
} Vec3_82531F18;

typedef __declspec(align(16)) struct Float4_82531F18 {
    float x;
    float y;
    float z;
    float w;
} Float4_82531F18;

typedef struct Point_82531F18 {
    float x;
    float y;
} Point_82531F18;

typedef struct Matrix_82531F18 {
    __vector4 r[4];
} Matrix_82531F18;

typedef struct Matrices_82531F18 {
    Matrix_82531F18 view;       /* 0x00 */
    Matrix_82531F18 projection; /* 0x40 */
} Matrices_82531F18;

typedef struct Viewport_82531F18 {
    unsigned int x;      /* 0x0 */
    unsigned int y;      /* 0x4 */
    unsigned int width;  /* 0x8 */
    unsigned int height; /* 0xc */
} Viewport_82531F18;

typedef struct Context_82531F18 {
    char pad0[0x2a88];
    int id; /* 0x2a88 */
} Context_82531F18;

extern Context_82531F18 *lbl_8320A898;
extern Matrices_82531F18 lbl_83296890;

extern int fn_82A1BB18(void);
extern void fn_82530948(Context_82531F18 *ctx);
extern void fn_825315E0(Context_82531F18 *ctx);
extern void fn_82531118(void);
extern Viewport_82531F18 *fn_825308E8(void);
extern int fn_82531E50(Point_82531F18 point, float halfWidth, float halfHeight);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

static __forceinline Matrix_82531F18 Transpose(const Matrix_82531F18 *m)
{
    Matrix_82531F18 p;
    Matrix_82531F18 t;

    p.r[0] = __vmrghw(m->r[0], m->r[2]);
    p.r[1] = __vmrghw(m->r[1], m->r[3]);
    p.r[2] = __vmrglw(m->r[0], m->r[2]);
    p.r[3] = __vmrglw(m->r[1], m->r[3]);
    t.r[0] = __vmrghw(p.r[0], p.r[1]);
    t.r[1] = __vmrglw(p.r[0], p.r[1]);
    t.r[2] = __vmrghw(p.r[2], p.r[3]);
    t.r[3] = __vmrglw(p.r[2], p.r[3]);
    return t;
}

static __forceinline __vector4 Transform(__vector4 v, const Matrix_82531F18 *m)
{
    Matrix_82531F18 t = Transpose(m);
    __vector4 x, y, z, w;

    x = __vmsum4fp(v, t.r[0]);
    y = __vmsum4fp(v, t.r[1]);
    z = __vmsum4fp(v, t.r[2]);
    w = __vmsum4fp(v, t.r[3]);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
}

int fn_82531F18(const Vec3_82531F18 *position, Point_82531F18 *screen, int *visible, float halfWidth,
                float halfHeight)
{
    Context_82531F18 *ctx;
    int id;
    Viewport_82531F18 *viewport;
    __vector4 v;
    float sx;
    float sy;

    id = lbl_8320A898->id;
    ctx = id == fn_82A1BB18() ? lbl_8320A898 : 0;
    fn_82530948(ctx);
    fn_825315E0(ctx);
    fn_82531118();
    viewport = fn_825308E8();
    {
        Float4_82531F18 point;

        point.x = position->x;
        point.y = position->y;
        point.z = position->z;
        point.w = 1.0f;
        v = *(__vector4 *)&point;
    }
    v = Transform(v, &lbl_83296890.view);
    if (v.vector4_f32[2] > -1.0e-05f) {
        if (visible != 0) {
            *visible = 0;
        }
        return 0;
    }
    v = Transform(v, &lbl_83296890.projection);
    if (v.vector4_f32[3] != 0.0f) {
        sx = v.vector4_f32[0] / v.vector4_f32[3];
        sy = v.vector4_f32[1] / v.vector4_f32[3];
    } else {
        sx = 0.0f;
        sy = 0.0f;
    }
    if (visible != 0) {
        Point_82531F18 point;

        point.x = sx;
        point.y = sy;
        *visible = fn_82531E50(point, halfWidth, halfHeight);
    }
    screen->x = fn_82539560(sx, -1.0f, 1.0f, 0.0f, (float)viewport->width);
    screen->y = fn_82539560(sy, -1.0f, 1.0f, (float)viewport->height, 0.0f);
    screen->x = (float)viewport->x + screen->x;
    screen->y = (float)viewport->y + screen->y;
    return 1;
}
