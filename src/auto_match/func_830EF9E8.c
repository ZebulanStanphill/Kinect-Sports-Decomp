void fn_830EF9E8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar4 = *param_1;
  uVar3 = param_3 & 0xffff;
  uVar1 = *param_2;
  iVar2 = (int)param_3 >> 0x10;
  uVar5 = uVar1 + iVar2;
  if ((int)(uVar4 + uVar3) < -0x3b) {
    uVar4 = ((uVar4 & 3) - uVar3) - 0x38;
  }
  else {
    if ((int)(uVar4 + uVar3) <= (int)(param_4 & 0xffff)) goto LAB_830efa44;
    uVar4 = (((uVar4 & 3) - uVar3) + (param_4 & 0xffff)) - 3;
  }
  *param_1 = uVar4;
LAB_830efa44:
  if (-0x3c < (int)uVar5) {
    if ((int)param_4 >> 0x10 < (int)uVar5) {
      iVar2 = ((uVar1 & 3) - iVar2) + ((int)param_4 >> 0x10);
      uVar4 = iVar2 + 1;
      if ((uVar5 & 4) == 0) {
        uVar4 = iVar2 - 3;
      }
      *param_2 = uVar4;
    }
    return;
  }
  iVar2 = (uVar1 & 3) - iVar2;
  if ((uVar5 & 4) != 0) {
    *param_2 = iVar2 - 0x3c;
    return;
  }
  *param_2 = iVar2 - 0x38;
  return;
}

