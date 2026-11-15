typedef struct Point_82862C60 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Point_82862C60;

extern void fn_82811898(Point_82862C60 *out, float x, float y);
extern void fn_82811700(Point_82862C60 *source, Point_82862C60 *out);

void fn_82862C60(Point_82862C60 *points, unsigned short count, Point_82862C60 *minimum,
                 Point_82862C60 *maximum)
{
    unsigned short index;
    fn_82811898(minimum, points->x, points->y);
    fn_82811700(minimum, maximum);
    for (index = 1; index < count; index++) {
        float x = points[index].x;
        float y; /* 0x4 */
        if (x < minimum->x) {
            minimum->x = x;
        } else if (x > maximum->x) {
            maximum->x = x;
        }
        y = points[index].y;
        if (y < minimum->y) {
            minimum->y = y;
        } else if (y > maximum->y) {
            maximum->y = y;
        }
    }
}
