typedef struct Obj_82861A20 {
  char pad[0xfc];
  float v[6];
} Obj_82861A20;

void fn_82861A20(const Obj_82861A20 *o, float *a, float *b, float *c, float *d, float *e, float *f)
{
  *a = o->v[0];
  *b = o->v[1];
  *c = o->v[2];
  *d = o->v[3];
  *e = o->v[4];
  *f = o->v[5];
}
