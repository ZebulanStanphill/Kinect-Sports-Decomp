extern void fn_8265FB10(int);
extern void fn_8265CA20(int);

int fn_8265EF98(int a, unsigned b)
{
  fn_8265FB10(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
