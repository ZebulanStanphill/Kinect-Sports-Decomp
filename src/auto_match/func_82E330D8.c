extern unsigned int lbl_8208DD70;


void fn_82E330D8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = lbl_8208DD70;
  iVar1 = *param_1;
  iVar6 = 0;
  if (*(int *)(iVar1 + 0x100) < 1) {
    return;
  }
  pfVar5 = (float *)(param_2 + -4);
  do {
    iVar6 = iVar6 + 1;
    iVar2 = *(int *)(iVar1 + 0x21c);
    iVar4 = *(int *)(iVar1 + 0x220) * 0x19660d + 0x3c6ef35f;
    *(int *)(iVar1 + 0x220) = iVar4;
    iVar4 = (iVar4 >> 4) + (iVar4 >> 2);
    *(int *)(iVar1 + 0x21c) = iVar4;
    pfVar5 = pfVar5 + 1;
    *pfVar5 = (float)(__int64)(iVar4 - iVar2) * *(float *)(iVar1 + 0x124) * fVar3;
  } while (iVar6 < *(int *)(iVar1 + 0x100));
  return;
}

