void fn_8280B398(const float (*src)[4], float (*dst)[4], float sx, float sy, float sz)
{
    dst[0][0] = src[0][0] * sx;
    dst[0][1] = src[0][1] * sx;
    dst[0][2] = src[0][2] * sx;
    dst[0][3] = src[0][3] * sx;
    dst[1][0] = src[1][0] * sy;
    dst[1][1] = src[1][1] * sy;
    dst[1][2] = src[1][2] * sy;
    dst[1][3] = src[1][3] * sy;
    dst[2][0] = src[2][0] * sz;
    dst[2][1] = src[2][1] * sz;
    dst[2][2] = src[2][2] * sz;
    dst[2][3] = src[2][3] * sz;
    if (dst != src) {
        dst[3][0] = src[3][0];
        dst[3][1] = src[3][1];
        dst[3][2] = src[3][2];
        dst[3][3] = src[3][3];
    }
}
