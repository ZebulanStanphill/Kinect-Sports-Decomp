typedef struct Plane_827EB518 {
    float x;
    float y;
    float z;
    float d;
} Plane_827EB518;

typedef struct Frustum_827EB518 {
    char pad0[0x48];
    Plane_827EB518 planes[6]; /* 0x48 */
} Frustum_827EB518;

extern double __fsel(double test, double positive, double negative);

/* Tests a box against the frustum planes still set in *mask, starting with the plane that rejected the
   last one; clears the planes the box is fully inside. Returns 0 when it is outside (and remembers that
   plane), 1 when it intersects, 2 when it is inside. */
int fn_827EB518(Frustum_827EB518 *frustum, unsigned char *mask, const float *boxMin, const float *boxMax,
                unsigned char *lastPlane)
{
    unsigned char bit;
    unsigned char plane;
    unsigned char tested;
    unsigned int result;
    unsigned int side;
    int inside;
    const Plane_827EB518 *p;

    plane = *lastPlane;
    if (plane >= 6) {
        plane = 0;
    }
    bit = 0x80 >> plane;
    result = 0;
    tested = 0;
    do {
        if ((*mask & bit) != 0) {
            p = &frustum->planes[plane];
            if (__fsel(p->x, boxMin[0], boxMax[0]) * p->x + __fsel(p->y, boxMin[1], boxMax[1]) * p->y +
                    __fsel(p->z, boxMin[2], boxMax[2]) * p->z - p->d >
                0.0) {
                side = 3;
            } else if (__fsel(p->x, boxMax[0], boxMin[0]) * p->x + __fsel(p->y, boxMax[1], boxMin[1]) * p->y +
                           __fsel(p->z, boxMax[2], boxMin[2]) * p->z - p->d >
                       0.0) {
                side = 1;
            } else {
                side = 0;
            }
            result |= side;
            if (result == 3) {
                *lastPlane = plane;
                return 0;
            }
            if (side == 0) {
                *mask &= ~bit;
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
    inside = result == 1;
    return inside + !inside * 2;
}
