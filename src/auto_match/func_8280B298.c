void fn_8280B298(const float (*src)[4], float (*dst)[4], float x, float y, float z)
{
    if (src != dst) {
        dst[0][0] = src[0][0];
        dst[1][0] = src[1][0];
        dst[2][0] = src[2][0];
        dst[0][1] = src[0][1];
        dst[1][1] = src[1][1];
        dst[2][1] = src[2][1];
        dst[0][2] = src[0][2];
        dst[1][2] = src[1][2];
        dst[2][2] = src[2][2];
        dst[0][3] = src[0][3];
        dst[1][3] = src[1][3];
        dst[2][3] = src[2][3];
    }
    dst[3][0] = src[0][0] * x + src[1][0] * y + src[2][0] * z + src[3][0];
    dst[3][1] = src[0][1] * x + src[1][1] * y + src[2][1] * z + src[3][1];
    dst[3][2] = src[0][2] * x + src[1][2] * y + src[2][2] * z + src[3][2];
    dst[3][3] = src[0][3] * x + src[1][3] * y + src[2][3] * z + src[3][3];
}
