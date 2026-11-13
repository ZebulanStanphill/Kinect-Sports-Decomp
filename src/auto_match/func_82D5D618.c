typedef struct Obj { struct OVt *vt; } Obj;
struct OVt { void *f0, *f4, *f8, *fc; int (*f10)(Obj *); };
typedef struct { int a; Obj **b; int c; int d; int e; int f; int g; } Msg;
typedef struct { char pad[8]; int m8; char pad2[0x24]; char sub[0x54]; unsigned char m84; } Self;
extern void fn_82D71478(void *, Msg *);

void fn_82D5D618(Self *self, Obj **o, int a, int b, int c)
{
  Msg m;
  if (self->m84 == 0) {
    m.a = a;
    m.b = o;
    m.f = self->m8;
    m.e = b;
    m.g = c;
    m.d = (*m.b)->vt->f10(*m.b);
    fn_82D71478(self->sub, &m);
  }
}
