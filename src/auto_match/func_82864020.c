typedef struct Vec3_82864020 {
    float x;
    float y;
    float z;
} Vec3_82864020;

typedef struct Plane_82864020 {
    Vec3_82864020 normal; /* 0x00 */
    float distance;       /* 0x0c */
} Plane_82864020;

typedef struct Glob_82864020 {
    unsigned int f0;   /* 0x00 */
    unsigned int kind; /* 0x04 */
    float scale;       /* 0x08 */
    Vec3_82864020 up;  /* 0x0c */
} Glob_82864020;

typedef struct Curve_82864020 {
    int pad0;             /* 0x00 */
    void *points;         /* 0x04 */
    unsigned short count; /* 0x08 */
} Curve_82864020;

extern Glob_82864020 lbl_832116B4;
extern void fn_82862238(void *points, unsigned short count, unsigned int kind, float scale, int index,
                        Vec3_82864020 *out);
extern void fn_82810240(const Vec3_82864020 *a, const Vec3_82864020 *b, Vec3_82864020 *out);
extern void fn_82810328(const Vec3_82864020 *a, const Vec3_82864020 *b, Vec3_82864020 *out);
extern void fn_82810360(const Vec3_82864020 *src, Vec3_82864020 *dst);
extern int fn_82810470(const Vec3_82864020 *v);
extern void fn_82810530(const Vec3_82864020 *v, Vec3_82864020 *out);
extern void fn_82810B78(const Vec3_82864020 *v, Vec3_82864020 *out);

void fn_82864020(Curve_82864020 *curve, unsigned char flip, Plane_82864020 *planes)
{
    Vec3_82864020 normal;
    Vec3_82864020 previous;
    Vec3_82864020 current;
    Vec3_82864020 edge;
    Vec3_82864020 offset;
    int i;
    int next;

    fn_82862238(curve->points, curve->count, lbl_832116B4.kind, lbl_832116B4.scale, 0, &previous);
    for (i = 0; i < curve->count; i++) {
        next = i + 1;
        fn_82862238(curve->points, curve->count, lbl_832116B4.kind, lbl_832116B4.scale,
                    next != curve->count ? next : 0, &current);
        fn_82810328(&previous, &lbl_832116B4.up, &offset);
        fn_82810328(&current, &previous, &edge);
        fn_82810240(&offset, &edge, &normal);
        if (fn_82810470(&normal) == 0) {
            fn_82810B78(&normal, &normal);
        }
        if (flip != 0) {
            fn_82810530(&normal, &normal);
        }
        planes[i].normal.x = normal.x;
        planes[i].normal.y = normal.y;
        planes[i].normal.z = normal.z;
        planes[i].distance =
            lbl_832116B4.up.x * normal.x + lbl_832116B4.up.y * normal.y + lbl_832116B4.up.z * normal.z;
        fn_82810360(&current, &previous);
    }
}
