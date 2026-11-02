extern void fn_82662C98(int);
extern void fn_8265CA20(int);

int fn_82662EC0(int a, unsigned b)
{
  fn_82662C98(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
