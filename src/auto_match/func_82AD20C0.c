extern int fn_82ABE5F8();


void fn_82AD20C0(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  
  *(unsigned int *)(param_2 + 0x10) = 0;
  for (iVar1 = *param_1; iVar1 != param_2; iVar1 = *(int *)(iVar1 + 4)) {
    param_1 = (int *)(iVar1 + 4);
  }
  *param_1 = *(int *)(iVar1 + 4);
  puVar2 = (unsigned int *)(*(int *)(param_2 + 0xc) + 4);
  for (iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4); iVar1 != param_2; iVar1 = *(int *)(iVar1 + 8))
  {
    puVar2 = (unsigned int *)(iVar1 + 8);
  }
  *puVar2 = *(unsigned int *)(iVar1 + 8);
  fn_82ABE5F8(param_3,param_2,0x14,0x1a);
  return;
}

