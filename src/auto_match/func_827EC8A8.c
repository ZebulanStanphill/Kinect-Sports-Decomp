int fn_827EC8A8(const float *a, float heightA, float radiusA, const float *b, float heightB, float radiusB)
{
    float topA = a[1] + heightA;
    float topB = b[1] + heightB;
    float dx;
    float dz;
    float r;

    if (topA > topB) {
        if (a[1] > topB)
            return 0;
    } else {
        if (b[1] > topA)
            return 0;
    }
    dx = a[0] - b[0];
    dz = a[2] - b[2];
    r = radiusA + radiusB;
    return dx * dx + dz * dz < r * r;
}
