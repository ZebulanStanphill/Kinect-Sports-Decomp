extern int fn_82D04358(int *s, const char *a);
extern void fn_82D046D0(int *s, int n);
extern void fn_82D047D8(int *s, int a, int b, int c);
extern void fn_82D04AB8(int *s, int src);
extern void fn_82D054C0(int *s, const char *a, const char *b, int c);

int fn_82CF9CC0(int param_1, int *param_2)
{
  fn_82D04AB8(param_2, param_1);
  fn_82D047D8(param_2, 0x5c, 0x2f, 1);
  fn_82D054C0(param_2, "/./", "/", 1);
  if (fn_82D04358(param_2, "./") != 0) {
    fn_82D046D0(param_2, 2);
  }
  return *param_2;
}
