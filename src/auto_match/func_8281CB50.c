typedef struct { float x, y, z; } Vec3_8281CB50;

void fn_8281CB50(const float *m, const Vec3_8281CB50 *in, Vec3_8281CB50 *out, unsigned int count)
{
    unsigned int i;
    for (i = 0; i < count; i++) {
        float rx = m[0] * in[i].x + m[2] * in[i].z + m[1] * in[i].y;
        float ry = m[3] * in[i].x + m[4] * in[i].y + in[i].z * m[5];
        float rz = m[6] * in[i].x + in[i].z * m[8] + in[i].y * m[7];
        out[i].x = rx;
        out[i].y = ry;
        out[i].z = rz;
    }
}
