void fn_83014FE0(int *param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  *param_1 = param_2 + 4;
  uVar3 = (unsigned __int64)param_3 * 0x8421085 >> 0x20;
  param_1[3] = 0;
  uVar3 = ((param_3 - uVar3 & 0xffffffff) >> 1) + uVar3 >> 4;
  lVar4 = (unsigned __int64)param_3 - ((uVar3 & 0x7ffffff) * 0x20 - uVar3);
  param_1[1] = (int)lVar4;
  iVar2 = *(int *)((int)((lVar4 + 1U & 0xffffffff) << 2) + param_2);
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    return;
  }
  do {
    piVar1 = (int *)param_1[2];
    if (piVar1[1] == param_3) {
      return;
    }
    iVar2 = *piVar1;
    param_1[3] = (int)piVar1;
    param_1[2] = iVar2;
  } while (iVar2 != 0);
  return;
}

