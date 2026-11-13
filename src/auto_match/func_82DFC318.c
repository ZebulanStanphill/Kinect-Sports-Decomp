typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_82D89BD8();
extern int fn_82D93128();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


void fn_82DFC318(double param_1,double param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  float *pfVar4;
  float *pfVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  int iVar7;
  int *piVar8;
  double dVar9;
  unsigned char in_vs42 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned char auStack_40 [64];
  
  uVar6 = ZEXT48(&stack0x00000000);
  loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
  iVar7 = param_5 * 0xe0 + *(int *)(param_3 + 0x48);
  pfVar4 = (float *)(iVar7 + 0x10U & 0xfffffff0);
  fVar15 = *pfVar4;
  fVar16 = pfVar4[1];
  fVar17 = pfVar4[2];
  fVar18 = pfVar4[3];
  dVar9 = (double)lbl_821AAD20;
  pfVar4 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
  *pfVar4 = fVar15 * in_register_000100d0;
  pfVar4[1] = fVar16 * in_register_000100d4;
  pfVar4[2] = fVar17 * in_register_000100d8;
  pfVar4[3] = fVar18 * in_vr13;
  if (dVar9 < param_2) {
    iVar2 = *(int *)(param_3 + 0x18);
    fn_82D89BD8(iVar2);
    (**(int (***)())(*(int *)(iVar2 + 0xe0) + 0x50))(iVar2 + 0xe0,uVar6 - 0x40,iVar7 + 0x50);
  }
  if (*(int *)(iVar7 + 0x24) != 0) {
    piVar8 = (int *)(*(int *)(iVar7 + 0x24) + 0xe0);
    pfVar4 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
    fVar10 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar13 = pfVar4[3];
    fVar1 = *(float *)(*(int *)(*(int *)(param_3 + 0x1c) + 0x8c) + param_5 * 0x28 + 0x1c);
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
    pfVar5 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
    *pfVar5 = *pfVar4 * fVar15;
    pfVar5[1] = fVar10 * fVar16;
    pfVar5[2] = fVar11 * fVar17;
    pfVar5[3] = fVar13 * fVar18;
    dVar9 = (double)fn_82D93128(piVar8);
    pfVar4 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
    fVar11 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar12 = pfVar4[2];
    fVar14 = pfVar4[3];
    fVar10 = *(float *)(*(int *)(*(int *)(param_3 + 0x1c) + 0x8c) + param_5 * 0x28 + 0x20);
    uVar3 = storeVectorElementWordIndexed(in_vs42,0,uVar6 - 0x50);
    *(unsigned int *)(uVar6 - 0x50) = uVar3;
    fVar10 = (float)((double)(float)((double)fVar10 * dVar9) * param_1);
    if (fVar10 * fVar10 < -fVar1) {
      loadVectorLeftIndexed128(in_r0,uVar6 - 0x50);
      pfVar4 = (float *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
      *pfVar4 = fVar11 * fVar15;
      pfVar4[1] = fVar13 * fVar16;
      pfVar4[2] = fVar12 * fVar17;
      pfVar4[3] = fVar14 * fVar18;
    }
    (**(int (***)())(*piVar8 + 0x50))(piVar8,uVar6 - 0x40,iVar7 + 0x50);
  }
  return;
}

