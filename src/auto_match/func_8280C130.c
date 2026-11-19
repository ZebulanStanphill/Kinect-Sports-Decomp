/*
 * Determinant of a column-major 4x4 matrix (m[column * 4 + row]), expanded along the last row;
 * zero terms are skipped.
 */
static __forceinline float Det3(float m00, float m01, float m02, float m10, float m11, float m12, float m20,
                                float m21, float m22)
{
    return (m01 * m12 - m02 * m11) * m20 + ((m11 * m22 - m12 * m21) * m00 - (m01 * m22 - m02 * m21) * m10);
}

float fn_8280C130(const float *m)
{
    float r0c0 = m[0];
    float r0c1 = m[4];
    float r0c2 = m[8];
    float r0c3 = m[12];
    float r1c0 = m[1];
    float r1c1 = m[5];
    float r1c2 = m[9];
    float r1c3 = m[13];
    float r2c0 = m[2];
    float r2c1 = m[6];
    float r2c2 = m[10];
    float r2c3 = m[14];
    float r3c0 = m[3];
    float r3c1 = m[7];
    float r3c2 = m[11];
    float r3c3 = m[15];
    float det;

    det = Det3(r0c0, r1c0, r2c0, r0c1, r1c1, r2c1, r0c2, r1c2, r2c2) * r3c3;
    if (r3c0 != 0.0f) {
        det -= Det3(r0c1, r1c1, r2c1, r0c2, r1c2, r2c2, r0c3, r1c3, r2c3) * r3c0;
    }
    if (r3c1 != 0.0f) {
        det += Det3(r0c0, r1c0, r2c0, r0c2, r1c2, r2c2, r0c3, r1c3, r2c3) * r3c1;
    }
    if (r3c2 != 0.0f) {
        det -= Det3(r0c0, r1c0, r2c0, r0c1, r1c1, r2c1, r0c3, r1c3, r2c3) * r3c2;
    }
    return det;
}
