typedef struct { float x, y, z; } Vec3_82810918;

/* a -= b, returning the new a by value (r3 is the hidden return pointer). */
Vec3_82810918 fn_82810918(Vec3_82810918 *a, const Vec3_82810918 *b)
{
  a->x = a->x - b->x;
  a->y = a->y - b->y;
  a->z = a->z - b->z;
  return *a;
}
