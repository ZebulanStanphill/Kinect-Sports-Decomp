typedef struct Vec3_8280CB58 {
    float x, y, z;
} Vec3_8280CB58;

typedef struct Matrix_8280CB58 {
    float m[4][4];
} Matrix_8280CB58;

extern void fn_828105C8(Vec3_8280CB58 *out, float x, float y, float z);

void fn_8280CB58(const Matrix_8280CB58 *self, Vec3_8280CB58 *out)
{
    fn_828105C8(out, self->m[3][0], self->m[3][1], self->m[3][2]);
}
