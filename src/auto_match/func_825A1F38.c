typedef struct Vt_825A1F38 { void *s0, *s1, *s2, *s3; void (*slot4)(void *self); } Vt_825A1F38;
typedef struct Item_825A1F38 { Vt_825A1F38 *vt; short flags; short refs; } Item_825A1F38;
typedef struct Vec_825A1F38 { int pad0; Item_825A1F38 **first; Item_825A1F38 **last; } Vec_825A1F38;
typedef struct Mgr_825A1F38 { char pad[0x14]; Vec_825A1F38 *vec; } Mgr_825A1F38;
typedef struct Obj_825A1F38 { int *p0; char pad[0x358 - 4]; Mgr_825A1F38 *mgr; } Obj_825A1F38;
extern void fn_8251FA58(Mgr_825A1F38 *m);
extern void fn_82522ED8(int *p);
extern void fn_825A24C0(Vec_825A1F38 *v, Item_825A1F38 **it);
extern void fn_8265CA20(void *p);
extern void fn_82CE4118(void *p);

Obj_825A1F38 *fn_825A1F38(Obj_825A1F38 *o)
{
  Mgr_825A1F38 *m;
  Item_825A1F38 **it;
  Item_825A1F38 **end;

  m = o->mgr;
  if (m != 0) {
    it = m->vec->first;
    end = m->vec->last;
    for (; it < end; it++) {
      if ((*it)->refs == 1) {
        (*it)->vt->slot4(*it);
      }
    }
    for (it = m->vec->first; it < end; it++) {
      if ((*it)->refs == 1) {
        fn_82CE4118(*it);
        fn_825A24C0(m->vec, it);
        it--;
      }
    }
    fn_8251FA58(o->mgr);
    o->mgr = 0;
  }
  fn_82522ED8(o->p0);
  fn_8265CA20(o);
  return o;
}
