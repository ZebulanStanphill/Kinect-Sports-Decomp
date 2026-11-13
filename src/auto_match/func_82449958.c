typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_8242C1B8();
extern int fn_82435FA8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


unsigned __int64 fn_82449958(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  unsigned char auStack_40 [40];
  
  pfVar1 = (float *)(*(int *)(*(int *)(**(int **)(param_2 + 0x40) + 0x174) + 4) + 0x40U & 0xfffffff0
                    );
  fVar7 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  iVar3 = fn_8242C1B8();
  fn_82435FA8((double)ltcg_pool_0_0f,ZEXT48(&stack0x00000000) - 0x40,param_2,param_3,
                    *(unsigned char *)(*(int *)(iVar3 + 0x1a0) + 0x44));
  pfVar1 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);
  pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar2 = in_register_000100d0 * *pfVar1 + fVar7;
  pfVar2[1] = in_register_000100d4 * fVar4 + fVar8;
  pfVar2[2] = in_register_000100d8 * fVar5 + fVar9;
  pfVar2[3] = in_vr13 * fVar6 + fVar10;
  return param_1;
}

