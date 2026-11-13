extern int fn_82F66A80();


unsigned __int64 fn_8278FF48(int *param_1,short *param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = 1;
  if (*param_2 == 0x2d) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
    if (*param_2 != 0x2b) goto LAB_8278ff9c;
  }
  iVar2 = iVar1;
  param_3 = param_3 - 1;
  param_2 = param_2 + 1;
LAB_8278ff9c:
  uVar5 = 0;
  if (param_3 != 0) {
    puVar4 = (unsigned short *)(param_2 + -1);
    iVar3 = 0;
    do {
      iVar1 = fn_82F66A80(puVar4[1]);
      if (iVar1 == 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 * 10 + (unsigned int)*puVar4 + -0x30;
    } while (uVar5 < param_3);
  }
  *param_1 = iVar2 * iVar3;
  return 1;
}

