typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern unsigned int fStack00000024;
extern unsigned int fStack_2c;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


unsigned __int64 fn_82430F70(double param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  unsigned __int64 in_r0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  float fStack00000024;
  unsigned char auStack_30 [4];
  float fStack_2c;
  
  fStack00000024 = (float)param_1;
  iVar1 = **(int **)(*(int *)(*(int *)(param_3 + 0x244) + 0x38) + 4);
  if (iVar1 != 0) {
    pfVar2 = (float *)(iVar1 + 0x50U & 0xfffffff0);
    in_register_000104d0 = *pfVar2;
    in_register_000104d4 = pfVar2[1];
    in_register_000104d8 = pfVar2[2];
    in_vr77 = pfVar2[3];
  }
  (**(int (***)())(**(int **)(*(int *)(param_3 + 0x244) + 0x38) + 0xc))(ZEXT48(&stack0x00000000) - 0x30)
  ;
  fVar3 = ltcg_pool_0_0f;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) + 0x24);
  iVar1 = (int)in_r0;
  pfVar2 = (float *)((unsigned int)(auStack_30 + iVar1) & 0xfffffff0);
  fVar4 = in_register_000100d0 * *pfVar2 + in_register_000104d0;
  fVar5 = in_register_000100d4 * pfVar2[1] + in_register_000104d4;
  fVar6 = in_register_000100d8 * pfVar2[2] + in_register_000104d8;
  fVar7 = in_vr13 * pfVar2[3] + in_vr77;
  pfVar2 = (float *)((unsigned int)(auStack_30 + iVar1) & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  if (fStack_2c < fVar3) {
    fVar7 = in_vr77;
    fVar6 = in_register_000104d8;
    fVar5 = in_register_000104d4;
    fVar4 = in_register_000104d0;
  }
  pfVar2 = (float *)(iVar1 + (int)param_2 & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  return param_2;
}

