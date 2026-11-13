extern int fn_82F00330();
extern int fn_82F003B0();


void fn_82F00430(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1e60);
  uVar2 = *(unsigned int *)(param_1 + 0x300);
  *(unsigned int *)(param_1 + 0x300) = uVar1;
  *(unsigned int *)(param_1 + 0x1e60) = uVar2;
  fn_82F00330(param_1,uVar1,param_1);
  fn_82F003B0();
  return;
}

