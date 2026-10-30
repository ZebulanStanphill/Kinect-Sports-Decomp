typedef void (*code)(void *);
extern void fn_828B27A8(void *a, int b, int *c);

void fn_828B4640(int *param_1, int param_2)
{
  fn_828B27A8(param_1 + 8, param_1[8], &param_2);
  (*(code *)(*param_1 + 0x18))(param_1);
}
