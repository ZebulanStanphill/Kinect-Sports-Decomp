extern void fn_822315A0(void *);
typedef struct Obj_82396DA8 { int f0; unsigned int f4; char pad[0x18]; unsigned int f20; } Obj;
typedef struct SP_82396DA8 { Obj *first; void *second; } SP;
extern void fn_82359DB8(SP *, void *, int);
extern void fn_82522588(SP *, SP *);
typedef struct Self_82396DA8 { char pad[0x40]; char f40[0x14]; int f54; } Self;
int fn_82396DA8(Self *s)
{
  SP a;
  SP b;
  fn_82359DB8(&a, s->f40, s->f54);
  if (a.first != 0 && a.first->f4 == 5) {
    fn_82522588(&b, &a);
    if (b.first->f20 == 2) {
      if (b.second != 0) fn_822315A0(b.second);
      if (a.second != 0) fn_822315A0(a.second);
      return 1;
    }
    if (b.second != 0) fn_822315A0(b.second);
  }
  if (a.second != 0) fn_822315A0(a.second);
  return 0;
}
