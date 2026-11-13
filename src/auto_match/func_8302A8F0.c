extern unsigned int iStack_c;


double fn_8302A8F0(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  unsigned __int64 uVar4;
  int iStack_c;
  
  pfVar2 = *(float **)(param_2 + 4);
  if ((double)*(float *)(param_2 + 0xc) <= param_1) {
    return (double)pfVar2[*(int *)(param_2 + 0x14) + -1];
  }
  if (param_1 <= (double)*(float *)(param_2 + 0x10)) {
    return (double)*pfVar2;
  }
  fVar3 = (float)(param_1 - (double)*(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x18);
  uVar4 = (unsigned __int64)fVar3;
  iStack_c = (int)uVar4;
  fVar1 = pfVar2[iStack_c];
  return (double)((fVar3 - (float)(uVar4 & 0xffffffff)) * ((pfVar2 + iStack_c)[1] - fVar1) + fVar1);
}

