typedef struct { char b[0x28]; int m28; } Sub_824E2550;
typedef struct {
  int p0; int m4; int m8; int mc; int m10;
  char pad[0x9cc - 0x14];
  Sub_824E2550 sub;
} Obj_824E2550;

void fn_824E2550(Obj_824E2550 *o)
{
  Sub_824E2550 *a;
  unsigned int u;
  int b;

  fn_824D4CC8();
  a = &o->sub;
  b = o->m10 + 0xa6c;
  u = fn_82897B18(b);
  fn_82897600(o, a, u);
  a->m28 = o->mc;
  fn_82898220(a, o, b, o->m4);
}
