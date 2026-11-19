typedef struct Plane_8305D830 {
    float values[6];
} Plane_8305D830;

typedef struct Shape_8305D830 {
    char pad0[0x28];
    void *points;          /* 0x28 */
    unsigned int *indices; /* 0x2c */
    int count;             /* 0x30 */
    float normal[3];       /* 0x34 */
} Shape_8305D830;

extern void *fn_8305F7A0(void *points, unsigned int index);
extern void fn_82810328(const float *a, const float *b, float *out);
extern int fn_82810470(const float *vector);
extern void fn_82810240(const float *first, const float *second, float *out);
extern void fn_82810B78(const float *src, float *dst);
extern void fn_83066658(Plane_8305D830 *out, const float *normal, void *point);

unsigned char fn_8305D830(Shape_8305D830 *self, int index, Plane_8305D830 *out)
{
    float edge[3];
    float normal[3];
    int next;
    float *start;

    next = (index + 1) % self->count;
    start = (float *)fn_8305F7A0(self->points, self->indices[index]);
    fn_82810328((float *)fn_8305F7A0(self->points, self->indices[next]), start, edge);
    if (fn_82810470(edge) != 0) {
        return 0;
    }
    fn_82810240(edge, self->normal, normal);
    fn_82810B78(normal, normal);
    fn_83066658(out, normal, fn_8305F7A0(self->points, self->indices[index]));
    return 1;
}
