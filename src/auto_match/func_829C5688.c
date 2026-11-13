typedef struct Point_829C5688 {
    int pad0;
    int x;          /* 0x04 */
    int y;          /* 0x08 */
} Point_829C5688;

extern double fn_82F65018(double y, double x);

float fn_829C5688(Point_829C5688 *p)
{
    return (float)fn_82F65018((double)p->y, (double)p->x);
}
