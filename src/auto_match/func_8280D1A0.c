typedef struct Matrix_8280D1A0 {
    float m[4][4];
} Matrix_8280D1A0;

typedef struct Euler_8280D1A0 {
    float x; /* 0x00 */
    float y; /* 0x04 */
    float z; /* 0x08 */
} Euler_8280D1A0;

extern const float lbl_8201DD70;
extern const float lbl_8201DF4C;
extern double fn_82F65D50(double x);
extern double fn_82F65018(double y, double x);

void fn_8280D1A0(const Matrix_8280D1A0 *matrix, Euler_8280D1A0 *out)
{
    float y;

    out->y = y = (float)fn_82F65D50(matrix->m[0][2]);
    if (y < lbl_8201DD70) {
        if (y > lbl_8201DF4C) {
            out->x = (float)fn_82F65018(-matrix->m[1][2], matrix->m[2][2]);
            out->z = (float)fn_82F65018(-matrix->m[0][1], matrix->m[0][0]);
        } else {
            out->x = -(float)fn_82F65018(matrix->m[1][0], matrix->m[1][1]);
            out->z = 0.0f;
        }
    } else {
        out->x = (float)fn_82F65018(matrix->m[1][0], matrix->m[1][1]);
        out->z = 0.0f;
    }
}
