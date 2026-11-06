extern float lbl_8218E8E8;

typedef struct {
  int pad0;
  unsigned int key;
  int a;
  char pad1[0x20 - 0xc];
  int b;
} Entry_82407740;

typedef struct {
  char pad[0x38];
  unsigned int key0;
  unsigned int key1;
} Owner_82407740;

static __forceinline int *sel(Entry_82407740 *e, unsigned int k){ return e->key == k ? &e->a : &e->b; }
float fn_82407740(Owner_82407740 *o, Entry_82407740 *e)
{
  int *p0 = sel(e, o->key0);
  int *p1 = sel(e, o->key1);
  float f;
  if (*p0 == 0 && *p1 == 0) {
    return lbl_8218E8E8;
  }
  f = (float)*p0;
  return f / ((float)*p1 + f);
}
