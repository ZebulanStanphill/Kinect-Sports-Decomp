typedef struct Vec3_82860880 { float x, y, z; } Vec3_82860880;
typedef struct Hit_82860880 { char pad[0x28]; int index; } Hit_82860880;
typedef struct Space_82860880 {
  char pad0[0x10];
  float toLocal[16];     /* 0x10 */
  char pad50[0x90 - 0x50];
  unsigned int fallback; /* 0x90 */
  void *transform;       /* 0x94 */
} Space_82860880;
typedef struct Query_82860880 {
  char pad0[0x40];
  int *items;            /* 0x40 */
  char pad44[0x6c - 0x44];
  char tree[4];          /* 0x6c */
} Query_82860880;

extern Space_82860880 *fn_8285A808(Query_82860880 *query, void *key);
extern int *fn_8285A830(Query_82860880 *query, void *key);
extern void fn_8280AD30(float *m, const Vec3_82860880 *v, Vec3_82860880 *o);
extern Hit_82860880 *fn_8305C550(void *tree, Vec3_82860880 *pos);

int fn_82860880(Query_82860880 *query, void *key, const Vec3_82860880 *pos)
{
  Space_82860880 *space;
  int *out;
  Vec3_82860880 local;
  Hit_82860880 *hit;

  space = fn_8285A808(query, key);
  out = fn_8285A830(query, key);
  if (space->transform != 0) {
    fn_8280AD30(space->toLocal, pos, &local);
  } else {
    local = *pos;
  }
  hit = fn_8305C550(query->tree, &local);
  if (hit != 0) {
    *out = query->items[hit->index - (space->fallback == 0)];
    return 1;
  }
  if (space->fallback != 0) {
    *out = (int)space->fallback;
    return 1;
  }
  return 0;
}
