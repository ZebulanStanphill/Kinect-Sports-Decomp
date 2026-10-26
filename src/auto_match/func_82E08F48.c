extern void fn_82CE4118(void *p);
extern void fn_82CED5B8(int p);

void fn_82E08F48(int param_1)
{
  if (*(void **)(param_1 + 8) != 0) {
    fn_82CE4118(*(void **)(param_1 + 8));
  }
  *(int *)(param_1 + 8) = 0;
  fn_82CED5B8(param_1 + 4);
  fn_82CED5B8(param_1);
}
