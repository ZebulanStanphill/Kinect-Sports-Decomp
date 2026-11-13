typedef unsigned char bool;
extern unsigned int lbl_8200571C;


unsigned __int64 fn_827A87F0(double param_1,int *param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_3 * 4 + *param_2);
  if (param_3 == param_2[5]) {
    bVar3 = ((float)param_2[9] - (float)param_2[7]) + lbl_8200571C <
            (float)((double)(__int64)piVar1[4] + param_1);
  }
  else {
    if (param_3 <= (unsigned int)param_2[5]) {
      return 0;
    }
    if (*piVar1 < 0) {
      uVar2 = (unsigned int)*(unsigned short *)((int)piVar1 + 0x16);
    }
    else {
      uVar2 = piVar1[6];
    }
    bVar3 = ((float)param_2[9] - (float)param_2[7]) + lbl_8200571C <
            (float)((double)(__int64)(int)(uVar2 + piVar1[4]) + param_1);
  }
  if (bVar3) {
    return 0;
  }
  return 1;
}

