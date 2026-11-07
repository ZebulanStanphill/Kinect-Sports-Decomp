extern int fn_827F3C20(int p);
extern int fn_827F3C28(int h);
extern int fn_827F3C48(int p, int idx);
extern float fn_827F4868(int p);
extern void fn_827FD988(int a, int b, int c, float f, int e);

void fn_827F4CE0(int p)
{
  int a;
  int b;
  int c;
  float f;

  a = fn_827F3C28(fn_827F3C48(p, 0));
  b = fn_827F3C28(fn_827F3C48(p, 1));
  c = fn_827F3C20(p);
  f = fn_827F4868(p);
  fn_827FD988(a, b, c, f, 0);
}
