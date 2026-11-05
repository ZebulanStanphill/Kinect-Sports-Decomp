typedef struct Arg_82FFF628 { int a; int b; unsigned char c; int d; float x; } Arg_82FFF628;
typedef struct VT_82FFF628 { int pad[13]; void (*f34)(struct Obj_82FFF628 *, Arg_82FFF628 *); } VT_82FFF628;
typedef struct Obj_82FFF628 { VT_82FFF628 *vt; } Obj_82FFF628;

void fn_82FFF628(Obj_82FFF628 *self, int a, float x, int b, int d)
{
  Arg_82FFF628 s;
  s.a = a;
  s.b = b;
  s.c = 0;
  s.d = d;
  s.x = x;
  self->vt->f34(self, &s);
}
