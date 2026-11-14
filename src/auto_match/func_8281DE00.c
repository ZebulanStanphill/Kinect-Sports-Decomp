typedef struct Vec3_8281DE00 { float x, y, z; } Vec3_8281DE00;
typedef struct Mat3_8281DE00 { float m[3][3]; } Mat3_8281DE00;
extern void fn_828106A0(Vec3_8281DE00 *v);
extern float fn_82809558(float v);

void fn_8281DE00(Mat3_8281DE00 *self, Vec3_8281DE00 *out)
{
  int i;

  fn_828106A0(out);
  for (i = 0; i < 3; i++) {
    out->x += self->m[0][i] * self->m[0][i];
    out->y += self->m[1][i] * self->m[1][i];
    out->z += self->m[2][i] * self->m[2][i];
  }
  out->x = fn_82809558(out->x);
  out->y = fn_82809558(out->y);
  out->z = fn_82809558(out->z);
}
