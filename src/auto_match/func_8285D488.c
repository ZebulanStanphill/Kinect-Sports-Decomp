typedef struct Point_8285D488 {
    float v[4];
} Point_8285D488;

typedef struct Shape_8285D488 {
    char pad00[4];
    char sub[12];           /* 0x04 */
    float radius;           /* 0x10 */
    Point_8285D488 *points; /* 0x14 */
    unsigned short count;   /* 0x18 */
} Shape_8285D488;

extern int fn_8285ABD8(Shape_8285D488 *, void *);
extern void fn_82810328(void *, Point_8285D488 *, Point_8285D488 *);
extern float fn_82810280(void *, Point_8285D488 *);
extern int fn_827EB788(void *, float, void *, float);
extern int fn_827EDAD0(void *, float, Point_8285D488 *, Point_8285D488 *, Point_8285D488 *);

int fn_8285D488(void *context, char *transform, Shape_8285D488 *shape, void *plane, void *output, float scale)
{
    Point_8285D488 point;
    if (fn_8285ABD8(shape, context) == 0) {
        return 0;
    }
    fn_82810328(transform + 4, shape->points, &point);
    if (fn_82810280(plane, &point) < 0.0f) {
        return 0;
    }
    if (fn_827EB788(output, scale, shape->sub, shape->radius) != 0) {
        int i;
        Point_8285D488 *points = shape->points;
        for (i = 2; i < shape->count; i++) {
            if (fn_827EDAD0(output, scale, points, &points[i - 1], &points[i]) != 0) {
                return 2;
            }
        }
    }
    return 1;
}
