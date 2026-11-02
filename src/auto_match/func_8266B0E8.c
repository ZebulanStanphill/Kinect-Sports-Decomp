extern void fn_8266B130(int);
extern void fn_8265CA20(int);

int fn_8266B0E8(int a, unsigned b)
{
  fn_8266B130(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
