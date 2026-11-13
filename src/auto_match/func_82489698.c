typedef struct { int a; void *first; void *last; } Vec_82489698;
typedef struct { char pad[0x10]; Vec_82489698 v; char pad2[0x24]; char sub[4]; } Obj_82489698;
extern void fn_8234FC08(void *);
extern void fn_8265CA20(void *);
extern void fn_824E8300(void *);
extern void fn_82522ED8(Obj_82489698 *);
void fn_82489698(void *unused, Obj_82489698 *o)
{
  Vec_82489698 *v = &o->v;
  void *p = v->first;
  if (p != 0) {
    fn_8234FC08(p);
    fn_8265CA20(p);
    v->first = 0;
    v->last = 0;
  }
  fn_824E8300(o->sub);
  fn_82522ED8(o);
}
