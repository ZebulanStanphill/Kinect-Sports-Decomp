typedef int (*code)(void *);
extern void fn_828AAF70(int a, int b);

void fn_8224C2B8(int *param_1, int param_2)
{
  fn_828AAF70((*(code *)(*param_1 + 8))(param_1) + 0xf0, param_2);
}
