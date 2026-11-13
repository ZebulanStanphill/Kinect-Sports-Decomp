void fn_8280FC78(const float (*src)[3], float (*dst)[4])
{
    dst[0][0] = src[0][0];
    dst[1][0] = src[0][1];
    dst[2][0] = src[0][2];
    dst[3][0] = 0.0f;
    dst[0][1] = src[1][0];
    dst[1][1] = src[1][1];
    dst[2][1] = src[1][2];
    dst[3][1] = 0.0f;
    dst[0][2] = src[2][0];
    dst[1][2] = src[2][1];
    dst[2][2] = src[2][2];
    dst[3][2] = 0.0f;
    dst[0][3] = 0.0f;
    dst[1][3] = 0.0f;
    dst[2][3] = 0.0f;
    dst[3][3] = 1.0f;
}
