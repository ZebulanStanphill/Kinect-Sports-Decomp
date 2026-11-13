void fn_82D4B528(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 + 0xd) * 4;
  iVar2 = (param_3 + 0xd) * 4;
  *(unsigned int *)(iVar1 + param_1) = *(unsigned int *)(iVar1 + param_1) & ~(1 << (param_3 & 0x3f));
  *(unsigned int *)(iVar2 + param_1) = *(unsigned int *)(iVar2 + param_1) & ~(1 << (param_2 & 0x3f));
  return;
}

