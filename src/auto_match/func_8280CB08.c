typedef struct Vec3_8280CB08 {
    float x, y, z;
} Vec3_8280CB08;

typedef struct Matrix_8280CB08 {
    float m[4][4];
} Matrix_8280CB08;

extern void fn_828105C8(Vec3_8280CB08 *out, float x, float y, float z);

void fn_8280CB08(const Matrix_8280CB08 *self, Vec3_8280CB08 *out)
{
    fn_828105C8(out, self->m[1][0], self->m[1][1], self->m[1][2]);
}
