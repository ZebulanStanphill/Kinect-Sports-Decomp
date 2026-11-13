extern float fn_8280A958(float x);
float fn_8284DCB0(float a, float b, float c)
{
    float sq = b * b;
    float inv = 1.0f / c;
    if (sq < 1e-05f) sq = 1e-05f;
    return fn_8280A958((1.0f / sq) * inv * a + 1.0f) * 0.5f + 1.0f;
}
