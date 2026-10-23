typedef struct { void *p; int x; } Ref;
typedef struct {
  char pad0[0x38];
  char a[0x18];
  char b[0x1c];
  Ref refs[9];
} Obj;
extern void fn_822315A0(void *p);
extern void fn_82359C18(void *p);
extern void fn_828E32A0(void *p);

void fn_82233570(Obj *o)
{
  if (o->refs[8].p != 0) fn_822315A0(o->refs[8].p);
  if (o->refs[7].p != 0) fn_822315A0(o->refs[7].p);
  if (o->refs[6].p != 0) fn_822315A0(o->refs[6].p);
  if (o->refs[5].p != 0) fn_822315A0(o->refs[5].p);
  if (o->refs[4].p != 0) fn_822315A0(o->refs[4].p);
  if (o->refs[3].p != 0) fn_822315A0(o->refs[3].p);
  if (o->refs[2].p != 0) fn_822315A0(o->refs[2].p);
  if (o->refs[1].p != 0) fn_822315A0(o->refs[1].p);
  if (o->refs[0].p != 0) fn_822315A0(o->refs[0].p);
  fn_82359C18(o->b);
  fn_82359C18(o->a);
  fn_828E32A0(o);
}
