extern char *fn_82F6EBC8(char *dst, const char *src, unsigned int n);
extern void fn_82A29DE8(char *buf, int a, int b, int c, int d, int e, int f);

void fn_82F89A88(const char *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
  char buf[0x104];

  buf[0] = 0;
  fn_82F6EBC8(buf, param_1, 0x104);
  buf[0x103] = 0;
  fn_82A29DE8(buf, param_2, param_3, param_4, param_5, param_6, param_7);
}
