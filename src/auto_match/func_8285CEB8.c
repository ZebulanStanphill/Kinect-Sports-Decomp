extern int fn_82861F18();
extern int fn_82861820();
extern int fn_82861F88();
extern int fn_82861FB0();

void fn_8285CEB8(int param_1, int *param_2)

{
  int t[4];

  if (fn_82861FB0() != 0) {
    fn_82861F18(param_1, param_2, param_2 + 1, param_2 + 2, param_2 + 3, param_2 + 4, param_2 + 5);
  }
  else {
    fn_82861F88(param_1, &t[0], &t[1], &t[2], &t[3]);
    fn_82861820(t, param_2);
  }
}
