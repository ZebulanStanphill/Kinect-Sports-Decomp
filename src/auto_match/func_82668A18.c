extern void fn_82668A60(int);
extern void fn_8266BFC0(int);

int fn_82668A18(int a, unsigned b)
{
  fn_82668A60(a);
  if ((b & 1) != 0) {
    fn_8266BFC0(a);
  }
  return a;
}
