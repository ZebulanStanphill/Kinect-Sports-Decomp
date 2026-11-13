void fn_82D06310(float (*dst)[4], const float (*src)[4])
{
    dst[0][0] = src[0][0];
    dst[1][1] = src[1][1];
    dst[2][2] = src[2][2];
    dst[3][3] = src[3][3];
    dst[0][1] = src[1][0];
    dst[1][0] = src[0][1];
    dst[0][2] = src[2][0];
    dst[2][0] = src[0][2];
    dst[0][3] = src[3][0];
    dst[3][0] = src[0][3];
    dst[1][2] = src[2][1];
    dst[2][1] = src[1][2];
    dst[1][3] = src[3][1];
    dst[3][1] = src[1][3];
    dst[2][3] = src[3][2];
    dst[3][2] = src[2][3];
}
