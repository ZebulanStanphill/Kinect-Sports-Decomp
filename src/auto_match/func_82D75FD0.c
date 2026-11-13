typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1e0;
extern unsigned int fStack_178;
extern unsigned int fStack_184;
extern unsigned int fStack_1ac;
extern unsigned int fStack_1c4;
extern unsigned int fStack_230;
extern int fn_82D6B540();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82139008;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();


/* WARNING: Removing unreachable block (ram,0x82d76240) */
/* WARNING: Removing unreachable block (ram,0x82d76280) */
/* WARNING: Removing unreachable block (ram,0x82d76294) */
/* WARNING: Removing unreachable block (ram,0x82d762a4) */
/* WARNING: Removing unreachable block (ram,0x82d762bc) */

void fn_82D75FD0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  float *pfVar4;
  float *pfVar5;
  unsigned __int64 in_r0;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int *piVar8;
  __int64 lVar9;
  int (**pcVar10)();
  unsigned char in_vs45 [16];
  float fVar11;
  unsigned int uVar12;
  float fVar13;
  unsigned int uVar14;
  float fVar15;
  unsigned int uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_230;
  unsigned char auStack_1e0 [16];
  unsigned char auStack_1d0 [12];
  float fStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  unsigned char **ppuStack_1b0;
  float fStack_1ac;
  char cStack_1a8;
  unsigned char auStack_1a0 [16];
  unsigned char auStack_190 [12];
  float fStack_184;
  float fStack_178;
  unsigned char auStack_100 [256];
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar9 = 10;
  fStack_184 = lbl_82134508;
  fStack_1ac = lbl_82134508;
  ppuStack_1b0 = &lbl_82139008;
  cStack_1a8 = '\0';
  lVar7 = uVar6 - 0x188;
  piVar8 = param_3 + -2;
  do {
    piVar8 = piVar8 + 2;
    lVar7 = lVar7 + 8;
    *(unsigned __int64 *)lVar7 = *(unsigned __int64 *)piVar8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  fStack_178 = (float)param_3[0x19] + fStack_178;
  pcVar10 = *(int (***)())((unsigned int)*(unsigned char *)((*(int *)(*param_1 + 0xc) + 0xd) * 0x20 +
                                       *(int *)(*param_2 + 0xc) + *param_3) * 0x14 + *param_3 +
                      0x9a8);
  (*pcVar10)(param_1,param_2,uVar6 - 0x180,uVar6 - 0x1b0);
  if (cStack_1a8 != '\0') {
    fVar11 = (float)param_3[2];
    iVar2 = (int)in_r0;
    puVar1 = (unsigned int *)((unsigned int)(auStack_190 + iVar2) & 0xfffffff0);
    uVar12 = puVar1[1];
    uVar14 = puVar1[2];
    uVar16 = puVar1[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_1d0 + iVar2) & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    puVar3[2] = uVar14;
    puVar3[3] = uVar16;
    puVar1 = (unsigned int *)((unsigned int)(auStack_1a0 + iVar2) & 0xfffffff0);
    uVar12 = puVar1[1];
    uVar14 = puVar1[2];
    uVar16 = puVar1[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_1e0 + iVar2) & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar12;
    puVar3[2] = uVar14;
    puVar3[3] = uVar16;
    piStack_1c0 = param_1;
    piStack_1bc = param_2;
    if ((fStack_184 < fVar11) && (param_5 != (int *)0x0)) {
      (**(int (***)())(*param_5 + 4))(param_5,uVar6 - 0x1e0);
    }
    pfVar4 = (float *)((unsigned int)(auStack_190 + (int)in_r0) & 0xfffffff0);
    fVar11 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar15 = pfVar4[2];
    fVar17 = pfVar4[3];
    pfVar4 = (float *)((int)param_3 + (int)in_r0 + 0x50 & 0xfffffff0);
    fVar21 = *pfVar4;
    fVar22 = pfVar4[1];
    fVar23 = pfVar4[2];
    fVar24 = pfVar4[3];
    uVar12 = storeVectorElementWordIndexed(in_vs45,0,uVar6 - 0x230);
    *(unsigned int *)(uVar6 - 0x230) = uVar12;
    if ((fStack_184 + fStack_230 <= lbl_821AAD20) &&
       ((float)param_3[0x18] + fStack_230 < lbl_821AAD20)) {
      pfVar4 = (float *)param_3[0x1a];
      if (*pfVar4 < fStack_184) {
        fn_82D6B540(uVar6 - 0x130,param_1[2]);
        if (-1 < (__int64)((unsigned __int64)(unsigned int)pfVar4[1] - 1)) {
          loadVectorLeftIndexed128(in_r0,uVar6 - 0x230);
          pfVar4 = (float *)(param_1[2] + 0x30U & 0xfffffff0);
          fVar18 = pfVar4[1];
          fVar19 = pfVar4[2];
          fVar20 = pfVar4[3];
          pfVar5 = (float *)((unsigned int)(auStack_100 + (int)in_r0) & 0xfffffff0);
          *pfVar5 = fVar21 * fVar11 + *pfVar4;
          pfVar5[1] = fVar22 * fVar13 + fVar18;
          pfVar5[2] = fVar23 * fVar15 + fVar19;
          pfVar5[3] = fVar24 * fVar17 + fVar20;
          (*pcVar10)(uVar6 - 0x220,param_2,uVar6 - 0x180,uVar6 - 0x210);
          return;
        }
        pcVar10 = *(int (***)())(*param_4 + 4);
      }
      else {
        if ((lbl_821AAD20 < fStack_184) &&
           ((fStack_184 - (fStack_184 + fStack_230)) * (float)param_4[1] < fStack_184)) {
          return;
        }
        fStack_1c4 = lbl_821AAD20;
        pcVar10 = *(int (***)())(*param_4 + 4);
      }
      (*pcVar10)(param_4,uVar6 - 0x1e0);
    }
  }
  return;
}

