typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822C6938();
extern int fn_825613E0();
extern V16 loadVectorLeftIndexed128();


void fn_822FB5C8(int param_1,int param_2)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  uVar3 = (unsigned __int64)uVar1;
  pfVar2 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  loadVectorLeftIndexed128(in_r0,uVar3 + 0x40);
  fVar4 = *pfVar2 * in_register_000100d0;
  fVar5 = pfVar2[1] * in_register_000100d4;
  fVar6 = pfVar2[2] * in_register_000100d8;
  fVar7 = pfVar2[3] * in_vr13;
  fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
  pfVar2 = (float *)(uVar1 + 0x10 & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  loadVectorLeftIndexed128(uVar3,0x48);
  fn_822C6938(uVar3);
  return;
}

