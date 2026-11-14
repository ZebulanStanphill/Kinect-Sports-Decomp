// Catmull-Rom spline through p0..p3 at t (between p1 and p2).
float fn_82817318(float t, float p0, float p1, float p2, float p3)
{
    float d = p2 - p1;
    float a = ((p3 - p0) - d) * 0.5f - d;
    float b = (d * 2.0f + p0) - (p1 + p3) * 0.5f;
    float c = (p2 - p0) * 0.5f;

    return ((a * t + b) * t + c) * t + p1;
}
