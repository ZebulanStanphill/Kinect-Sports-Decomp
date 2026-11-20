typedef struct Plane_827EB3B8 {
    float x;
    float y;
    float z;
    float d;
} Plane_827EB3B8;

extern double __fsel(double test, double positive, double negative);

/* Tests a box against the planes still set in *mask, starting with the plane that rejected the last one;
   clears the planes the box is fully inside. Returns 0 when it is outside (and remembers that plane),
   1 when it intersects, 2 when it is inside. */
int fn_827EB3B8(const Plane_827EB3B8 *planes, unsigned char count, unsigned char *mask, const float *boxMin,
                const float *boxMax, unsigned char *lastPlane)
{
    unsigned char bit;
    unsigned char plane;
    unsigned char tested;
    unsigned int result;
    unsigned int side;
    int inside;
    const Plane_827EB3B8 *p;

    plane = *lastPlane;
    if (plane >= count) {
        plane = 0;
    }
    bit = 0x80 >> plane;
    result = 0;
    for (tested = 0; tested < count; tested++) {
        if ((*mask & bit) != 0) {
            p = &planes[plane];
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
        if (plane == count) {
            plane = 0;
            bit = 0x80;
        } else {
            bit >>= 1;
        }
    }
    inside = result == 1;
    return inside + !inside * 2;
}
