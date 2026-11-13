typedef struct { float x, y, z; } Vec3_82811CF8;
typedef struct { Vec3_82811CF8 xyz; float w; } Vec4_82811CF8;
extern Vec3_82811CF8 lbl_821CA1A0;

void fn_82811CC8(Vec4_82811CF8 *out)
{
  out->xyz = lbl_821CA1A0;
  out->w = 1.0f;
}
