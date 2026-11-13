typedef struct { float x, y, z; } Vec3_82810868;

/* a += b, returning the new a by value (r3 is the hidden return pointer). */
Vec3_82810868 fn_82810868(Vec3_82810868 *a, const Vec3_82810868 *b)
{
  a->x = a->x + b->x;
  a->y = b->y + a->y;
  a->z = b->z + a->z;
  return *a;
}
