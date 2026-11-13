void fn_82917810(int param_1,int param_2,short *param_3,int param_4,int *param_5,int *param_6)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  
  if (param_3[5] == 0) {
    if (*(short *)(param_2 + 4) == 0) {
      uVar4 = (unsigned int)(unsigned short)param_3[3];
      uVar1 = param_3[2];
    }
    else {
      if (*param_3 == 3) {
        uVar2 = param_3[2];
        uVar1 = param_3[3];
      }
      else {
        uVar2 = param_3[3];
        uVar1 = param_3[2];
      }
      uVar4 = (int)(uVar2 + 3) >> 2;
    }
    *param_5 = uVar4 * uVar1 * param_4 + *param_5;
    *param_6 = (unsigned int)(unsigned short)param_3[3] * (unsigned int)(unsigned short)param_3[2] * param_4 + *param_6;
  }
  else {
    uVar4 = 0;
    if (param_3[5] != 0) {
      piVar5 = (int *)(*(int *)(param_3 + 6) + *(int *)(param_1 + 8) + 4);
      do {
        if (*piVar5 != 0) {
          iVar3 = *piVar5 + *(int *)(param_1 + 8);
          fn_82917810(param_1,param_2,iVar3,
                        (__int64)(int)(unsigned int)*(unsigned short *)(iVar3 + 8) * (__int64)param_4,param_5,
                        param_6);
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 < (unsigned short)param_3[5]);
    }
  }
  return;
}

