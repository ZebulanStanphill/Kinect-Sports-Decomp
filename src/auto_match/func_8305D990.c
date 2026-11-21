/* Tests whether the polygon winds positively around its normal: sums the signed turning angles at
   every vertex and fails on a degenerate normal or a zero-length edge. */
typedef struct Polygon_8305D990 {
    char padding[0x28];
    void *vertices;  /* 0x28 */
    int *indices;    /* 0x2c */
    int count;       /* 0x30 */
    float normal[4]; /* 0x34 */
} Polygon_8305D990;

extern float lbl_8201E038;
extern float lbl_8217E6B0;

extern void fn_8305F778(void *vertices, int index, float *out);
extern void fn_82810328(const float *first, const float *second, float *out);
extern void fn_82810240(const float *first, const float *second, float *out);
extern float fn_82810BE8(const float *vector);
extern void fn_82810B78(const float *vector, float *out);
extern float fn_82810280(const float *first, const float *second);
extern float fn_828095F8(float value);

int fn_8305D990(Polygon_8305D990 *self)
{
    float previous[4];
    float current[4];
    float next[4];
    float inEdge[4];
    float outEdge[4];
    float cross[4];
    float length;
    float turning;
    int i;

    length = fn_82810BE8(self->normal);
    if (length > lbl_8201E038 && length < lbl_8217E6B0) {
        turning = 0.0f;
        for (i = 0; i < self->count; i++) {
            int before = i - 1;
            int previousIndex = before - 1 < 0 ? before - 1 + self->count : before - 1;
            int currentIndex = before < 0 ? before + self->count : before;

            fn_8305F778(self->vertices, self->indices[previousIndex], previous);
            fn_8305F778(self->vertices, self->indices[currentIndex], current);
            fn_8305F778(self->vertices, self->indices[i], next);
            fn_82810328(current, previous, inEdge);
            fn_82810328(next, current, outEdge);
            if (fn_82810BE8(inEdge) < 1e-05f) {
                return 0;
            }
            if (fn_82810BE8(outEdge) < 1e-05f) {
                return 0;
            }
            fn_82810B78(inEdge, inEdge);
            fn_82810B78(outEdge, outEdge);
            fn_82810240(inEdge, outEdge, cross);
            if (fn_82810280(cross, self->normal) > 0.0f) {
                turning += fn_828095F8(fn_82810280(inEdge, outEdge));
            } else {
                turning -= fn_828095F8(fn_82810280(inEdge, outEdge));
            }
        }
        if (turning > 0.0f) {
            return 1;
        }
    }
    return 0;
}
