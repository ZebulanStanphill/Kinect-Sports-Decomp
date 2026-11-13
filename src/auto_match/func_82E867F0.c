extern int fn_82F0F9A0();


void fn_82E867F0(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1abc);
  uVar2 = *(unsigned int *)(param_1 + 0x1a90);
  *(unsigned int *)(param_1 + 0x1abc) = param_2;
  *(unsigned int *)(param_1 + 0x1a90) = param_3;
  fn_82F0F9A0(param_1,7);
  *(unsigned int *)(param_1 + 0x1abc) = uVar1;
  *(unsigned int *)(param_1 + 0x1a90) = uVar2;
  return;
}

