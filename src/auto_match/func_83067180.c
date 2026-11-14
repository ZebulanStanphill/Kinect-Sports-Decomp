typedef struct Vec_83067180 {
    float x, y, z;
} Vec_83067180;

void fn_83067180(const Vec_83067180 *bounds, unsigned int corner, Vec_83067180 *out)
{
    switch (corner) {
    case 0:
        *out = bounds[0];
        break;
    case 1:
        out->x = bounds[1].x;
        out->y = bounds[0].y;
        out->z = bounds[0].z;
        break;
    case 2:
        out->x = bounds[1].x;
        out->y = bounds[1].y;
        out->z = bounds[0].z;
        break;
    case 3:
        out->x = bounds[0].x;
        out->y = bounds[1].y;
        out->z = bounds[0].z;
        break;
    case 4:
        out->x = bounds[0].x;
        out->y = bounds[1].y;
        out->z = bounds[1].z;
        break;
    case 5:
        out->x = bounds[1].x;
        out->y = bounds[0].y;
        out->z = bounds[1].z;
        break;
    case 6:
        *out = bounds[1];
        break;
    case 7:
        out->x = bounds[0].x;
        out->y = bounds[1].y;
        out->z = bounds[1].z;
        break;
    }
}
