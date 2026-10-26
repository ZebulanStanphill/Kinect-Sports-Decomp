typedef void (*code)(void *);
extern void fn_82E50CB8(void *);
extern void fn_82E50F10(void *);

int fn_82E2D6A8(int param_1)
{
  fn_82E50CB8((void *)(param_1 + 0x54));
  if (*(int **)(param_1 + 0x1d8) != 0) {
    (*(code *)(**(int **)(param_1 + 0x1d8) + 8))(*(int **)(param_1 + 0x1d8));
    *(int *)(param_1 + 0x1d8) = 0;
  }
  fn_82E50F10((void *)(param_1 + 0x54));
  return 0;
}
