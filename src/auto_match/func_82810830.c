typedef struct V3 { float x, y, z; } V3;
V3 fn_82810830(V3 *a, V3 *b)
{
  V3 r;
  r.x = a->x + b->x;
  r.y = a->y + b->y;
  r.z = a->z + b->z;
  return r;
}
