int fn_827E8798(float topRadius, float bottomRadius, float height, const float *point, int *region)
{
    float radius;
    float distanceSq;
    float dy;

    radius = bottomRadius - (bottomRadius - topRadius) * (point[1] / height);
    distanceSq = point[0] * point[0] + point[2] * point[2];
    if (point[1] > height) {
        dy = point[1] - height;
        if (dy * dy + distanceSq > topRadius * topRadius) {
            return 0;
        }
        *region = 1;
        return 1;
    } else if (point[1] < 0.0f) {
        if (point[1] * point[1] + distanceSq > bottomRadius * bottomRadius) {
            return 0;
        }
        *region = 2;
        return 1;
    } else {
        if (distanceSq > radius * radius) {
            return 0;
        }
        *region = 3;
        return 1;
    }
}
