typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82F50108();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83297720;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_824772F0(unsigned __int64 param_1)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  unsigned __int64 uVar5;
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar6;
  float fVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  float afStack_30 [1];
  
  stack_pair_70.first = ltcg_pool_0_0f;
  stack_pair_70.second = lbl_821CA460;
  uStack_68 = ltcg_pool_0_0f;
  fn_82F50108(param_1,9,2,auStack_60,0,0,0);
  fn_82F50108(param_1,0xe,2,auStack_40,0,0,0);
  fn_82F50108(param_1,8,2,auStack_50,0,0,0);
  fn_82F50108(param_1,0xd,2,afStack_30,0,0,0);
  fVar4 = lbl_83297720;
  vectorSubtractFloatingPoint(in_vs45,in_vs44);
  uVar2 = (int)&stack_pair_70.first + in_r0 & 0xfffffff0;
  fVar6 = *(float *)(uVar2 + 4);
  fVar7 = *(float *)(uVar2 + 8);
  fVar1 = *(float *)(((unsigned int)(auStack_60 + in_r0) & 0xfffffff0) + 4) * fVar6 + 0.0 +
          *(float *)(((unsigned int)(auStack_60 + in_r0) & 0xfffffff0) + 8) * fVar7;
  uVar2 = (int)afStack_30 + in_r0 & 0xfffffff0;
  vectorSubtractFloatingPoint(in_vs43,in_vs44);
  fVar6 = *(float *)(uVar2 + 4) * fVar6 + 0.0 + *(float *)(uVar2 + 8) * fVar7;
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar6;
  pfVar3[1] = fVar6;
  pfVar3[2] = fVar6;
  pfVar3[3] = fVar6;
  if ((afStack_30[0] <= fVar4) || (uVar5 = 1, afStack_30[0] <= fVar4)) {
    uVar5 = 0;
  }
  return uVar5;
}

