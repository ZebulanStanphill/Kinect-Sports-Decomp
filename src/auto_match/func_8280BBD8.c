typedef struct Vec3_8280BBD8 {
    float x, y, z;
} Vec3_8280BBD8;

typedef struct Mat3_8280BBD8 {
    float m[3][4];
} Mat3_8280BBD8;

extern void fn_828106A0(Vec3_8280BBD8 *v);
extern float fn_82809558(float v);

void fn_8280BBD8(Mat3_8280BBD8 *self, Vec3_8280BBD8 *out)
{
    int i;

    out->x = self->m[0][0] * self->m[0][0];
    out->y = self->m[1][0] * self->m[1][0];
    out->z = self->m[2][0] * self->m[2][0];
    for (i = 1; i < 3; i++) {
        out->x += self->m[0][i] * self->m[0][i];
        out->y += self->m[1][i] * self->m[1][i];
        out->z += self->m[2][i] * self->m[2][i];
    }
    out->x = fn_82809558(out->x);
    out->y = fn_82809558(out->y);
    out->z = fn_82809558(out->z);
}
