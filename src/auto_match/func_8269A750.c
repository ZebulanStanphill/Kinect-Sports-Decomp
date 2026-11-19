typedef struct Matrix2D_8269A750 {
    float m00; /* 0x0 */
    float m01; /* 0x4 */
    float m02; /* 0x8 */
    float m10; /* 0xc */
    float m11; /* 0x10 */
    float m12; /* 0x14 */
} Matrix2D_8269A750;

double cos(double x);
double sin(double x);

void fn_8269A750(Matrix2D_8269A750 *m, float scaleX, float scaleY, float angle)
{
    float c = (float)cos(angle);
    float s = (float)sin(angle);
    float m10 = m->m10;
    float m11 = m->m11;
    float m00 = m->m00;
    float m01 = m->m01;

    m->m10 = (m00 * s + m10 * c) * scaleX;
    m->m11 = (m01 * s + m11 * c) * scaleY;
    m->m00 = (m00 * c - m10 * s) * scaleX;
    m->m01 = (m01 * c - m11 * s) * scaleY;
}
