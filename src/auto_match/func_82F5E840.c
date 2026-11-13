typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F534A0();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


unsigned __int64 fn_82F5E840(unsigned __int64 param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  fn_82F534A0();
  pfVar1 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
  pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar2 = in_register_00010010 - *pfVar1 * in_register_000100d0;
  pfVar2[1] = in_register_00010014 - fVar3 * in_register_000100d4;
  pfVar2[2] = in_register_00010018 - fVar4 * in_register_000100d8;
  pfVar2[3] = in_vr1 - fVar5 * in_vr13;
  return param_1;
}

