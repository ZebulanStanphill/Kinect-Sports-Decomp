extern unsigned char fn_82B25E80(int a, unsigned int b, unsigned int c, unsigned char flag);
extern void fn_82AD2B40(int a, unsigned int b);

unsigned char fn_82AD5A48(int a, unsigned int b, unsigned int c)
{
  if (fn_82B25E80(a, b, c, 0) == 0) {
    return 0;
  }
  fn_82AD2B40(a, b);
  return 1;
}
