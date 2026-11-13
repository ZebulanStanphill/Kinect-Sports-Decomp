void fn_82858108(unsigned __int64 *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(unsigned int *)(param_1 + (param_2 + 0x78) * 2) = *param_3;
  *(unsigned int *)(param_1 + param_2 * 2 + 0xf1) = uVar2;
  *(unsigned int *)((int)param_1 + param_2 * 0x10 + 0x78c) = uVar3;
  *(unsigned int *)((int)param_1 + param_2 * 0x10 + 0x784) = uVar1;
  *param_1 = 0x8000000000000000U >> ((unsigned __int64)(param_2 >> 2) & 0x7f) | *param_1;
  return;
}

