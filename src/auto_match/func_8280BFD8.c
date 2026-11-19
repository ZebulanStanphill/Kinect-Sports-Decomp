/* Builds the matrix that reflects points through the plane with the given normal that
   passes through the given point; the elements are written column by column. */
extern float fn_82810280(const float *a, const float *b); /* dot product */

void fn_8280BFD8(float *m, const float *point, const float *normal)
{
    float xy = normal[0] * normal[1] * -2.0f;
    float xz = normal[2] * normal[0] * -2.0f;
    float yz = normal[2] * normal[1] * -2.0f;
    float d = fn_82810280(point, normal) * 2.0f;

    m[0] = 1.0f - normal[0] * normal[0] * 2.0f;
    m[4] = xy;
    m[8] = xz;
    m[12] = normal[0] * d;
    m[1] = xy;
    m[5] = 1.0f - normal[1] * normal[1] * 2.0f;
    m[9] = yz;
    m[13] = d * normal[1];
    m[2] = xz;
    m[6] = yz;
    m[10] = 1.0f - normal[2] * normal[2] * 2.0f;
    m[14] = normal[2] * d;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[15] = 1.0f;
}
