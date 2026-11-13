typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_20;
extern int fn_82D89BD8();
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


void fn_82DFBF08(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned char in_vs45 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  unsigned char auStack_20 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_3 + 0x18);
  pfVar3 = (float *)(iVar1 + 0x1c0U & 0xfffffff0);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  uVar2 = storeVectorElementWordIndexed(in_vs45,0,uVar4 - 0x30);
  *(unsigned int *)(uVar4 - 0x30) = uVar2;
  loadVectorLeftIndexed128(in_r0,uVar4 - 0x30);
  pfVar3 = (float *)((unsigned int)(auStack_20 + (int)in_r0) & 0xfffffff0);
  *pfVar3 = fVar5 * in_register_000100c0;
  pfVar3[1] = fVar6 * in_register_000100c4;
  pfVar3[2] = fVar7 * in_register_000100c8;
  pfVar3[3] = fVar8 * in_vr12;
  fn_82D89BD8(iVar1);
  (**(int (***)())(*(int *)(iVar1 + 0xe0) + 0x44))(iVar1 + 0xe0,uVar4 - 0x20);
  return;
}

