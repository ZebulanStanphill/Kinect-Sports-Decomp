/* Tests whether the polygon is convex: the cross product of every pair of consecutive edges must
   point to the same side of the normal, ignoring corners where the two edges are parallel. */
typedef struct Polygon_8305DC18 {
    char padding[0x28];
    void *vertices;  /* 0x28 */
    int *indices;    /* 0x2c */
    int count;       /* 0x30 */
    float normal[4]; /* 0x34 */
} Polygon_8305DC18;

extern void fn_8305F778(void *vertices, int index, float *out);
extern void fn_82810328(const float *first, const float *second, float *out);
extern void fn_82810240(const float *first, const float *second, float *out);
extern void fn_82810B78(const float *vector, float *out);
extern float fn_82810280(const float *first, const float *second);
extern float fn_82809CB0(float value);

int fn_8305DC18(Polygon_8305DC18 *self)
{
    float previous[4];
    float current[4];
    float next[4];
    float inEdge[4];
    float outEdge[4];
    float cross[4];
    float side;
    float lastSide;
    int i;

    if (self->count > 3) {
        lastSide = 0.0f;
        for (i = 2; i < self->count + 2; i++) {
            fn_8305F778(self->vertices, self->indices[i - 2], previous);
            fn_8305F778(self->vertices, self->indices[(i - 1) % self->count], current);
            fn_8305F778(self->vertices, self->indices[i % self->count], next);
            fn_82810328(current, previous, inEdge);
            fn_82810328(next, current, outEdge);
            fn_82810B78(inEdge, inEdge);
            fn_82810B78(outEdge, outEdge);
            fn_82810240(inEdge, outEdge, cross);
            side = fn_82810280(cross, self->normal);
            if (fn_82809CB0(side) > 1e-05f) {
                if (side * lastSide < 0.0f) {
                    return 0;
                }
                lastSide = side;
            }
        }
    }
    return 1;
}
