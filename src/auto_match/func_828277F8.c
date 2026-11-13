extern int fn_82822300();


void fn_828277F8(int param_1,int param_2)

{
  int iVar1;
  
  fn_82822300(param_2 + 0x2fc,param_1);
  iVar1 = *(int *)(param_2 + 0x28) + 1;
  *(int *)(param_2 + 0x28) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_2 + 0x308) = param_1;
  return;
}

