typedef struct Point_8285D578 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Point_8285D578;

typedef struct Entry_8285D578 {
    Point_8285D578 point;
    float reserved[2];
} Entry_8285D578;

extern void fn_82811898(Point_8285D578 *, float, float);
extern void fn_82811700(Point_8285D578 *, Point_8285D578 *);
extern double __fsel(double, double, double);

void fn_8285D578(Entry_8285D578 *points, unsigned short count, Point_8285D578 *minimum,
                 Point_8285D578 *maximum)
{
    unsigned short index;
    fn_82811898(minimum, points->point.x, points->point.y);
    fn_82811700(minimum, maximum);
    for (index = 1; index < count; index++) {
        float minX = minimum->x;
        float maxX = maximum->x;
        float minY = minimum->y;
        float maxY = maximum->y;
        float x = points[index].point.x;
        float y = points[index].point.y;
        minimum->x = (float)__fsel(minX - x, x, minX);
        maximum->x = (float)__fsel(maxX - x, maxX, x);
        minimum->y = (float)__fsel(minY - y, y, minY);
        maximum->y = (float)__fsel(maxY - y, maxY, y);
    }
}
