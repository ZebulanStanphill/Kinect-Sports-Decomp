typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorSubtractFloatingPoint();


void fn_82DD3730(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  float *pfVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  pfVar1 = (float *)(in_r0 + param_4 & 0xfffffff0);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  pfVar1 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar1 = fVar2;
  pfVar1[1] = fVar3;
  pfVar1[2] = fVar4;
  pfVar1[3] = fVar5;
  fVar2 = fVar2 * in_register_000100c0 + fVar3 * in_register_000100c4 + fVar4 * in_register_000100c8
  ;
  pfVar1 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar1 = fVar2;
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar2;
  pfVar1[3] = fVar2;
  return;
}

