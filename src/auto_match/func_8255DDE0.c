typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_8255DDE0(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 != 0) {
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
    pfVar1 = (float *)(param_1 + 0x2d0U & 0xfffffff0);
    in_register_00010000 = *pfVar1 * in_register_00010000;
    in_ACC = pfVar1[1] * in_ACC;
    in_register_00010008 = pfVar1[2] * in_register_00010008;
    in_vr0 = pfVar1[3] * in_vr0;
    pfVar1 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
    *pfVar1 = in_register_00010000;
    pfVar1[1] = in_ACC;
    pfVar1[2] = in_register_00010008;
    pfVar1[3] = in_vr0;
  }
  if (param_3 == 0) {
    return;
  }
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  pfVar1 = (float *)(param_1 + 0x2e0U & 0xfffffff0);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  pfVar2 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
  *pfVar2 = *pfVar1 * in_register_00010000;
  pfVar2[1] = fVar3 * in_ACC;
  pfVar2[2] = fVar4 * in_register_00010008;
  pfVar2[3] = fVar5 * in_vr0;
  return;
}

