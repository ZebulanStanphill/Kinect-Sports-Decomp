typedef struct { float x, y, z; } Vec3_8280AF20;

void fn_8280AF20(float *m, Vec3_8280AF20 *in, Vec3_8280AF20 *out, unsigned int n)
{
    float m0 = m[0];
    float m4 = m[4];
    float m8 = m[8];
    float m12 = m[12];
    float m1 = m[1];
    float m5 = m[5];
    float m9 = m[9];
    float m13 = m[13];
    float m2 = m[2];
    float m6 = m[6];
    float m10 = m[10];
    float m14 = m[14];
    unsigned int i;

    for (i = 0; i < n; i++) {
        Vec3_8280AF20 t;
        t.x = in[i].z * m8 + in[i].x * m0 + in[i].y * m4 + m12;
        t.y = in[i].z * m9 + in[i].x * m1 + in[i].y * m5 + m13;
        t.z = in[i].z * m10 + in[i].x * m2 + in[i].y * m6 + m14;
        out[i] = t;
    }
}
