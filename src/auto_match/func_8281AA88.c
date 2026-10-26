extern void fn_828192C8(void);
extern void fn_828233A8(void *a, int *out, void (*f)(void), void *b);

int fn_8281AA88(char *param_1, void *param_2)
{
  int r;

  fn_828233A8(param_1 + 0x88, &r, fn_828192C8, param_2);
  return *(int *)(r + 0x28);
}
