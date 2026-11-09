extern int fn_82CFBBF0(int, int);
unsigned char *fn_82D04500(unsigned char *result, int *param_2, int param_3)
{
  int h = *param_2;
  *result = fn_82CFBBF0(h, param_3) < 0;
  return result;
}
