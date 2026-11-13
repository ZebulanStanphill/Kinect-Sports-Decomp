int fn_82692FB0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  return (*(unsigned int *)(iVar1 + 0x48) -
         (unsigned __int64)(unsigned int)(*(int *)(iVar1 + 0x60) << (*(unsigned int *)(iVar1 + 0x4c)))) +
         *(unsigned int *)(param_1 + 0x18);
}

