extern int fn_8267B7A8();
extern int fn_8267B7E0();


void fn_826854A0(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x14) = param_1;
  fn_8267B7A8(*(unsigned int *)(param_1 + 8),param_1 + 0x10);
  fn_8267B7E0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
  return;
}

