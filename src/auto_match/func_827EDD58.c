typedef struct Vec3_827EDD58 {
    float x;
    float y;
    float z;
} Vec3_827EDD58;

typedef struct Vec4_827EDD58 {
    float x;
    float y;
    float z;
    float w;
} Vec4_827EDD58;

extern const Vec3_827EDD58 lbl_821CA1A0;
extern int fn_827E9A68(const Vec4_827EDD58 *origin, const Vec4_827EDD58 *velocity,
                       const Vec3_827EDD58 *center, float radius, const Vec3_827EDD58 *otherVelocity,
                       float maxTime, float *hitTime);
extern void fn_827EF590(const Vec4_827EDD58 *scale, Vec4_827EDD58 *out);
extern void fn_827EF608(const Vec4_827EDD58 *m, const Vec4_827EDD58 *in, Vec4_827EDD58 *out);
extern int fn_8280A5E8(float value);
extern void fn_82810328(const void *a, const void *b, Vec4_827EDD58 *out);
extern void fn_8281CAE8(const void *transform, const Vec4_827EDD58 *in, Vec4_827EDD58 *out);

int fn_827EDD58(const Vec3_827EDD58 *start, float radius, const Vec3_827EDD58 *otherStart,
                const Vec3_827EDD58 *center, const float *extents, const void *transform,
                const Vec3_827EDD58 *otherCenter, float maxTime, float *hitTime)
{
    struct {
        Vec4_827EDD58 size;
        Vec4_827EDD58 other;
        Vec4_827EDD58 offset;
        Vec4_827EDD58 inverse;
    } L;

    L.size.x = extents[0] + radius;
    L.size.y = extents[1] + radius;
    L.size.z = extents[2] + radius;
    fn_82810328(start, center, &L.offset);
    fn_82810328(otherStart, otherCenter, &L.other);
    fn_8281CAE8(transform, &L.offset, &L.offset);
    fn_8281CAE8(transform, &L.other, &L.other);
    if (fn_8280A5E8(L.size.x) == 0 && fn_8280A5E8(L.size.y) == 0 && fn_8280A5E8(L.size.z) == 0) {
        fn_827EF590(&L.size, &L.inverse);
        fn_827EF608(&L.inverse, &L.offset, &L.offset);
        fn_827EF608(&L.inverse, &L.other, &L.other);
        return fn_827E9A68(&L.offset, &L.other, &lbl_821CA1A0, 1.0f, &lbl_821CA1A0, maxTime, hitTime);
    }
    return 0;
}
