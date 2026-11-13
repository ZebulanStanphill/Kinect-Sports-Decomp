int fn_8227C118(int param_1, int param_2)
{
  float fVar1;
  unsigned iVar2;
  float *pfVar3;
  unsigned uVar4;
  
  iVar2 = 0;
  pfVar3 = (float *)(param_1 + 0xa94);
  fVar1 = *(float *)(param_2 * 0xdc + param_1 + 0xa94);
  uVar4 = 0;
  do {
    if ((*(int *)(pfVar3 - 3) != 0) && (iVar2 = iVar2 + 1, param_2 != (int)uVar4)) {
      if (*(int *)(param_1 + 0xa64) == 2) {
        if (*pfVar3 <= fVar1) {
          return 0;
        }
      }
      else if (*pfVar3 >= fVar1) {
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 0x37;
  } while (uVar4 < 8);
  if (((iVar2 != 1) && (*(int *)(param_1 + 0xa6c) != 0)) && (*(int *)(param_1 + 0xa70) != 0)) {
    return 1;
  }
  return 0;
}
