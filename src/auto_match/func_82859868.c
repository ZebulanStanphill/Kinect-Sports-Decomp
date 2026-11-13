void fn_82859868(const float *minA, const float *maxA, const float *minB, const float *maxB,
                 float *outMin, float *outMax)
{
    float bx = minB[0], ax = minA[0];
    float by = minB[1], ay = minA[1];
    float cx = maxA[0], dx = maxB[0];
    float cy = maxA[1], dy = maxB[1];
    outMin[0] = (bx - ax >= 0.0f) ? ax : bx;
    outMin[1] = (by - ay >= 0.0f) ? ay : by;
    outMax[0] = (cx - dx >= 0.0f) ? cx : dx;
    outMax[1] = (cy - dy >= 0.0f) ? cy : dy;
}
