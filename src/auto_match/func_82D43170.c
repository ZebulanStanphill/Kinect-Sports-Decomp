typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_70;
extern int fn_82D41C68();
extern int fn_82D43098();
extern int fn_82D43AA0();
extern unsigned int lbl_82132D70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


__int64 fn_82D43170(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  unsigned __int64 uVar5;
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00010070;
  float in_register_00010074;
  float in_register_00010078;
  float in_vr7;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  unsigned char auStack_70 [112];
  
  uVar5 = fn_82D43098();
  fn_82D43AA0(uVar5,param_2);
  fn_82D41C68(uVar5,auStack_70);
  uVar1 = *(unsigned int *)(param_1 + 0xc4);
  iVar2 = *(int *)(param_1 + 0xe0);
  pfVar3 = (float *)((unsigned int)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  vectorAddFloatingPoint(in_vs42,in_vs41);
  vectorSubtractFloatingPoint(in_vs41,in_vs42);
  pfVar4 = (float *)(in_r0 + param_1 + 0xa0 & 0xfffffff0);
  *pfVar4 = *pfVar3 * in_register_00010080;
  pfVar4[1] = fVar6 * in_register_00010084;
  pfVar4[2] = fVar7 * in_register_00010088;
  pfVar4[3] = fVar8 * in_vr8;
  pfVar3 = (float *)((unsigned int)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  pfVar4 = (float *)(in_r0 + param_1 + 0x90 & 0xfffffff0);
  *pfVar4 = *pfVar3 * in_register_00010070;
  pfVar4[1] = fVar6 * in_register_00010074;
  pfVar4[2] = fVar7 * in_register_00010078;
  pfVar4[3] = fVar8 * in_vr7;
  *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0x18) + iVar2;
  return (unsigned __int64)uVar1 - 1;
}

