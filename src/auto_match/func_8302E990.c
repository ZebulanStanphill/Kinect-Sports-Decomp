void fn_8302E990(int *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  *param_1 = param_2;
  param_1[3] = 0;
  uVar3 = (unsigned __int64)param_3 * 0x8421085 >> 0x20;
  uVar3 = ((param_3 - uVar3 & 0xffffffff) >> 1) + uVar3 >> 4;
  uVar3 = (unsigned __int64)param_3 - ((uVar3 & 0x7ffffff) * 0x20 - uVar3);
  param_1[1] = (int)uVar3;
  iVar2 = *(int *)((int)((uVar3 & 0xffffffff) << 2) + param_2);
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    return;
  }
  do {
    iVar2 = param_1[2];
    if (*(unsigned int *)(iVar2 + 4) == param_3) {
      return;
    }
    iVar1 = *(int *)(iVar2 + 8);
    param_1[3] = iVar2;
    param_1[2] = iVar1;
  } while (iVar1 != 0);
  return;
}

