void fn_82CEBDC0(float (*dst)[4], const float (*src)[4])
{
    dst[0][0] = src[0][0];
    dst[1][1] = src[1][1];
    dst[2][2] = src[2][2];
    dst[0][3] = 0.0f;
    dst[1][3] = 0.0f;
    dst[2][3] = 0.0f;
    dst[0][1] = src[1][0];
    dst[1][0] = src[0][1];
    dst[0][2] = src[2][0];
    dst[2][0] = src[0][2];
    dst[1][2] = src[2][1];
    dst[2][1] = src[1][2];
}
