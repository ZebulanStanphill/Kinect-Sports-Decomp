typedef struct Obj Obj;
typedef struct {
  void *s0, *s1, *s2;
  void (*f3)(Obj *);
  void *s4, *s5, *s6, *s7, *s8, *s9, *s10, *s11, *s12, *s13;
  void (*f14)(Obj *, int);
} ObjVt;
struct Obj { ObjVt *vt; };
extern void *fn_82A2A360(void);
extern void fn_82A28E60(void *mgr, int a, Obj *o);

int fn_82EE9F80(Obj *o)
{
  if (o != 0) {
    o->vt->f3(o);
    o->vt->f14(o, 0);
    fn_82A28E60(fn_82A2A360(), 0, o);
  }
  return 0;
}
