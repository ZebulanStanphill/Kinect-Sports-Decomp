extern int fn_82AF49A8(int, unsigned int);
extern int fn_82B168F8(unsigned int, unsigned int);

void fn_82AF4A00(unsigned int *param_1, int param_2)
{
  int r = fn_82B168F8(param_1[3], (*param_1 >> 5 & 0xff) >> (param_2 * 2) & 3);
  fn_82AF49A8(r, *param_1 & 0x1f);
}
