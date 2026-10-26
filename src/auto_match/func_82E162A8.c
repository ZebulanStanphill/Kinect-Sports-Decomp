typedef struct Obj Obj;
extern void fn_82CE4040(Obj *p);
extern void fn_82CE4118(Obj *p);
typedef struct { char pad[0x2c]; Obj *p; } S;

void fn_82E162A8(S *s, Obj *p)
{
  Obj **d = &s->p;
  if (p) fn_82CE4040(p);
  if (*d) fn_82CE4118(*d);
  *d = p;
}
