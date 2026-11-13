typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82605EC0();
extern int fn_82D93128();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83297070;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


void fn_82607760(int *param_1,__int64 param_2)

{
  int (**pcVar1)();
  float *pfVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 in_r0;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned char in_vs32 [16];
  float fVar9;
  unsigned int uVar10;
  float fVar11;
  unsigned int uVar12;
  float fVar13;
  unsigned int uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  uVar7 = ZEXT48(&stack0x00000000);
  pfVar2 = (float *)((int)param_2 + 0x1b0U & 0xfffffff0);
  fVar15 = *pfVar2;
  fVar16 = pfVar2[1];
  fVar17 = pfVar2[2];
  fVar18 = pfVar2[3];
  uVar10 = storeVectorElementWordIndexed(in_vs32,0,uVar7 - 0x60);
  *(unsigned int *)(uVar7 - 0x60) = uVar10;
  fn_82D93128(param_2 + 0xe0);
  pfVar2 = (float *)((unsigned int)(&lbl_83297070 + (int)in_r0) & 0xfffffff0);
  fVar9 = pfVar2[1];
  fVar11 = pfVar2[2];
  fVar13 = pfVar2[3];
  pcVar1 = *(int (***)())(*param_1 + 0x1c);
  loadVectorLeftIndexed128(in_r0,uVar7 - 0x5c);
  pfVar3 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
  *pfVar3 = *pfVar2 * fVar15;
  pfVar3[1] = fVar9 * fVar16;
  pfVar3[2] = fVar11 * fVar17;
  pfVar3[3] = fVar13 * fVar18;
  uVar8 = (*pcVar1)(param_1,3);
  iVar6 = (int)in_r0;
  if ((uVar8 & 0xffffffff) != 0) {
    fn_82605EC0(uVar8,uVar7 - 0x40);
  }
  if (ltcg_pool_0_0f < (float)param_1[0x45]) {
    param_1[0x44] = 1;
    puVar4 = (unsigned int *)((unsigned int)(auStack_50 + iVar6) & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar12 = puVar4[2];
    uVar14 = puVar4[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_50 + iVar6) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar12;
    puVar5[3] = uVar14;
    puVar4 = (unsigned int *)((unsigned int)(auStack_40 + iVar6) & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar12 = puVar4[2];
    uVar14 = puVar4[3];
    puVar5 = (unsigned int *)((int)param_1 + iVar6 + 0x100 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar12;
    puVar5[3] = uVar14;
  }
  return;
}

