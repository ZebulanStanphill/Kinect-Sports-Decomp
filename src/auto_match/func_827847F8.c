typedef struct Point_827847F8 {
    float x;
    float y;
} Point_827847F8;

typedef struct Counter_827847F8 {
    int pad0;
    int count; /* 0x04 */
} Counter_827847F8;

typedef struct PointArray_827847F8 {
    unsigned int size;      /* 0x00 */
    unsigned int pageCount; /* 0x04 */
    unsigned int maxPages;  /* 0x08 */
    Point_827847F8 **pages; /* 0x0c */
} PointArray_827847F8;

typedef struct Path_827847F8 {
    int pad0;
    float tolerance;            /* 0x04 */
    PointArray_827847F8 points; /* 0x08 */
    char pad18[0x10];
    Counter_827847F8 *added; /* 0x28 */
} Path_827847F8;

extern const float lbl_82015528;
extern double fabs(double x);
extern void fn_826EBD10(PointArray_827847F8 *points, const Point_827847F8 *point);

void fn_827847F8(Path_827847F8 *path, float x0, float y0, float x1, float y1, float x2, float y2)
{
    float mx01;
    float my01;
    float mx12;
    float my12;
    float mx;
    float my;
    float cross;
    float dx;
    float dy;
    Point_827847F8 point;

    for (;;) {
        mx01 = (x0 + x1) * 0.5f;
        my01 = (y0 + y1) * 0.5f;
        mx12 = (x1 + x2) * 0.5f;
        my12 = (y1 + y2) * 0.5f;
        dx = x2 - x0;
        dy = y2 - y0;
        cross = (float)fabs((x1 - x2) * dy - (y1 - y2) * dx);
        if (cross <= lbl_82015528 || cross * cross <= (dy * dy + dx * dx) * path->tolerance) {
            break;
        }
        mx = (mx01 + mx12) * 0.5f;
        my = (my01 + my12) * 0.5f;
        fn_827847F8(path, x0, y0, mx01, my01, mx, my);
        y0 = my;
        x0 = mx;
        x1 = mx12;
        y1 = my12;
    }
    point.x = x2;
    point.y = y2;
    fn_826EBD10(&path->points, &point);
    path->added->count = path->added->count + 1;
}
