typedef struct Obj { struct OVt *vt; } Obj;
struct OVt { void *f0, *f4, *f8, *fc; int (*f10)(Obj *); };
typedef struct { int a; Obj **b; int c; int d; int e; int f; int g; } Msg;
extern void fn_82D71478(void *, Msg *);

void fn_82D534D8(void *self, void *sub, int a, Obj **o, int e, int f, int g)
{
  Msg m;
  m.d = (*o)->vt->f10(*o);
  m.a = a;
  m.b = o;
  m.e = e;
  m.f = f;
  m.g = g;
  fn_82D71478(sub, &m);
}
