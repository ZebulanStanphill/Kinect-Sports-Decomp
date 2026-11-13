typedef struct Obj_82860F80 {
  char pad[0xfc];
  float v[6];
} Obj_82860F80;

void fn_82860F80(const Obj_82860F80 *o, float *a, float *b, float *c, float *d, float *e, float *f)
{
  *a = o->v[0];
  *b = o->v[1];
  *c = o->v[2];
  *d = o->v[3];
  *e = o->v[4];
  *f = o->v[5];
}
