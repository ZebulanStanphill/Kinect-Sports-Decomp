extern unsigned int *auStack_4020;
extern int fn_822BCD58();
extern int fn_822BCE38();
extern int fn_822BD060();
extern unsigned int lbl_8218EC10;
extern unsigned int ltcg_pool_0_0f;


float * fn_822BCB68(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  int *piVar7;
  unsigned int *puVar8;
  int iVar9;
  float *pfVar10;
  unsigned __int64 uVar11;
  float *pfVar12;
  __int64 lVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float afStack_4060 [4];
  float afStack_4050 [4];
  float afStack_4040 [8];
  unsigned int auStack_4020 [4104];
  
  uVar14 = ltcg_pool_0_0f;
  iVar5 = *param_2;
  iVar6 = param_2[1];
  if ((int)param_3 != 0) {
    iVar5 = 1;
    iVar6 = iVar6 << 1;
  }
  uVar11 = (__int64)iVar6 * (__int64)iVar5;
  lVar13 = 0x100;
  puVar8 = auStack_4020;
  do {
    puVar8[2] = uVar14;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[-8] = in_register_000104d0;
    puVar8[-7] = in_register_000104d4;
    puVar8[-6] = in_register_000104d8;
    puVar8[-5] = in_vr77;
    puVar8[-4] = in_register_000104d0;
    puVar8[-3] = in_register_000104d4;
    puVar8[-2] = in_register_000104d8;
    puVar8[-1] = in_vr77;
    puVar8[4] = in_register_000104d0;
    puVar8[5] = in_register_000104d4;
    puVar8[6] = in_register_000104d8;
    puVar8[7] = in_vr77;
    puVar8 = puVar8 + 0x10;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  fn_822BCE38(param_2,afStack_4040,*(unsigned int *)(param_1 + 0x238),param_3,param_4);
  iVar5 = (int)in_r0;
  pfVar10 = afStack_4040;
  if ((uVar11 & 0xffffffff) != 0) {
    pfVar12 = afStack_4040;
    do {
      fn_822BD060(param_2,pfVar12,*(unsigned int *)(param_1 + 0x238));
      if (((unsigned int)pfVar10[8] <= (unsigned int)pfVar12[8]) &&
         (iVar5 = fn_822BCD58(pfVar12,pfVar10), iVar5 != 0)) {
        pfVar10 = pfVar12;
      }
      iVar5 = (int)in_r0;
      uVar11 = uVar11 - 1;
      pfVar12 = pfVar12 + 0x10;
    } while (uVar11 != 0);
  }
  fVar3 = lbl_8218EC10;
  fVar1 = *pfVar10;
  fVar2 = pfVar10[4];
  if ((((fVar1 - lbl_8218EC10 <= fVar2) && (fVar2 <= fVar1 + lbl_8218EC10)) &&
      (fVar2 - lbl_8218EC10 <= pfVar10[0xc])) && (pfVar10[0xc] <= fVar2 + lbl_8218EC10)) {
    iVar6 = 0;
    piVar4 = *(int **)(*(int *)(param_1 + 0x238) + 0x8c);
    for (piVar7 = *(int **)(*(int *)(param_1 + 0x238) + 0x88); piVar7 != piVar4; piVar7 = piVar7 + 1
        ) {
      if (*(int *)(*piVar7 + 0x30) == 0) {
        puVar8 = (unsigned int *)(*piVar7 + 0x20U & 0xfffffff0);
        uVar14 = *puVar8;
        uVar15 = puVar8[1];
        uVar16 = puVar8[2];
        uVar17 = puVar8[3];
        puVar8 = (unsigned int *)((int)afStack_4050 + iVar5 & 0xfffffff0);
        *puVar8 = uVar14;
        puVar8[1] = uVar15;
        puVar8[2] = uVar16;
        puVar8[3] = uVar17;
        if ((afStack_4050[0] < fVar2 - fVar3) || (fVar2 + fVar3 < afStack_4050[0])) {
          puVar8 = (unsigned int *)((int)afStack_4060 + iVar5 & 0xfffffff0);
          *puVar8 = uVar14;
          puVar8[1] = uVar15;
          puVar8[2] = uVar16;
          puVar8[3] = uVar17;
          iVar9 = 1;
          if (fVar2 <= afStack_4060[0]) {
            iVar9 = -1;
          }
          iVar6 = iVar9 + iVar6;
        }
      }
    }
    if (iVar6 < 1) {
      if (-1 < iVar6) {
        return pfVar10;
      }
      fVar3 = (float)param_2[7];
      pfVar10[4] = fVar2 - fVar3;
      fVar1 = fVar1 - fVar3;
    }
    else {
      fVar3 = (float)param_2[7];
      pfVar10[4] = fVar3 + fVar2;
      fVar1 = fVar3 + fVar1;
    }
    *pfVar10 = fVar1;
  }
  return pfVar10;
}

