/* Sets the owned matrix: a copy of m (fn_8280AC48) or identity (fn_8280ACD8) when m is null. */
typedef struct Matrix_82852358 {
    float m[4][4];
} Matrix_82852358;

typedef struct Self_82852358 {
    Matrix_82852358 *matrix;
} Self_82852358;

extern void fn_8280AC48(const Matrix_82852358 *src, Matrix_82852358 *dst);
extern void fn_8280ACD8(Matrix_82852358 *m);

void fn_82852358(Self_82852358 *self, const Matrix_82852358 *m)
{
    if (m != 0)
        fn_8280AC48(m, self->matrix);
    else
        fn_8280ACD8(self->matrix);
}
