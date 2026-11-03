extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern unsigned fn_82F6B6B8(int, int, int);

int fn_82F6B818(int *param_1, int param_2, int param_3)
{
  unsigned r;
  int ret;
  if (param_1 == 0) {
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    ret = 0x16;
  } else {
    r = fn_82F6B6B8(param_2, param_3, 0x80);
    *param_1 = r;
    if (r != 0) {
      ret = 0;
    } else {
      ret = *_errno();
    }
  }
  return ret;
}
