extern double fabs(double value);

extern double fabs(double);

unsigned char fn_82784B00(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,
                          float tolerance)
{
    float dy1 = y2 - y1;
    float dx2 = x4 - x3;
    float dx1 = x2 - x1;
    float dy2 = y4 - y3;
    float determinant = dy2 * dx1 - dx2 * dy1;
    float inverse;
    float dx;
    float dy;
    float first;
    float second;
    if (fabs(determinant) < tolerance) {
        return 1;
    }
    dx = x1 - x3;
    dy = y1 - y3;
    inverse = 1.0f / determinant;
    first = (dy * dx2 - dx * dy2) * inverse;
    second = (dy * dx1 - dx * dy1) * inverse;
    return first >= 0.0f && first <= 1.0f && second >= 0.0f && second <= 1.0f;
}
