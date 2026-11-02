extern void fn_8266A308(int);
extern void fn_8266BFC0(int);

int fn_8266A2C0(int a, unsigned b)
{
  fn_8266A308(a);
  if ((b & 1) != 0) {
    fn_8266BFC0(a);
  }
  return a;
}
