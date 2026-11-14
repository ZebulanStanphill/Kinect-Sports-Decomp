typedef struct Vec3_8280C348 {
    float x, y, z;
} Vec3_8280C348;

extern void fn_828105C8(Vec3_8280C348 *out, float x, float y, float z);
extern float fn_82810280(const Vec3_8280C348 *a, const Vec3_8280C348 *b);

void fn_8280C348(const float *src, float *dst)
{
    Vec3_8280C348 pos;
    Vec3_8280C348 axisX;
    Vec3_8280C348 axisY;
    Vec3_8280C348 axisZ;

    pos.x = src[12];
    pos.y = src[13];
    pos.z = src[14];
    dst[0] = src[0];
    dst[4] = src[1];
    dst[8] = src[2];
    dst[1] = src[4];
    dst[5] = src[5];
    dst[9] = src[6];
    dst[2] = src[8];
    dst[6] = src[9];
    dst[10] = src[10];
    fn_828105C8(&axisX, dst[0], dst[4], dst[8]);
    fn_828105C8(&axisY, dst[1], dst[5], dst[9]);
    fn_828105C8(&axisZ, dst[2], dst[6], dst[10]);
    dst[12] = -fn_82810280(&pos, &axisX);
    dst[13] = -fn_82810280(&pos, &axisY);
    dst[14] = -fn_82810280(&pos, &axisZ);
}
