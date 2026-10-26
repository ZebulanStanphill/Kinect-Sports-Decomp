typedef struct Obj Obj;
extern void fn_8267C4C8(Obj *p);
extern void fn_8267C4F0(Obj *p);
typedef struct { char pad[0xc]; Obj *p; } S;

void fn_82722928(S *s, Obj *p)
{
  Obj **d = &s->p;
  if (p) fn_8267C4C8(p);
  if (*d) fn_8267C4F0(*d);
  *d = p;
}
