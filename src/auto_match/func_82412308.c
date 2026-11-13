typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82412588();
extern int fn_8241CEB8();
extern int fn_82539560();
extern int fn_8253A918();
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821962E0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82412308(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  float *pfVar3;
  unsigned int *puVar4;
  bool bVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  int iVar7;
  int *piVar8;
  unsigned int uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  unsigned int uVar14;
  float fVar15;
  unsigned int uVar16;
  float fVar17;
  unsigned int uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  float afStack_60 [24];
  
  uVar6 = ZEXT48(&stack0x00000000);
  if (*(int *)(param_1 + 8) == 0) {
    piVar8 = *(int **)(param_1 + 0x24);
    iVar7 = *piVar8;
    puVar2 = (unsigned int *)((unsigned int)(piVar8 + 0x84) & 0xfffffff0);
    uVar14 = puVar2[1];
    uVar16 = puVar2[2];
    uVar18 = puVar2[3];
    uVar9 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x380);
    pfVar3 = (float *)((unsigned int)(piVar8 + 0x88) & 0xfffffff0);
    fVar20 = *pfVar3;
    fVar21 = pfVar3[1];
    fVar22 = pfVar3[2];
    fVar23 = pfVar3[3];
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x28) + 900);
    bVar5 = false;
    puVar4 = (unsigned int *)((unsigned int)(auStack_70 + (int)in_r0) & 0xfffffff0);
    *puVar4 = *puVar2;
    puVar4[1] = uVar14;
    puVar4[2] = uVar16;
    puVar4[3] = uVar18;
    dVar11 = (double)ltcg_pool_0_0f;
    dVar12 = (double)*(float *)(iVar7 + 0xa24);
    pfVar3 = (float *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
    *pfVar3 = fVar20;
    pfVar3[1] = fVar21;
    pfVar3[2] = fVar22;
    pfVar3[3] = fVar23;
    for (; uVar9 < uVar1; uVar9 = uVar9 + 0xd0) {
      if ((*(int *)(uVar9 + 0x94) != 0) && ((*(unsigned int *)(uVar9 + 0x9c) & 1) != 0)) {
        dVar10 = (double)*(float *)(uVar9 + 0xa4);
        if (dVar12 < dVar10) {
          bVar5 = true;
          dVar12 = dVar10;
        }
        if ((((*(float *)(param_1 + 0x48) < *(float *)(**(int **)(param_1 + 0x24) + 0x278)) &&
             ((double)*(float *)(param_1 + 0xd0) == dVar11)) &&
            ((double)*(float *)(**(int **)(param_1 + 0x24) + 0x2f4) < dVar10)) &&
           (iVar7 = fn_8253A918(uVar9,uVar6 - 0x70,uVar6 - 0x80), fVar13 = lbl_82191F78, iVar7 != 0
           )) {
          pfVar3 = (float *)(uVar9 + 0x10 & 0xfffffff0);
          fVar20 = *pfVar3;
          fVar21 = pfVar3[1];
          fVar22 = pfVar3[2];
          fVar23 = pfVar3[3];
          fVar15 = fVar20 * 0.0 +
                   fVar21 * *(float *)(((unsigned int)(&lbl_821962E0 + (int)in_r0) & 0xfffffff0) + 4) +
                   fVar22 * *(float *)(((unsigned int)(&lbl_821962E0 + (int)in_r0) & 0xfffffff0) + 8);
          pfVar3 = (float *)((int)afStack_60 + (int)in_r0 & 0xfffffff0);
          *pfVar3 = fVar15;
          pfVar3[1] = fVar15;
          pfVar3[2] = fVar15;
          pfVar3[3] = fVar15;
          if ((fVar13 < afStack_60[0]) && (*(int *)(param_1 + 0x34) == 0)) {
            fn_82412588(param_1);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      piVar8 = *(int **)(param_1 + 0x24);
      iVar7 = *piVar8;
      if ((*(int *)(iVar7 + 0xa20) != 0) && (bVar5)) {
        dVar12 = (double)fn_82539560(dVar12,(double)*(float *)(iVar7 + 0xa24),
                                      (double)*(float *)(iVar7 + 0xa28),
                                      (double)*(float *)(iVar7 + 0xa2c),
                                      (double)*(float *)(iVar7 + 0xa30));
        fVar13 = (float)((double)*(float *)(param_1 + 0x8c) + dVar12);
        dVar12 = (double)(*(float *)(iVar7 + 0xa34) - fVar13);
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((dVar12 < dVar11) << 2) |
                      (unsigned int)(NAN(dVar12) || NAN(dVar11)) << 2)) < 0.0) {
          fVar13 = *(float *)(iVar7 + 0xa34);
        }
        *(float *)(param_1 + 0x8c) = fVar13;
        if (*(int *)(*piVar8 + 0xa3c) == 0) {
          *(unsigned int *)(param_1 + 0x110) = 1;
          iVar7 = 0x120;
          pfVar3 = (float *)((unsigned int)(piVar8 + 0x78) & 0xfffffff0);
          fVar13 = *pfVar3;
          fVar15 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar19 = pfVar3[3];
          loadVectorLeftIndexed128(in_r0,uVar6 - 0x90);
        }
        else {
          *(unsigned int *)(param_1 + 0x130) = 1;
          iVar7 = 0x140;
          loadVectorLeftIndexed128(in_r0,uVar6 - 0x90);
          pfVar3 = (float *)((unsigned int)(piVar8 + 0x78) & 0xfffffff0);
          fVar13 = *pfVar3;
          fVar15 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar19 = pfVar3[3];
        }
        pfVar3 = (float *)(param_1 + iVar7 & 0xfffffff0);
        *pfVar3 = fVar13 * fVar20;
        pfVar3[1] = fVar15 * fVar21;
        pfVar3[2] = fVar17 * fVar22;
        pfVar3[3] = fVar19 * fVar23;
      }
    }
  }
  else {
    iVar7 = fn_8241CEB8(*(unsigned int *)(param_1 + 0x24),param_1,3);
    if (iVar7 != 0) {
      fn_82412588(param_1);
    }
  }
  return;
}

