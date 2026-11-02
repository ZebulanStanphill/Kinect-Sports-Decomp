extern void fn_82664018(int);
extern void fn_8265CA20(int);

int fn_82663FD0(int a, unsigned b)
{
  fn_82664018(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
