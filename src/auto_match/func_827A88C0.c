extern unsigned int lbl_8200571C;


unsigned __int64 fn_827A88C0(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  unsigned int uVar4;
  
  if ((unsigned int)param_2[5] < (unsigned int)param_2[1]) {
    piVar2 = *(int **)(param_2[5] * 4 + *param_2);
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      uVar4 = (unsigned int)*(unsigned short *)(piVar2 + 5);
    }
    else {
      uVar4 = piVar2[5];
    }
    if (uVar4 != 0) {
      if (iVar1 < 0) {
        uVar4 = (unsigned int)*(unsigned short *)((int)piVar2 + 0x16);
      }
      else {
        uVar4 = piVar2[6];
      }
      if (uVar4 != 0) {
        if (iVar1 < 0) {
          uVar4 = (unsigned int)*(unsigned short *)((int)piVar2 + 0x16);
        }
        else {
          uVar4 = piVar2[6];
        }
        fVar3 = ((float)param_2[9] - (float)param_2[7]) + lbl_8200571C;
        if (((float)((double)(__int64)piVar2[4] + param_1) <= fVar3) &&
           (fVar3 < (float)((double)(__int64)piVar2[4] + param_1) + (float)(__int64)(int)uVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

