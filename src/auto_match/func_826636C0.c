extern void fn_82663708(int);
extern void fn_8266BFC0(int);

int fn_826636C0(int a, unsigned b)
{
  fn_82663708(a);
  if ((b & 1) != 0) {
    fn_8266BFC0(a);
  }
  return a;
}
