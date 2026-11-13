extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CA460;


void fn_822B70F0(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  double dVar6;
  
  *(float *)((param_4 + 0x4c) * 4 + param_2) = (float)param_1;
  if ((*(int *)(param_2 + 300) == 0) || (param_1 < (double)lbl_821917D4)) {
    uVar4 = 1;
    if (param_1 < (double)lbl_821CA460) goto LAB_822b7160;
  }
  else if (param_1 < (double)lbl_821CA460) {
    *(unsigned int *)((param_4 + 0x49) * 4 + param_2) = 1;
    return;
  }
  uVar4 = 0;
LAB_822b7160:
  *(unsigned int *)((param_4 + 0x49) * 4 + param_2) = uVar4;
  fVar2 = lbl_821CA460;
  iVar5 = *(int *)(param_2 + 0x14) + 0x1d0;
  dVar6 = (double)lbl_821CA460;
  *(float *)(param_4 * 0x10 + iVar5 + 0x2c) = (float)param_1;
  *(float *)((param_4 + 0x10) * 4 + iVar5) = fVar2;
  iVar1 = (param_4 + 4) * 4;
  uVar3 = *(unsigned int *)(iVar1 + iVar5);
  if (dVar6 <= param_1) {
    uVar3 = uVar3 & 0xffffffdf;
  }
  else {
    uVar3 = uVar3 | 0x20;
  }
  *(unsigned int *)(iVar1 + iVar5) = uVar3;
  return;
}

