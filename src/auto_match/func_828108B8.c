typedef struct { float x, y, z; } Vec3_828108B8;

/* Returns a struct by value: r3 is the hidden return pointer. */
Vec3_828108B8 fn_828108B8(const Vec3_828108B8 *a, const Vec3_828108B8 *b)
{
  Vec3_828108B8 r;
  r.x = a->x - b->x;
  r.y = a->y - b->y;
  r.z = a->z - b->z;
  return r;
}
