extern int fn_8265CA20();
extern int fn_82A1E658();


void fn_828D0EF0(int param_1)

{
  if (*(char *)(param_1 + 0x3c) != '\0') {
    fn_8265CA20(*(unsigned int *)(param_1 + 0x18));
    *(unsigned int *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x38) != -1) {
      fn_82A1E658(*(int *)(param_1 + 0x38));
      *(unsigned int *)(param_1 + 0x38) = 0xffffffff;
    }
  }
  return;
}

