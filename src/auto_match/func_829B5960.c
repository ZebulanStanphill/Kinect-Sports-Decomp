typedef void (*code)();
extern void fn_829B5830();

void fn_829B5960(int *param_1)
{
  int *puVar1;

  puVar1 = (int *)param_1[0x6e];
  *puVar1 = (int)fn_829B5830;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (*(code *)(*param_1 + 0x10))(param_1);
  (*(code *)param_1[0x6f])(param_1);
  param_1[0x29] = 0;
}
