/* Builds a translation matrix from pos (identity, then fn_8280B1E8 sets x/y/z) and composes it
   between two matrices: out = post * (pre * T). The first three parameters are unused. */
typedef struct Matrix_82526008 {
    float m[4][4];
} Matrix_82526008;

extern void fn_8280ACD8(Matrix_82526008 *m);
extern void fn_8280B1E8(Matrix_82526008 *m, float x, float y, float z);
extern void fn_8280CB70(const Matrix_82526008 *a, const Matrix_82526008 *b, Matrix_82526008 *out);

void fn_82526008(void *a, void *b, void *c, const float *pos, const Matrix_82526008 *post,
                 const Matrix_82526008 *pre, Matrix_82526008 *out)
{
    Matrix_82526008 t;
    Matrix_82526008 tmp;

    fn_8280ACD8(&t);
    fn_8280B1E8(&t, pos[0], pos[1], pos[2]);
    fn_8280CB70(pre, &t, &tmp);
    fn_8280CB70(post, &tmp, out);
}
