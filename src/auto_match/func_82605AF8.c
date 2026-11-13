typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_82605F88();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82605AF8(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  float *pfVar3;
  float *pfVar4;
  unsigned __int64 in_r0;
  unsigned int uVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned char auStack_40 [64];
  
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if (uVar5 < uVar2) {
    dVar6 = (double)ltcg_pool_0_0f;
    do {
      if (dVar6 < (double)*(float *)(uVar5 + 0x270)) {
        pfVar3 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        uVar1 = *(unsigned short *)(uVar5 + 2);
        loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);
        pfVar4 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
        *pfVar4 = *pfVar3 * in_register_000100d0;
        pfVar4[1] = fVar7 * in_register_000100d4;
        pfVar4[2] = fVar8 * in_register_000100d8;
        pfVar4[3] = fVar9 * in_vr13;
        fn_82605F88(param_2,uVar1,uVar5 + 0x2b0,ZEXT48(&stack0x00000000) - 0x40,4);
      }
      uVar5 = uVar5 + 0x560;
    } while (uVar5 < uVar2);
  }
  return;
}

