extern int fn_82CECDD8();


double fn_82D9F750(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  float *pfVar4;
  unsigned int uVar5;
  int iVar6;
  
  uVar3 = fn_82CECDD8();
  uVar5 = *(int *)(param_2 + 0x24) - 1;
  if ((int)uVar3 < (int)uVar5) {
    uVar5 = 0xffffffffU - ((int)uVar3 >> 0x1f) & uVar3;
    iVar6 = uVar5 * 4;
    pfVar4 = (float *)(*(int *)(param_2 + 0x2c) + iVar6);
    fVar1 = pfVar4[1];
    fVar2 = *pfVar4;
  }
  else {
    iVar6 = uVar5 * 4;
    pfVar4 = (float *)(*(int *)(param_2 + 0x2c) + iVar6);
    fVar1 = *pfVar4;
    fVar2 = pfVar4[-1];
  }
  return (double)((float)(param_1 - (double)(__int64)(int)uVar5) * (fVar1 - fVar2) +
                 *(float *)(*(int *)(param_2 + 0x2c) + iVar6));
}

