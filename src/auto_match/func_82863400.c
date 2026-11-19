typedef struct Vec3_82863400 {
    float x;
    float y;
    float z;
} Vec3_82863400;

extern void fn_82810208(const Vec3_82863400 *a, const Vec3_82863400 *b, Vec3_82863400 *out);
extern void fn_828102A8(const Vec3_82863400 *v, Vec3_82863400 *out, float scale);
extern void fn_82810360(const Vec3_82863400 *src, Vec3_82863400 *dst);
extern void fn_828105C8(Vec3_82863400 *out, float x, float y, float z);
extern float fn_82810B40(const Vec3_82863400 *a, const Vec3_82863400 *b);
extern void fn_8280AD30(const float *matrix, const Vec3_82863400 *v, Vec3_82863400 *out);

/* Bounding sphere of a transformed box: centre of min/max, radius to the farthest corner. */
void fn_82863400(const Vec3_82863400 *min, const Vec3_82863400 *max, const float *matrix,
                 Vec3_82863400 *center, float *radius)
{
    Vec3_82863400 corners[8];
    float distance;
    int i;

    fn_82810208(min, max, center);
    fn_828102A8(center, center, 0.5f);
    fn_82810360(min, &corners[0]);
    fn_828105C8(&corners[1], max->x, min->y, min->z);
    fn_828105C8(&corners[2], min->x, max->y, min->z);
    fn_828105C8(&corners[3], max->x, max->y, min->z);
    fn_828105C8(&corners[4], min->x, min->y, max->z);
    fn_828105C8(&corners[5], max->x, min->y, max->z);
    fn_828105C8(&corners[6], min->x, max->y, max->z);
    fn_82810360(max, &corners[7]);
    *radius = fn_82810B40(center, &corners[0]);
    for (i = 1; i < 8; i++) {
        distance = fn_82810B40(center, &corners[i]);
        if (distance > *radius)
            *radius = distance;
    }
    fn_8280AD30(matrix, center, center);
}
