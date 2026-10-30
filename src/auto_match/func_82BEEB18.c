typedef struct { float x, y, z; } Vec3_82BEEB18;

/* Returns a struct by value: r3 is the hidden return pointer. */
Vec3_82BEEB18 fn_82BEEB18(const Vec3_82BEEB18 *a, const Vec3_82BEEB18 *b)
{
  Vec3_82BEEB18 r;
  r.x = a->x - b->x;
  r.y = a->y - b->y;
  r.z = a->z - b->z;
  return r;
}
