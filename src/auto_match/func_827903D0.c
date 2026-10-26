typedef struct Obj Obj;
extern void fn_8267C4C8(Obj *p);
extern void fn_8267C4F0(Obj *p);
typedef struct { int a, b, c; Obj *p; } S;
S *fn_827903D0(S *s, int a, int b, int c, Obj *p)
{
  Obj **d;
  s->a = a;
  s->b = b;
  s->c = c;
  d = &s->p;
  if (p) fn_8267C4C8(p);
  if (*d) fn_8267C4F0(*d);
  *d = p;
  return s;
}
