typedef struct { char b[0x28]; int m28; } Sub_822E8118;
typedef struct {
  int p0; int m4; int m8; int mc; int m10;
  char pad[0x1ec - 0x14];
  Sub_822E8118 sub;
} Obj_822E8118;

void fn_822E8118(Obj_822E8118 *o)
{
  Sub_822E8118 *a;
  unsigned int u;
  int b;

  fn_822CABC8();
  a = &o->sub;
  b = o->m10 + 0x20c;
  u = fn_82897B18(b);
  fn_82897600(o, a, u);
  a->m28 = o->mc;
  fn_82898220(a, o, b, o->m4);
}
