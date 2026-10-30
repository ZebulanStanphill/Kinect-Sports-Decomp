extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern unsigned int *fn_82279C58();
extern int fn_8227BA18();
extern int fn_82672C20();

typedef struct { int ptr; unsigned int rep; int pad[2]; int a; int b; int c; } Frame;

void fn_822A3370(int param_1)
{
  Frame f;
  unsigned int *p;
  fn_8227BA18();
  f.a = 0;
  f.b = 0;
  fn_82273CD8(&f.a, 5);
  f.c = param_1 + 0x1188;
  p = fn_82279C58(&f, param_1);
  fn_82672C20(*p, "_root.mainCtrl.setVerdict", &f.a, 1);
  if (f.rep != 0) {
    fn_822315A0(f.rep);
  }
  fn_82273C88(&f.a);
}
