extern void fn_82865170();
extern int *fn_82866400();
extern void fn_82FE6ED0(int);

int fn_82871318(int param_1, int param_2)
{
  int *p;

  fn_82FE6ED0(param_2);
  fn_82865170();
  p = fn_82866400() + 6;
  *p = *p - 1;
  return 0x202a0000;
}
