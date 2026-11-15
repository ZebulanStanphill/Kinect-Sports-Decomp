typedef struct Vector_82862BC8 {
    float x; /* 0x00 */
    float y; /* 0x04 */
    float z; /* 0x08 */
    float w; /* 0x0c */
} Vector_82862BC8;

extern void fn_82810328(const void *, const Vector_82862BC8 *, Vector_82862BC8 *);
extern float fn_8280A5D8(float);
extern void fn_8306B530(void *, float, float, float, float);

void fn_82862BC8(const void *point, const Vector_82862BC8 *origin, float plane, void *out,
                 unsigned char *parallel)
{
    Vector_82862BC8 delta;
    unsigned char isParallel;
    float fraction;
    fn_82810328(point, origin, &delta);
    isParallel = delta.z == 0.0f;
    *parallel = isParallel;
    if (!isParallel) {
        float inverse = fn_8280A5D8(delta.z);
        fraction = (plane - origin->z) * inverse;
        fn_8306B530(out, delta.x * fraction + origin->x, delta.y * fraction + origin->y, plane, 1.0f);
    }
}
