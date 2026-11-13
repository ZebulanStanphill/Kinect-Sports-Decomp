typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_82D401F8();
extern unsigned int lbl_82132D70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_82D45730(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float *pfVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [32];
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  pfVar1 = (float *)((unsigned int)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  pfVar1 = (float *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar2 * in_register_000100b0;
  pfVar1[1] = fVar3 * in_register_000100b4;
  pfVar1[2] = fVar4 * in_register_000100b8;
  pfVar1[3] = fVar5 * in_vr11;
  pfVar1 = (float *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar2 * in_register_00010090;
  pfVar1[1] = fVar3 * in_register_00010094;
  pfVar1[2] = fVar4 * in_register_00010098;
  pfVar1[3] = fVar5 * in_vr9;
  fn_82D401F8(param_2,auStack_20,auStack_30,param_4,param_4);
  return;
}

