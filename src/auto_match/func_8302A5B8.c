extern unsigned int iStack_c;


double fn_8302A5B8(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  unsigned __int64 uVar4;
  int iStack_c;
  
  fVar2 = (float)(param_1 - (double)*(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x18);
  uVar4 = (unsigned __int64)fVar2;
  iStack_c = (int)uVar4;
  pfVar3 = (float *)(iStack_c * 4 + *(int *)(param_2 + 4));
  fVar1 = *pfVar3;
  return (double)((fVar2 - (float)(uVar4 & 0xffffffff)) * (pfVar3[1] - fVar1) + fVar1);
}

