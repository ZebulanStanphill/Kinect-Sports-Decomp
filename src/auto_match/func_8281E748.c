extern void fn_8280F300(int, int, int, int);
extern void fn_8280E418(int, int);
int fn_8281E748(int a, int b, int c)
{
  fn_8280F300(a, b, c, a);
  fn_8280E418(a, a);
  return a;
}
