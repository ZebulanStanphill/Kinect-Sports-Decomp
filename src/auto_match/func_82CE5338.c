typedef void (*vfn)(int *, unsigned int, int);

void fn_82CE5338(int *param_1, unsigned int param_2)
{
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_2 - 0x10) = 0;
  (*(vfn *)(*param_1 + 8))(param_1, param_2 - 0x10, *(int *)(param_2 - 0xc) + 0x10);
}
