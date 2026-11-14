typedef struct Vec3_8280CB30 {
    float x, y, z;
} Vec3_8280CB30;

typedef struct Matrix_8280CB30 {
    float m[4][4];
} Matrix_8280CB30;

extern void fn_828105C8(Vec3_8280CB30 *out, float x, float y, float z);

void fn_8280CB30(const Matrix_8280CB30 *self, Vec3_8280CB30 *out)
{
    fn_828105C8(out, self->m[2][0], self->m[2][1], self->m[2][2]);
}
