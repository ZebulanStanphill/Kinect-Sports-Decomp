extern int fn_82E44EC0(int a, const char *s, int len);
extern int fn_82F64CE0(const char *s);

int fn_82E45160(int param_1, int param_2, const char *param_3, int param_4)
{
  int result;

  if (param_3 != 0) {
    if (param_4 == -1) {
      param_4 = fn_82F64CE0(param_3);
    }
    result = fn_82E44EC0(param_1, param_3, param_4);
  }
  else {
    result = 0;
  }
  return result;
}
