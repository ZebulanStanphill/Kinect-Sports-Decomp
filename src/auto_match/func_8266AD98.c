extern void fn_8265D828(int);
extern void fn_8265CA20(int);

int fn_8266AD98(int a, unsigned b)
{
  fn_8265D828(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
