extern void fn_82669EF8(int);
extern void fn_8265CA20(int);

int fn_82669EB0(int a, unsigned b)
{
  fn_82669EF8(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
