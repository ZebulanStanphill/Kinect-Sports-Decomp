typedef struct { float x, y, z, w; } Vec4_82FF12F0;
typedef struct {
  char pad0[0x78];
  float f78;
  float f7c;
  float f80;
  float f84;
  float f88;
  char pad8c[0x4c];
  unsigned char flags;
} Obj_82FF12F0;

extern int fn_82FF11B8(Obj_82FF12F0 *o);

int fn_82FF12F0(Obj_82FF12F0 *o, Vec4_82FF12F0 *out)
{
  int r = 1;
  if ((o->flags & 1) == 0) {
    out->y = 0.0f;
    out->x = 0.0f;
    out->z = 0.0f;
    out->w = 0.0f;
    r = fn_82FF11B8(o);
  }
  out->x = o->f78;
  out->y = o->f80;
  out->z = o->f84;
  out->w = o->f88;
  return r;
}
