typedef struct Point_82784920 {
    float x;
    float y;
} Point_82784920;

typedef struct Counter_82784920 {
    int pad0;
    int count; /* 0x04 */
} Counter_82784920;

typedef struct PointArray_82784920 {
    unsigned int size;      /* 0x00 */
    unsigned int pageCount; /* 0x04 */
    unsigned int maxPages;  /* 0x08 */
    Point_82784920 **pages; /* 0x0c */
} PointArray_82784920;

typedef struct Path_82784920 {
    int pad0;
    int pad4;
    PointArray_82784920 points; /* 0x08 */
    char pad18[0x10];
    Counter_82784920 *added; /* 0x28 */
} Path_82784920;

extern const float lbl_82015528;
extern void fn_826EBD10(PointArray_82784920 *points, const Point_82784920 *point);
extern void fn_827847F8(Path_82784920 *path, float px, float py, float x0, float y0, float x1, float y1);

static __forceinline Point_82784920 *Back(PointArray_82784920 *points)
{
    unsigned int last = points->size - 1;

    return &points->pages[last >> 8][last & 0xff];
}

void fn_82784920(Path_82784920 *path, float x0, float y0, float x1, float y1)
{
    Point_82784920 *back;
    float px;
    float py;
    float cross;
    Point_82784920 point;

    back = Back(&path->points);
    px = back->x;
    py = back->y;
    cross = (y0 - py) * (x1 - x0) - (x0 - px) * (y1 - y0);
    if (cross < 0.0f) {
        cross = -cross;
    }
    if (cross < lbl_82015528) {
        point.x = x1;
        point.y = y1;
        fn_826EBD10(&path->points, &point);
        path->added->count = path->added->count + 1;
    } else {
        fn_827847F8(path, px, py, x0, y0, x1, y1);
    }
}
