extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82B90378();
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820287F0;
extern unsigned int lbl_820287F4;
extern unsigned int lbl_820287F8;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82B93E58(int param_1,unsigned int param_2,unsigned int param_3,float *param_4)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  __int64 lVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  __int64 lVar15;
  __int64 lVar16;
  __int64 lVar17;
  float *pfVar18;
  int iVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = (float *)fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = (float *)fn_82B8FDD0(param_1,param_4);
  }
  fVar1 = lbl_820287F8;
  fVar9 = lbl_820287F4;
  fVar8 = lbl_820287F0;
  uVar2 = *(unsigned int *)(param_1 + 0x68);
  iVar13 = *(int *)(param_1 + 0x60);
  iVar14 = *(int *)(param_1 + 100);
  uVar3 = *(unsigned int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x34);
  dVar27 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar20 = 0;
    uVar21 = 1;
  }
  else {
    uVar20 = (unsigned __int64)uVar2 - 1;
    uVar21 = 0xffffffffffffffff;
  }
  uVar12 = 0;
  pfVar18 = param_4;
  if ((unsigned __int64)uVar2 != 0) {
    do {
      uVar12 = uVar12 + 1;
      *pfVar18 = *pfVar18 * fVar8 + pfVar18[2] * fVar9 + pfVar18[1] * fVar1;
      pfVar18 = pfVar18 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0x68));
  }
  dVar28 = dVar27;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar10 = lbl_8202EE40;
  fVar9 = lbl_82005CCC;
  fVar8 = lbl_82005328;
  uVar12 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar11 = (uVar21 & 0xfffffff) * 0x10;
    lVar17 = (uVar20 & 0xfffffff) << 4;
    lVar15 = (uVar21 + uVar20 & 0xfffffff) << 4;
    lVar16 = (uVar20 - uVar21 & 0xfffffff) << 4;
    lVar22 = ((__int64)(int)(uVar2 - 1) * (__int64)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (__int64)iVar13 * (__int64)(int)param_2 + (__int64)iVar14 * (__int64)(int)param_3 +
             (unsigned __int64)uVar3 + (uVar21 & 0x7fffffff) * -2;
    dVar23 = (double)lbl_8200D8DC;
    dVar24 = (double)lbl_820288E0;
    dVar25 = (double)lbl_820288C8;
    do {
      iVar19 = (int)lVar17;
      fVar1 = *(float *)((uVar12 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)(dVar28 + (double)*(float *)(iVar19 + (int)param_4)) * fVar9;
      fVar6 = (float)((double)*(float *)((int)param_4 + iVar19 + 0xc) + dVar27) * fVar9;
      iVar13 = (int)(fVar5 + fVar1);
      iVar14 = (int)(fVar6 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar7 = *(int *)(param_1 + 0x5c) + (int)lVar16;
        dVar27 = (double)((fVar5 - (float)(__int64)iVar13) * fVar8);
        *(float *)(iVar7 + 0x10) = (float)(dVar27 * dVar25 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = *(int *)(param_1 + 0x5c) + iVar19;
        *(float *)(iVar7 + 0x10) = (float)(dVar27 * dVar24 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = *(int *)(param_1 + 0x5c) + (int)lVar15;
        dVar26 = (double)((fVar6 - (float)(__int64)iVar14) * fVar8);
        *(float *)(iVar7 + 0x10) = (float)(dVar27 * dVar23 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = *(int *)(param_1 + 0x5c) + (int)lVar16;
        *(float *)(iVar7 + 0x1c) = (float)(dVar26 * dVar25 + (double)*(float *)(iVar7 + 0x1c));
        iVar19 = *(int *)(param_1 + 0x5c) + iVar19;
        *(float *)(iVar19 + 0x1c) = (float)(dVar26 * dVar24 + (double)*(float *)(iVar19 + 0x1c));
        iVar19 = *(int *)(param_1 + 0x5c) + (int)lVar15;
        dVar28 = (double)(float)(dVar27 * dVar10);
        *(float *)(iVar19 + 0x1c) = (float)(dVar26 * dVar23 + (double)*(float *)(iVar19 + 0x1c));
        dVar27 = (double)(float)(dVar26 * dVar10);
      }
      iVar19 = iVar13;
      if (0xfe < iVar13) {
        iVar19 = 0xff;
      }
      if (iVar19 < 1) {
        iVar13 = 0;
      }
      else if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      iVar19 = iVar14;
      if (0xfe < iVar14) {
        iVar19 = 0xff;
      }
      if (iVar19 < 1) {
        iVar14 = 0;
      }
      else if (0xfe < iVar14) {
        iVar14 = 0xff;
      }
      uVar12 = uVar12 + 1;
      lVar17 = lVar11 + lVar17;
      lVar22 = lVar22 + (uVar21 & 0x7fffffff) * 2;
      *(unsigned short *)lVar22 = (short)iVar14 << 8 | (unsigned short)iVar13;
      lVar16 = lVar11 + lVar16;
      lVar15 = lVar11 + lVar15;
    } while (uVar12 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

