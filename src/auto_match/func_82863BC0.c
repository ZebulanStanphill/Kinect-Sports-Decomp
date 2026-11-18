typedef struct Polygon_82863BC0 {
    void *unused;
    void *vertices;       /* 0x04 */
    unsigned short count; /* 0x08 */
} Polygon_82863BC0;

typedef struct Triangle_82863BC0 {
    float values[6];
} Triangle_82863BC0;

extern void fn_82863A70(void *vertices, unsigned short count, int first, int second, int third,
                        Triangle_82863BC0 *out);
extern float fn_82810BE8(Triangle_82863BC0 *triangle);
extern float fn_82809CB0(float value);

void fn_82863BC0(Polygon_82863BC0 *self, float *area)
{
    int index;
    Triangle_82863BC0 triangle;

    *area = 0.0f;
    for (index = 2; index < self->count; index++) {
        fn_82863A70(self->vertices, self->count, 0, index - 1, index, &triangle);
        *area += fn_82809CB0(fn_82810BE8(&triangle)) * 0.5f;
    }
}
