extern void fn_82669FD8(int);
extern void fn_8265CA20(int);

int fn_82669F90(int a, unsigned b)
{
  fn_82669FD8(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
