typedef struct Node_827629D8 {
    char pad[0x20];
    unsigned char flags; /* 0x20 */
} Node_827629D8;

typedef struct Shape_827629D8 {
    char pad[0x14];
    int sizeX; /* 0x14 */
    int sizeY; /* 0x18 */
    int sizeZ; /* 0x1c */
} Shape_827629D8;

typedef struct Iterator_827629D8 {
    Node_827629D8 *node; /* 0x0 */
    int index;           /* 0x4 */
} Iterator_827629D8;

typedef struct Segment_827629D8 {
    float x0;              /* 0x00 */
    float y0;              /* 0x04 */
    float x1;              /* 0x08 */
    float y1;              /* 0x0c */
    unsigned char isCurve; /* 0x10 */
} Segment_827629D8;

typedef struct Point_827629D8 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Point_827629D8;

typedef struct PathInfo_827629D8 {
    int pad0;
    int pointCount; /* 0x4 */
} PathInfo_827629D8;

typedef struct Path_827629D8 {
    char pad0[8];
    char points[0x20];       /* 0x08 */
    PathInfo_827629D8 *info; /* 0x28 */
} Path_827629D8;

extern Iterator_827629D8 *fn_8275FD58(Iterator_827629D8 *it, Shape_827629D8 *shape);
extern void fn_8275E130(Iterator_827629D8 *it, float *x, float *y);
extern void fn_8275E198(Iterator_827629D8 *it, Segment_827629D8 *segment, int flags);
extern void fn_826EBD10(void *points, Point_827629D8 *point);
extern void fn_82784708(Path_827629D8 *path, int x, int y, int z, float a, float b);
extern void fn_82784920(Path_827629D8 *path, float x0, float y0, float x1, float y1);

static __forceinline unsigned char IsAtEnd(Iterator_827629D8 *it)
{
    if (it->node->flags == 1 || (it->node->flags & 0x80) == 0) {
        return 1;
    }
    return 0;
}

void fn_827629D8(Shape_827629D8 *shape, Path_827629D8 *path)
{
    Iterator_827629D8 it;
    Segment_827629D8 segment;

    fn_8275FD58(&it, shape);
    {
        float startX;
        float startY;

        fn_8275E130(&it, &startX, &startY);
        fn_82784708(path, shape->sizeX - 1, shape->sizeY - 1, shape->sizeZ - 1, startX, startY);
    }
    while (!IsAtEnd(&it)) {
        fn_8275E198(&it, &segment, 0);
        if (segment.isCurve) {
            fn_82784920(path, segment.x0, segment.y0, segment.x1, segment.y1);
        } else {
            Point_827629D8 point;

            point.x = segment.x1;
            point.y = segment.y1;
            fn_826EBD10(path->points, &point);
            path->info->pointCount++;
        }
    }
}
