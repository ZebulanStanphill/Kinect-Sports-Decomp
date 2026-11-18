typedef struct Plane_827EAC50 {
    float x;
    float y;
    float z;
    float d;
} Plane_827EAC50;

typedef struct Vec3_827EAC50 {
    float x;
    float y;
    float z;
} Vec3_827EAC50;

/* Classifies a box (center, half extents) against a plane: 3 in front, 1 crossing, 0 behind. */
int fn_827EAC50(const Plane_827EAC50 *plane, const Vec3_827EAC50 *center, const Vec3_827EAC50 *extents)
{
    Vec3_827EAC50 nearCorner;
    Vec3_827EAC50 farCorner;

    if (plane->x < 0.0f) {
        nearCorner.x = center->x + extents->x;
        farCorner.x = center->x - extents->x;
    } else {
        nearCorner.x = center->x - extents->x;
        farCorner.x = center->x + extents->x;
    }
    if (plane->y < 0.0f) {
        nearCorner.y = center->y + extents->y;
        farCorner.y = center->y - extents->y;
    } else {
        nearCorner.y = center->y - extents->y;
        farCorner.y = center->y + extents->y;
    }
    if (plane->z < 0.0f) {
        nearCorner.z = center->z + extents->z;
        farCorner.z = center->z - extents->z;
    } else {
        nearCorner.z = center->z - extents->z;
        farCorner.z = center->z + extents->z;
    }
    if (plane->y * nearCorner.y + plane->z * nearCorner.z + plane->x * nearCorner.x - plane->d > 0.0f) {
        return 3;
    }
    if (plane->y * farCorner.y + plane->z * farCorner.z + plane->x * farCorner.x - plane->d > 0.0f) {
        return 1;
    }
    return 0;
}
