typedef struct Point_82771150 {
    float x;
    float y;
    float z;
    float w;
} Point_82771150;

typedef struct Elem_82771150 {
    int sizeX;
    int sizeY;
    int sizeZ;
    float a;
    float b;
    Point_82771150 *points;
    unsigned int count;
    int pad1c[2];
} Elem_82771150;

extern void fn_82784708(void *p, int x, int y, int z, float a, float b);
extern void fn_82784920(void *p, float x, float y, float z, float w);

void fn_82771150(Elem_82771150 *e, void *p)
{
    unsigned int n;
    unsigned int i;

    fn_82784708(p, e->sizeX - 1, e->sizeY - 1, e->sizeZ - 1, e->a, e->b);
    n = e->count;
    for (i = 0; i < n; i++) {
        Point_82771150 *pt = &e->points[i];
        fn_82784920(p, pt->x, pt->y, pt->z, pt->w);
    }
}
