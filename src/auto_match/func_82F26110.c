int fn_82F26110(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *param_3;
  iVar4 = ((int)*param_2 >> 2) + param_4 * 0x10;
  iVar2 = 0;
  iVar3 = ((int)uVar1 >> 2) + param_5 * 0x10;
  if (iVar4 < -0x10) {
    iVar5 = -0x10;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2d0) << 4;
    if (iVar4 <= iVar5) goto LAB_82f26168;
  }
  iVar4 = iVar5;
  iVar2 = 1;
LAB_82f26168:
  if (iVar3 < -0x10) {
    iVar2 = 1;
    iVar3 = -0x10;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x2d4) << 4;
    if (iVar5 < iVar3) {
      iVar2 = 1;
      iVar3 = iVar5;
    }
    else if (iVar2 == 0) {
      return 0;
    }
  }
  *param_2 = (iVar4 + (param_4 & 0xfffffff) * -0x10) * 4 + (*param_2 & 3);
  *param_3 = (iVar3 + (param_5 & 0xfffffff) * -0x10) * 4 + (uVar1 & 3);
  return iVar2;
}

