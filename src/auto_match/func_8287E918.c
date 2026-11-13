extern int fn_8265CA20();
extern int fn_8287D8B8();


void fn_8287E918(int param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xd0) = 0;
  *(unsigned int *)(param_1 + 0xd4) = 0;
  fn_8287D8B8(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  return;
}

