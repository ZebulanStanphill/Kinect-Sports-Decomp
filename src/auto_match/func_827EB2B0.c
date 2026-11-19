typedef struct Plane_827EB2B0 {
    float x;
    float y;
    float z;
    float d;
} Plane_827EB2B0;

typedef struct Frustum_827EB2B0 {
    char pad0[0x48];
    Plane_827EB2B0 planes[6]; /* 0x48 */
} Frustum_827EB2B0;

extern float fn_8281D480(const Plane_827EB2B0 *plane, const float *point);

/* Tests a sphere against the frustum planes still set in *mask, starting with the plane that rejected the
   last one; clears the planes the sphere is fully inside. Returns 0 when it is outside (and remembers that
   plane), 1 when it intersects, 2 when it is inside. */
static __forceinline int TestSphere(Frustum_827EB2B0 *frustum, unsigned char *mask, const float *center,
                                    float radius, unsigned char *lastPlane)
{
    unsigned char bit;
    unsigned char plane;
    unsigned char tested;
    unsigned char inside;
    float distance;

    plane = *lastPlane;
    if (plane >= 6) {
        plane = 0;
    }
    bit = 0x80 >> plane;
    inside = 1;
    tested = 0;
    do {
        if ((*mask & bit) != 0) {
            distance = fn_8281D480(&frustum->planes[plane], center);
            if (distance > radius) {
                *lastPlane = plane;
                return 0;
            }
            if (distance <= -radius) {
                *mask &= ~bit;
            } else {
                inside = 0;
            }
        }
        plane++;
        if (plane == 6) {
            plane = 0;
            bit = 0x80;
        } else {
            bit >>= 1;
        }
        tested++;
    } while (tested < 6);
    return !inside + inside * 2;
}

int fn_827EB2B0(Frustum_827EB2B0 *frustum, unsigned char *mask, const float *center, float radius,
                unsigned char *lastPlane)
{
    return TestSphere(frustum, mask, center, radius, lastPlane);
}
