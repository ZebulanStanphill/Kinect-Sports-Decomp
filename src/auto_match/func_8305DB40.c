typedef struct Polygon_8305DB40 {
    char padding[0x28];
    void *vertices; /* 0x28 */
    int *indices;   /* 0x2c */
    int count;      /* 0x30 */
} Polygon_8305DB40;

extern void fn_8305F778(void *vertices, int index, float *out);
extern void fn_82810328(const float *first, const float *second, float *out);
extern void fn_82810240(const float *first, const float *second, float *out);
extern float fn_82810BE8(const float *vector);

float fn_8305DB40(Polygon_8305DB40 *self)
{
    float origin[4];
    float first[4];
    float second[4];
    float secondDelta[4];
    float firstDelta[4];
    float cross[4];
    float sum = 0.0f;
    int index;
    fn_8305F778(self->vertices, self->indices[0], origin);
    for (index = 2; index < self->count; index++) {
        fn_8305F778(self->vertices, self->indices[index - 1], first);
        fn_8305F778(self->vertices, self->indices[index], second);
        fn_82810328(first, origin, firstDelta);
        fn_82810328(second, origin, secondDelta);
        fn_82810240(firstDelta, secondDelta, cross);
        sum = fn_82810BE8(cross) + sum;
    }
    return sum * 0.5f;
}
