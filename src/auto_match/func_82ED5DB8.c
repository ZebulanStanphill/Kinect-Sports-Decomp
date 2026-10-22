typedef int (*code)();
extern int fn_82F07E00();

void fn_82ED5DB8(int param_1, int *param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, char flags, int n, int param_11)
{
  if ((flags & 2) != 0) {
    fn_82F07E00(param_1, param_5, param_6, param_4, *(int *)(param_1 + 0x2034), param_11);
    (*(code *)(param_1 + 0x1f9c))(param_3, 8, param_4);
    (*(code *)(param_1 + 0x1fb8))(param_1, param_2, param_3, n, 8);
  }
  if ((flags & 1) != 0) {
    fn_82F07E00(param_1, param_7, param_8, param_4, *(int *)(param_1 + 0x2034), param_11);
    (*(code *)(param_1 + 0x1f9c))(param_3, 8, param_4);
    (*(code *)(param_1 + 0x1fb8))(param_1, param_2 + n, param_3, n, 8);
  }
}
