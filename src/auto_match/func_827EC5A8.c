int fn_827EC5A8(float x1, float y1, float x2, float y2)
{
    float a = x1 - x2;
    float b = y1 - y2;
    float cross;
    if (a < b) {
        float t = a;
        a = b;
        b = t;
        cross = a * x1 - b * y1;
    } else {
        cross = a * y1 - b * x1;
    }
    if (a > 0.0f) {
        if (cross >= 0.0f && cross <= a)
            return 1;
    } else {
        if (cross <= 0.0f && cross >= a)
            return 1;
    }
    if (b > 0.0f) {
        if (cross <= 0.0f && -cross <= b)
            return 1;
    } else {
        if (cross >= 0.0f && -cross >= b)
            return 1;
    }
    return 0;
}
