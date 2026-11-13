unsigned __int64 fn_824A7540(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x14) + -1;
    if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0xa0 <= iVar3) {
      iVar3 = iVar3 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xa0;
    }
    iVar3 = iVar3 * 0xa0 + *(int *)(iVar1 + 0xc);
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x94) != 0)) {
    fVar2 = *(float *)(iVar1 + 0x1c) * *(float *)(iVar3 + 0x90);
    if ((fVar2 < *(float *)(iVar3 + 0x20) - *(float *)(iVar3 + 0x40)) &&
       (fVar2 < *(float *)(iVar3 + 0x80) - *(float *)(iVar3 + 0x40))) {
      return 1;
    }
  }
  return 0;
}

