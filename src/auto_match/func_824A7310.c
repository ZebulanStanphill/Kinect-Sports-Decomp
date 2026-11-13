extern int fn_824A74A0();
extern int fn_824A7540();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824A7310(int param_1)

{
  float fVar1;
  int iVar3;
  unsigned __int64 uVar2;
  float *pfVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar5 + 0x14) == 0) {
    pfVar4 = (float *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x14) + -1;
    if ((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 0xc)) / 0xa0 <= iVar3) {
      iVar3 = iVar3 - (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0xa0;
    }
    pfVar4 = (float *)(iVar3 * 0xa0 + *(int *)(iVar5 + 0xc));
  }
  if (((pfVar4 == (float *)0x0) || (iVar3 = fn_824A74A0(param_1), iVar3 == 0)) ||
     (iVar3 = fn_824A7540(param_1), iVar3 != 0)) {
    uVar2 = 0;
    fVar1 = ltcg_pool_0_0f;
  }
  else {
    uVar2 = 1;
    fVar1 = *pfVar4 + *(float *)(iVar5 + 0x24);
  }
  *(float *)(iVar5 + 0x24) = fVar1;
  return uVar2;
}

