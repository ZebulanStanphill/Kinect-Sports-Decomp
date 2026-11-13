void fn_8280B9A0(const float (*src)[4], float (*dst)[4], float sx, float sy, float sz)
{
    dst[0][0] = src[0][0] * sx;
    dst[1][0] = src[1][0] * sx;
    dst[2][0] = src[2][0] * sx;
    dst[3][0] = src[3][0] * sx;
    dst[0][1] = src[0][1] * sy;
    dst[1][1] = src[1][1] * sy;
    dst[2][1] = src[2][1] * sy;
    dst[3][1] = src[3][1] * sy;
    dst[0][2] = src[0][2] * sz;
    dst[1][2] = src[1][2] * sz;
    dst[2][2] = src[2][2] * sz;
    dst[3][2] = src[3][2] * sz;
    if (dst != src) {
        dst[0][3] = src[0][3];
        dst[1][3] = src[1][3];
        dst[2][3] = src[2][3];
        dst[3][3] = src[3][3];
    }
}
