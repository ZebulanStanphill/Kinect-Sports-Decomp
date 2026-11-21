typedef struct Vec3_82874AE0 {
    float x;
    float y;
    float z;
} Vec3_82874AE0;

typedef struct Points_82874AE0 {
    char pad00[0x14];
    int count;            /* 0x14 */
    Vec3_82874AE0 *begin; /* 0x18 */
    Vec3_82874AE0 *end;   /* 0x1c */
} Points_82874AE0;

extern const Vec3_82874AE0 lbl_821CA1A0;
extern void fn_82810328(const Vec3_82874AE0 *a, const Vec3_82874AE0 *b, Vec3_82874AE0 *out);

/* Returns the offset from the nearest point to the given position. */
Vec3_82874AE0 fn_82874AE0(Points_82874AE0 *self, const Vec3_82874AE0 *position)
{
    Vec3_82874AE0 best;
    Vec3_82874AE0 offset;
    Vec3_82874AE0 *point;
    float bestDistance;
    float distance;

    if (self->count == 0) {
        return lbl_821CA1A0;
    }
    best = lbl_821CA1A0;
    bestDistance = 3.402823466e+38f;
    for (point = self->begin; point != self->end; point++) {
        fn_82810328(position, point, &offset);
        distance = offset.x * offset.x + offset.y * offset.y + offset.z * offset.z;
        if (distance < bestDistance) {
            bestDistance = distance;
            best = offset;
        }
    }
    return best;
}
