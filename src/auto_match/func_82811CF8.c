typedef struct { float x, y, z; } Vec3_82811CF8;
typedef struct { Vec3_82811CF8 xyz; float w; } Vec4_82811CF8;

void fn_82811CF8(Vec4_82811CF8 *out, const Vec3_82811CF8 *in, float w)
{
  out->xyz = *in;
  out->w = w;
}
