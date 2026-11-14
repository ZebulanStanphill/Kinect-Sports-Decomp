typedef struct Vec3_8280CAE0 {
    float x, y, z;
} Vec3_8280CAE0;

typedef struct Matrix_8280CAE0 {
    float m[4][4];
} Matrix_8280CAE0;

extern void fn_828105C8(Vec3_8280CAE0 *out, float x, float y, float z);

void fn_8280CAE0(const Matrix_8280CAE0 *self, Vec3_8280CAE0 *out)
{
    fn_828105C8(out, self->m[0][0], self->m[0][1], self->m[0][2]);
}
