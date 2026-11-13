void fn_82458458(double param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned int uVar3;
  
  pfVar2 = *(float **)(param_3 + 0x18);
  uVar3 = (*(int *)(param_3 + 0x1c) - (int)pfVar2) / 0x14;
  while (uVar1 = uVar3, 0 < (int)uVar1) {
    uVar3 = ((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0);
    if (pfVar2[uVar3 * 5] < (float)((double)*(float *)(param_3 + 4) - param_1)) {
      pfVar2 = pfVar2 + uVar3 * 5 + 5;
      uVar3 = (uVar1 - uVar3) - 1;
    }
  }
  *param_2 = pfVar2;
  return;
}

