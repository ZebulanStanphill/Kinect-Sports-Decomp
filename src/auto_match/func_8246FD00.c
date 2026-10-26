extern void fn_822848B8(void *p);

void fn_8246FD00(int param_1)
{
  if (*(void **)(param_1 + 0x370) != 0) {
    fn_822848B8(*(void **)(param_1 + 0x370));
    *(int *)(param_1 + 0x370) = 0;
  }
  *(int *)(param_1 + 0x45c) = 0;
  *(int *)(param_1 + 0x460) = 0;
}
