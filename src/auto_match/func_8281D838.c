typedef struct { float x, y, z; } Vec3_8281D838;
typedef struct { float m[3][3]; } Matrix_8281D838;

void fn_8281D838(const Matrix_8281D838 *mat, const Vec3_8281D838 *in, Vec3_8281D838 *out, unsigned int count)
{
    float m00 = mat->m[0][0];
    float m10 = mat->m[1][0];
    float m20 = mat->m[2][0];
    float m01 = mat->m[0][1];
    float m11 = mat->m[1][1];
    float m21 = mat->m[2][1];
    float m02 = mat->m[0][2];
    float m12 = mat->m[1][2];
    float m22 = mat->m[2][2];
    unsigned int i;
    for (i = 0; i < count; i++) {
        float rx = in[i].z * m20 + in[i].x * m00 + in[i].y * m10;
        float ry = in[i].z * m21 + in[i].x * m01 + in[i].y * m11;
        float rz = in[i].z * m22 + in[i].x * m02 + in[i].y * m12;
        out[i].x = rx;
        out[i].y = ry;
        out[i].z = rz;
    }
}
