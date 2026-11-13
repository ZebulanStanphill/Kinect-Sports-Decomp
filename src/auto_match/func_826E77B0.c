extern int fn_8267C4F0();
extern int fn_8268BEA8();


void fn_826E77B0(int param_1)

{
  fn_8268BEA8(param_1 + 0x18);
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 0x10));
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

