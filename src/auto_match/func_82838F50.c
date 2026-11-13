void fn_82838F50(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  iVar4 = param_2 * 0x10 + param_1;
  uVar3 = param_3[3];
  *(unsigned int *)((param_2 + 0x178) * 0x10 + param_1) = *param_3;
  *(unsigned int *)(iVar4 + 0x1788) = uVar2;
  *(unsigned int *)(iVar4 + 0x178c) = uVar3;
  *(unsigned int *)(iVar4 + 0x1784) = uVar1;
  *(unsigned __int64 *)(param_1 + 8) =
       0x8000000000000000U >> ((unsigned __int64)(param_2 >> 2) & 0x7f) | *(unsigned __int64 *)(param_1 + 8);
  return;
}

