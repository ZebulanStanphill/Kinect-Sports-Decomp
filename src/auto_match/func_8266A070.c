extern void fn_8266A0B8(int);
extern void fn_8265CA20(int);

int fn_8266A070(int a, unsigned b)
{
  fn_8266A0B8(a);
  if ((b & 1) != 0) {
    fn_8265CA20(a);
  }
  return a;
}
