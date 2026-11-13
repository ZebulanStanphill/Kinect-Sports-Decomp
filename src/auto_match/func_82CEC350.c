typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_10;
extern V16 vectorSubtractFloatingPoint();


void fn_82CEC350(int param_1)

{
  float fVar1;
  float *pfVar2;
  int in_r0;
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  unsigned char auStack_10 [16];
  
  vectorSubtractFloatingPoint(in_vs39,in_vs40);
  fVar1 = in_register_00010060 * 0.0 +
          *(float *)(((unsigned int)(auStack_10 + in_r0) & 0xfffffff0) + 4) * in_register_00010064 +
          *(float *)(((unsigned int)(auStack_10 + in_r0) & 0xfffffff0) + 8) * in_register_00010068;
  pfVar2 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  return;
}

