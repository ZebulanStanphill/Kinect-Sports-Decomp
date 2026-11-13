typedef struct Matrix_8280C450 { float m[4][4]; } Matrix_8280C450;

extern void fn_8280C348(const Matrix_8280C450 *src, Matrix_8280C450 *dst);
extern void fn_8280AC48(const Matrix_8280C450 *src, Matrix_8280C450 *dst);

void fn_8280C450(const Matrix_8280C450 *src, Matrix_8280C450 *dst)
{
    if (src == dst) {
        Matrix_8280C450 tmp;
        fn_8280C348(src, &tmp);
        tmp.m[0][3] = 0.0f;
        tmp.m[1][3] = 0.0f;
        tmp.m[2][3] = 0.0f;
        tmp.m[3][3] = 1.0f;
        fn_8280AC48(&tmp, dst);
    } else {
        fn_8280C348(src, dst);
        dst->m[0][3] = 0.0f;
        dst->m[1][3] = 0.0f;
        dst->m[2][3] = 0.0f;
        dst->m[3][3] = 1.0f;
    }
}
