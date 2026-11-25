typedef struct Point_827EA918 {
    float x;
    float y;
    float z;
} Point_827EA918;

typedef struct Transform_827EA918 {
    char data[0x100 - 0xf0];
} Transform_827EA918;

typedef struct Matrix_827EA918 {
    char data[0x10];
} Matrix_827EA918;

extern int fn_8280A5E8(float);
extern void fn_82810328(const void *, const void *, void *);
extern void fn_827EF590(const Point_827EA918 *, void *);
extern void fn_827EF608(const void *, const void *, void *);
extern void fn_828106A0(void *);
extern int fn_827EA708(void *, float, void *, void *, void *, void *, void *, void *, void *, void *, float,
                       void *, void *);

int fn_827EA918(void *origin, const Point_827EA918 *angles, void *reference, const Point_827EA918 *a,
                const Point_827EA918 *b, const Point_827EA918 *c, const Point_827EA918 *d,
                const Point_827EA918 *e, const Point_827EA918 *f, void *otherOrigin, float scale,
                void *resultA, void *resultB)
{
    struct {
        Point_827EA918 c;
        int pad8c;
        Point_827EA918 b;
        int pad9c;
        Point_827EA918 a;
        int padac;
        Transform_827EA918 rotation;
        Point_827EA918 f;
        int padcc;
        Point_827EA918 e;
        int paddc;
        Point_827EA918 d;
        int padec;
        Transform_827EA918 transformed;
        Matrix_827EA918 matrix;
    } local;

    local.a = *a;
    local.b = *b;
    local.c = *c;
    local.d = *d;
    local.e = *e;
    local.f = *f;
    if (fn_8280A5E8(angles->x) == 0 && fn_8280A5E8(angles->y) == 0 && fn_8280A5E8(angles->z) == 0) {
        fn_82810328(reference, otherOrigin, &local.transformed);
        fn_82810328(&local.a, origin, &local.a);
        fn_82810328(&local.b, origin, &local.b);
        fn_82810328(&local.c, origin, &local.c);
        fn_827EF590(angles, &local.rotation);
        fn_827EF608(&local.rotation, &local.transformed, &local.transformed);
        fn_827EF608(&local.rotation, &local.a, &local.a);
        fn_827EF608(&local.rotation, &local.b, &local.b);
        fn_827EF608(&local.rotation, &local.c, &local.c);
        fn_828106A0(&local.matrix);
        return fn_827EA708(&local.matrix, 1.0f, &local.transformed, &local.a, &local.b, &local.c, &local.d,
                           &local.e, &local.f, &local.matrix, scale, resultA, resultB);
    }
    return 0;
}
