typedef int (*code)();
extern unsigned int fn_828AEC98(int a);

unsigned int fn_8289D968(int *param_1, int *param_2)
{
  if (param_1 == param_2) {
    return 1;
  }
  return fn_828AEC98((*(code *)(*param_2 + 8))(param_2));
}
