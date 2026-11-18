typedef struct Plane_827EAAF0 {
    float x;
    float y;
    float z;
    float d;
} Plane_827EAAF0;

typedef struct Frustum_827EAAF0 {
    char pad0[0x48];
    Plane_827EAAF0 planes[6]; /* 0x48 */
} Frustum_827EAAF0;

extern float fn_8281D480(const Plane_827EAAF0 *plane, const float *point);

/* Tests a sphere against the frustum planes, starting with the plane that rejected the last one.
   Returns 0 when it is outside (and remembers that plane), 1 when it intersects, 2 when it is inside. */
int fn_827EAAF0(Frustum_827EAAF0 *frustum, const float *center, float radius, unsigned char *lastPlane)
{
    float distances[6];
    unsigned char plane;
    unsigned char tested;
    int result;
    float distance;

    plane = *lastPlane;
    result = 2;
    for (tested = 0; tested < 6; tested++) {
        distance = fn_8281D480(&frustum->planes[plane], center);
        distances[plane] = distance;
        if (distance > -radius) {
            result = 1;
            if (distance > radius) {
                *lastPlane = plane;
                return 0;
            }
        }
        plane = (unsigned char)(plane + 1) % 6;
    }
    return result;
}
