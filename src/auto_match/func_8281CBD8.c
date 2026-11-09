typedef struct Vec3_8281CBD8 { float x, y, z; } Vec3_8281CBD8;
typedef struct Vec4_8281CBD8 { float x, y, z, w; } Vec4_8281CBD8;

void fn_8281CBD8(const Vec3_8281CBD8 *in, Vec4_8281CBD8 *out)
{
  out->w = 0.0f;
  out->x = in->x;
  out->y = in->y;
  out->z = in->z;
}
