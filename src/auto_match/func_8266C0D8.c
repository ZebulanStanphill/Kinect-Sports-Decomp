extern void fn_8266C120(int);
extern void fn_8266BFC0(int);

int fn_8266C0D8(int a, unsigned b)
{
  fn_8266C120(a);
  if ((b & 1) != 0) {
    fn_8266BFC0(a);
  }
  return a;
}
