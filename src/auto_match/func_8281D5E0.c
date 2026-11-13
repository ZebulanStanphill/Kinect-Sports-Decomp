void fn_8281D5E0(const float (*src)[3], float (*dst)[3])
{
    if (src == dst) {
        return;
    }
    dst[0][0] = src[0][0];
    dst[1][0] = src[1][0];
    dst[2][0] = src[2][0];
    dst[0][1] = src[0][1];
    dst[1][1] = src[1][1];
    dst[2][1] = src[2][1];
    dst[0][2] = src[0][2];
    dst[1][2] = src[1][2];
    dst[2][2] = src[2][2];
}
