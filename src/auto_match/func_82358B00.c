typedef struct Itf_82358B00 Itf_82358B00;
struct Itf_82358B00 { struct { int pad; void (*f1)(Itf_82358B00 *, float); } *vt; };
typedef struct Vec_82358B00 { Itf_82358B00 **begin; Itf_82358B00 **end; } Vec_82358B00;
typedef struct Obj_82358B00 Obj_82358B00;
struct Obj_82358B00 {
  struct { char pad[0xd0]; void (*fd0)(Obj_82358B00 *, float); } *vt;
  char pad4[8];
  Itf_82358B00 **b2;
  Itf_82358B00 **e2;
  char pad14[0xc];
  Vec_82358B00 **b;
  Vec_82358B00 **e;
  char pad28[0x64];
  void *p8c;
};
extern void fn_82359718(Obj_82358B00 *);
extern void fn_823B4F98(void *, float);
void fn_82358B00(Obj_82358B00 *o, float dt)
{
  Vec_82358B00 **v;
  Itf_82358B00 **it;
  Vec_82358B00 *vec;
  Itf_82358B00 **ie;
  Itf_82358B00 **e2;
  Vec_82358B00 **ve;
  fn_82359718(o);
  fn_823B4F98(o->p8c, dt);
  v = o->b;
  ve = o->e;
  for (; v < ve; v++) {
    vec = *v;
    it = vec->begin;
    ie = vec->end;
    for (; it < ie; it++) {
      (*it)->vt->f1(*it, dt);
    }
  }
  it = o->b2;
  e2 = o->e2;
  for (; it < e2; it++) {
    (*it)->vt->f1(*it, dt);
  }
  o->vt->fd0(o, dt);
}
